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
  |- /Organisation_1
  |   |- /Organisational_Unit_A
  |   |   |- RDM_Collection_I
  |   |   |- RDM_Collection_II
  |   |   |- ...
  |   |- /Organisational_Unit_B
  |   |- ...
  |- /Organisation_2
  |- ...
```

Thus, the iRODS namespace of `RDM_Collection_I` is given as `/Zone/Organisation_1/Organisational_Unit_A/RDM_Collection_I`.  Within the collection namespace, users (with `contributor` or `manager` role) have freedom to organise data belongs to the collection.

### Collection identifiers

An RDM collection has at-least one identifier.  The obviouse one is the internal identifier, which is given very similar to the collectio namespace discussed before. For example, the collection with namespace `/Zone/Organisation_1/Organisational_Unit_A/RDM_Collection_I` also acquires an internal identifier `Organisation_1.Organisational_Unit_A.RDM_Collection I`.

When a collection gets closed (see _collection state and versioning_ below), a frozen copy of it is created.  At the same time, the frozen copy also acquires a global identifier from the [European Persistent Identifier Consortium (ePIC)](http://www.pidconsortium.eu/).

### Collection state and versioning

Initially, a collection is in state `open`.  When a versioning is needed, e.g. for publishing a collection, one triggers the state transition from `open` to `tobeclosed` then to `closed`.  Possible state transitions are illustrated in the picture below:


At the state of `tobeclosed`, the collection is set to read-only.  When the state is moved to state `closed`, the collection is cloned into a frozen copy.  The frozen copy is strictly read-only, and has data content and collection attributes identical to its original collection.

### iRODS storage resources

With the target of maintaining two copies of data in the RDM system, we virtually distinguish the iRODS storage resources into the so-called _online_ and _nearline_ resources.  Generally speaking, the _online_ resource is the location where the first copy of data is created (e.g. when a file is just uploaded to the system).  Data arrived at the _online_ resource is replicated in the background do the _nearline_ resource.  Both _nearline_ and _online_ resources are used to serve data download.

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

In the example, resource `resc_nl` is the _nearline_ resource; while `resc_dccn`, `resc_dcc`, `resc_dcn_s` and `resc_dcn_m` are _online_ resources, each for a centre/organisational unit of the Donders Institute.  Moreover, the _online_ resources are defined as a [composible resource](https://docs.irods.org/4.1.7/manual/architecture/#composable-resources) to be able to integrate distributed/heterogeneous data storages.

### Attributes and metadata

In the RDM system, attributes are used to describe a user or a collection.  Those attributes are stored in key-value pairs in the iCAT database, along with the user and collection in question.  The defined user attributes are found [here](user_attributes.md); and [this page](collection_attributes.md) lists all collection attributes. 

Metadata only becomes relevant when there is an recipient involved. Given a metadata schema (e.g. DataCite), attributes are tramsformed into the metadata fields defined by the schema.

## Data storage

## Auditing and reporting
