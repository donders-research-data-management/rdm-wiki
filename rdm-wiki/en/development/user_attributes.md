# RDM user attributes

The RDM user attributes are implemented as key-value pairs associated with the iRODS user object.  The table below summarises availabel attributes:


| key                          | value / format          | multiple | IdP | RA | U |
| ---------------------------- | ----------------------- | -------- | --- | -- | - |
| givenName                    | string w/ UTF-8 support |     N    |  Y  | N  | N |
| surName                      | string w/ UTF-8 support |     N    |  Y  | N  | N |
| displayName                  | string w/ UTF-8 support |     N    |  Y  | N  | N |
| homeOrganisation             | domain (i.e. ru.nl      |     N    |  Y  | N  | N |
| uid                          | IdP-specific user id    |     N    |  Y  | N  | N |
| email                        | email address           |     N    |  Y  | N  | N |
| researcherId                 | string                  |     N    |  N  | N  | Y |
| openResearchAndContributorId | string                  |     N    |  N  | N  | Y |
| personalWebsiteUrl           | HTTP URL                |     N    |  N  | N  | Y |
| attributeLastUpdatedDateTime | YYYY-MM-DDTHH:MM:SS     |     N    |  N  | N  | N |
