# RDM user attributes

The RDM user attributes are implemented as key-value pairs associated with the iRODS user object.  The table below summarises availabel attributes:

| key                          | value / format          | multiple | IdP | RA | U |
| ---------------------------- | ----------------------- | -------- | --- | -- | - |
| givenName                    | string w/ UTF-8 support |          |  Y  |    |   |
| surName                      | string w/ UTF-8 support |          |  Y  |    |   |
| displayName                  | string w/ UTF-8 support |          |  Y  |    |   |
| homeOrganisation             | domain (i.e. ru.nl      |          |  Y  |    |   |
| uid                          | IdP-specific user id    |          |  Y  |    |   |
| email                        | email address           |          |  Y  |    |   |
| researcherId                 | string                  |          |     |    | Y |
| openResearchAndContributorId | string                  |          |     |    | Y |
| personalWebsiteUrl           | HTTP URL                |          |     |    | Y |
| attributeLastUpdatedDateTime | YYYY-MM-DDTHH:MM:SS     |          |     |    |   |
