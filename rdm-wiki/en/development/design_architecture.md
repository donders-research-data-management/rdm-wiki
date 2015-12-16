# System design and architecture

## Authentication

The RDM system makes use of SURFConext (and eventually the EduGAIN) service for user authentication.  It implies that users already have valid account from collaborating institutues world-wide will have immediate access to the system.  

## Authorisation

In the RDM system, authorisation is goverened by user roles that are defined in two aspects. In one aspect, there are three user roles associated with each individual RDM collection. The three roles are `manager`, `contributor` and `viewer`.  In the other aspect, there are roles closely related to user's function in an organisational unit, and they are `ou_user` and `ou_admin` roles.  Authorisation policy of those roles are defined in [the RDM protocols]().

The iRODS user group is utilised to make technical implementation of the user roles.  Technically speaking, granting (revoking) a user with (from) an user role is done by adding (removing) the user to (from) a particular iRODS user group.  Those actions are triggered automatically at relevant policy-enforcement points in iRODS.  For example, when a collection's viewer/manager/contributor attributes are modified.  

## Data management

The RDM data management system is based on [iRODS](http://irods.org).  iRODS rules are implemented to support the data management workflows specified in [the protocols]().

### Collection namespace

In iRODS, the following directory-tree structure is defined to reflect a hierachy of __a `Collection` belongs to a `Organisational Unit` belongs to a `Organisation` in a iRODS `Zone`__:

```bash
/Zone
  |- /Organisation 1
  |   |- /Organisational Unit A
  |   |   |- RDM Collection I
  |   |   |- RDM Collection II
  |   |   |- ...
  |   |- /Organisational Unit B
  |   |- ...
  |- /Organisation 2
  |- ...
```

Thus, the iRODS namespace of `RDM Collection I` is given as `/Zone/Organisation 1/Organisational Unit A/RDM Collection I`.  Within the collection namespace, users (with `contributor` or `manager` role) have freedom to organise data belongs to the collection.

### iRODS storage resources

With the aim of keeping two copies of data in the RDM system, we virtually distinguish the iRODS storage resources into the so-called _online_ and _nearline_ resources.  Generally speaking, the _online_ resource is the location where the first copy of data is created (e.g. file upload).  Data arrived at the _online_ resource is replicated in the backgroun do the _nearline_ resource.  Both _nearline_ and _online_ resources are used to serve data download.

Furthermore, each `Organisation Unit` is associated to a _online_ resource to host the collection data with namespace under the same `Organisational Unit`.  Qotum is then applied to the underlying data storage attached to the _online_ resource.  Thus, each `Organisational Unit` is limited to a physical storage boundary in the RDM system.

An example snapshot of the iRODS resource tree:

```bash
resc_dcc:random
└── vault_dcc_1
resc_dccn:random
└── vault_dccn_1
resc_dcn_m:random
└── vault_dcn_m_1
resc_dcn_s:random
└── vault_dcn_s_1
resc_nl:random
└── rdmRes2Test
```

where `resc_nl` is the _nearline_ resource, while `resc_dccn`, `resc_dcc`, `resc_dcn_s` and `resc_dcn_m` are _online_ resources.  In this example, the _online_ resources are made as a [composible resource](https://docs.irods.org/4.1.7/manual/architecture/#composable-resources) to be able to integrate multiple distributed/heterogeneous data storages.

### Attributes and metadata

## Data storage

## Auditing and reporting
