# RDM user attributes

The RDM user attributes are implemented as key-value pairs associated with the iRODS user object.  The table below summarises availabel attributes.

Meaning of the table columns:

* __key__: the attribute key
* __value / format__: the value and/or format of the value
* __multiple__: whether the attribute can have multiple values
* __IdP__: whether the attribute value is copied from IdP
* __RA__: whether the attribute is editable by research administrator 
* __U__: whether the attribute is editable by the user

| key                          | value / format          | multiple | IdP  | RA   | U    |
| ---------------------------- | ----------------------- | -------- | ---- | ---- | ---- |
| givenName                    | string w/ UTF-8 support |          |   Y  |      |      |
| surName                      | string w/ UTF-8 support |          |   Y  |      |      |
| displayName                  | string w/ UTF-8 support |          |   Y  |      |      |
| homeOrganisation             | domain (i.e. ru.nl)     |          |   Y  |      |      |
| uid                          | IdP-specific user id    |          |   Y  |      |      |
| email                        | email address           |          |   Y  |      |      |
| organisationalUnit           | DCCN, DCC, DCN_M/S      |          |      |   Y  |      |
| researcherId                 | string                  |          |      |      |  Y   |
| openResearchAndContributorId | string                  |          |      |      |  Y   |
| personalWebsiteUrl           | HTTP URL                |          |      |      |  Y   |
| attributeLastUpdatedDateTime | YYYY-MM-DDTHH:MM:SS     |          |      |      |      |

