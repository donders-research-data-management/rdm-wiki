# DTAP Environments for the RDM System

For the development of the RDM system, a set of DTAP (development-testing-acceptance-production) environments is defined as the table below.

Due to space limitation, the domain names of servers in the following table are assumed to always be `uci.ru.nl`. Thus they are ignored in the table.

| Environment  | Service endpoints | WebApp server | iCAT server | iCAT zone | resource servers |
| -------------| ----------------- | ------------- | ----------- | --------- | ---------------- |
| Production   | https://data.donders.ru.nl (CMS) <br/> https://webdav.data.donders.ru.nl (WebDAV) |  nonvlinder (CMS) <br/> meeltor (WebDAV) | nummervlinder | rdm | kanaaljuffer <br/> kerstbalgal |
| Acceptance   | https://rdmappacc.uci.ru.nl (CMS) <br/> https://webdav.rdmappacc.uci.ru.nl (WebDAV) |  klampkever (CMS) <br/> klokjesdikpoot (WebDAV) | kaswittevlieg | rdmacc | kanaaljuffer <br/> kerstbalgal |
| Development  | https://localhost:8443/rdm-web-client (CMS) | -  | _tobedefined_ | rdmtst | - |

For SURFConext, the CMS service endpoint should also be recognised as the _Service Provider (SP) ID_.

The __Production__ environment is exported to naive users with well-defined service URL's.  Persistency and availability of data and metadata uploaded/modified via the well-defined service URL's should be maintained.  It implies that any re-organisation of underlying servers should also take into account data migration.

The __Acceptance__ environment is used for demonstrating new functionalities (e.g. the Sprint Demo), and tests by non-naive users. 

The __Development__ environment is used for developing new functionalities, and for developers to test newer version of software/tools/operating systems.  Therefore, it's a rather floating system.  In the __Development__ environment, developers will use their own desktop/laptop to run the CMS service, but connect to an iCAT server dedicated for developing iRODS rules and microservices.  On this same iCAT server runs also the iRODS resource server.


