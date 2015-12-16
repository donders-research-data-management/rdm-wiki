# System design and architecture

## Authentication

The RDM system makes use of SURFConext (and eventually the EduGAIN) service for user authentication.  It implies that users already have valid account from collaborating institutues world-wide will have immediate access to the system.  

## Authorisation

In the RDM system, authorisation is goverened by user roles that are defined in two aspects. In one aspect, there are three user roles associated with each individual RDM collection. The three roles are `manager`, `contributor` and `viewer`.  In the other aspect, there are roles closely related to user's function in an organisational unit, and they are `ou_user` and `ou_admin` roles.  Authorisation policy of those roles are defined in [the RDM protocols]().

The iRODS user group is utilised to make technical implementation of the user roles.  Technically speaking, granting (revoking) a user with (from) an user role is done by adding (removing) the user to (from) a particular iRODS user group.  Those actions are triggered automatically at relevant policy-enforcement points in iRODS.  For example, when a collection's viewer/manager/contributor attributes are modified.  

## Data management

The RDM data management system is based on [iRODS](http://irods.org).  In iRODS, the following directory-tree structure is defined to reflect a hierachy of __a `Collection` belongs to a `Organisational Unit` belongs to a `Organisation` in a iRODS `Zone`__:

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

### Resource arrangement


### Attributes and metadata

## Data storage

## Auditing and reporting
