# Protocol for Research Administrators

## 1.	Version
Draft version, last update by Eric, February 8, 2016.

## 2.	Scope
This protocol is in effect as of DD-MM-YYYY and replaces all previous versions of the DI-RDM protocol for research administrators .

## 3.	Audience
The audience for this protocol consists of all research administrators. This group is to be distinguished from the researchers, who have their own protocol. The research administrators include the center administrative directors and the persons that act on their behalf (e.g., secretaries). This protocol only describes the administrative actions that are part of Research Data Management (RDM) and therefore is additional to the existing management workflows of the Donders Institute (DI).  

## 4.	Context

The context of this protocol is Research Data Management (RDM) involving a digital repository. It assumes that the research administrator has access to the repository. Changes to the organization and user interface of the repository may have consequences for this protocol, and these will be integrated in future versions of this protocol. The research administrator should therefore always ensure that she or he is using the latest version of this protocol.

This protocol deals with

1. _Data preservation_ for internal reuse
2. _Research documentation_ for increasing reproducibility
3. _Data sharing_ with the external scientific community

The research administrator initiates data collections and manages their initial permissions. The repository implements separate collections for preservation, for documentation and for sharing. These collections represent the data in binary form in files and/or directories.

## 5.	The Research Administrator Role

Researchers and research administrators have different roles. The difference between the different researcher roles and that of a research administrator is in the way of interacting with the digital repository:

1.	Researchers interact with the repository by creating, modifying, and viewing files and by providing collection attributes (see the DI RDM Protocol for Researchers).
2.	Research administrators mainly interact with the repository by initiating and initializing collections, as described in this protocol. And besides this main task, research administrators also have a task in user administration.

Within the digital repository, the research administrator role is mainly defined in terms of rights with respect to particular collections of files. There are three types of collections: data acquisition collections (DACs), research documentation collections (RDCs), and data sharing collections (DSCs). Building these collections involves uploading files and providing collection attributes, as described in the _DI RDM Protocol for Researchers_.

The collections are aggregated by Donders center (DCC, DCCN, DCN_s, and DCN_m). A collection is assigned to one of the centers if it is initiated by that center’s research administrator. This organization of the collections in no way limits the access to these collections by members of other Donders centers or RU-external institutes. This because authorization for collection access is at the level of the collections rather than at the center level. Only the initial authorization for the collection manager role (see 6.1.3) is performed by a center's research administrator.

The rights and responsibilities of research administrators involve the following:

1.	Initiating, initializing and managing collections.
2.	Authorizing users at the center level.
3.	Managing and linking user accounts.

These three tasks are now described in more detail. For the description of the first task (initiating, initializing and managing collections), we have to make some distinctions between DACs, RDCs and DSCs.

## 6.	Initiating, Initializing and Managing Collections

### 6.1.	Common Protocol for all Collection Types

#### 6.1.1.	Collection Initiation

A collection is initiated by the research administrator following a request by a researcher that is formally approved by the center director (or that conforms to the criteria put forward by the center director).

The research administrator configures the collection on the digital repository and specifies the disk space and the time period in which data can be added. The initial disk space and time period are based on center policies (see _Center Specific_). Increasing the allocated disk space and/or changing the time period can only be performed by the research administrator.

#### 6.1.2.	Naming Convention

The name of a collection can be chosen freely, subject to the following constraints:

1.	All DACs have a name that starts with “DAC”.
2.	All RDCs have a name that starts with “RDC”.
3.	All DACs have a name that starts with “DSC”.
4.	The name does not involve the following characters: /, >, <, |, :, and &.

#### 6.1.3.	Assigning a Collection Manager

The research administrator assigns at least one person in the role of collection manager. This role is described in the _DI RDM Protocol for Researchers_.

The collection manager must be an employee of the university. This also holds if the collection is a part of contract or collaborative research in which the research question was put forward by the client/collaborator. In the latter case, the client/collaborator can (and is likely to be) a collection contributor. Collection contributors and viewers are added to the collection by the collection manager.

If the contract of the collection manager ends, a new collection manager must be added to the collection. The original collection manager can remain contributor or viewer if the involvement in the collection is continued. If the research administrator notices that a collection manager's contract has ended, the following actions are required:

1.	In case the old collection manager was the only one with this role, in agreement with the center director, add a new collection manager to the collection.
2.	Give the old collection manager the role of collection viewer.


### 6.2.	Protocol Specific for Data Acquisition Collections

##### 6.2.1. General

Managing the initiation of Data Acquisition Collections is done at the center level.

##### 6.2.2. Center specific - DCCN

The DCCN manages the initiation of new DACs in the Project Proposal Meetings (PPMs). Preparation of a PPM as well as the procedure itself, are described on the following intranet page: https://intranet.donders.ru.nl/index.php?id=442.

##### 6.2.3. Center specific - DCC

The DCC manages the initiation of new DACs via a form that has to be completed by the researcher and which must be approved by the center director.

The DAC collection name is constructed according to the following standard:

DAC\_YYYYMMDD\_freename  ,

in which YYYY is the year, MM the month, and DD the day at which the collection is initiated. The component <freename> should be an acronym for the study to which this collection belongs. For example: DAC_20150623_AttSelConMon.

##### 6.2.4. Center specific - DCN_s

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/20

##### 6.2.5. Center specific - DCN_m

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/20

### 6.3.	Protocol Specific for Research Documentation Collections

##### 6.3.1. General

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/21

Researchers that plan to submit a manuscript for publication must inform the research administrator. The research administrator will initate the RDC and add the senior author (if he/she is a DCX employee) or the first author as collection manager. Granting all other authors access and managing the content of the collection is to be done by the collection manager.

An RDC must be initiated before the proofs of the accepted journal article are sent back to the journal's editorial office. An RDC may also be initiated in a very early stage of the process that eventually results in a publication, for instance, at the start of the data analysis. This has the advantage that the RDC can be used to share all kinds of documents with the future co-authors (analysis scripts, figures of preliminary results, the different versions of the manuscript, ...).  The RDC is _not_ to be used for storing processed data. 

##### 6.3.2. Center specific

This section is intentionally empty.

### 6.4.	Protocol Specific for Data Sharing Collections

##### 6.4.1. General

Researchers that plan to submit a manuscript for publication must inform the research administrator. The research administrator will initate the DSC and add the senior author (if he/she is a DCX employee) or the first author as collection manager. Granting all other authors access and managing the content of the collection is to be done by the collection manager.

A DSC must be initiated before the proofs of the accepted journal article are sent back to the journal's editorial office.

An embargo period of up to 2 years can be granted, provided the center director has approved in writing.

In case the data is not to be shared, the written request by the researcher and the approval of the center director will be uploaded to the Data Sharing Collection.  

##### 6.4.2. Center specific

This section is intentionally empty.

## 7.	Authorizing Users at the Center Level

Besides administrative actions that pertain to individual collections, the research administrator must also authorizing a user in the role of DCX employee (with DCX representing DCC, DCCN, DCN_s, or DCN_m). Only DCX employees can be added as a manager to their center’s collections. Also, DCX employees can view the metadata of all of a center’s collections. For the research administrator there are two actions to consider:

1. The research administrator must specify the RDM users that are an employee in the respective center.
2. If the contract of an employee ends, the research administrator must revoke the role of employee for that user.

Note that upon termination of a contract the user account should not be deleted in the RDM system. The access to the RDM system will automatically be disabled by the IdP.

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/19 and see https://github.com/Donders-Institute/donders-institute.github.io/issues/23

## 8.	Managing and Migrating User Accounts

### 8.1.	Managing User Accounts

In the default scenario, the research administrator is not involved in the creation of user accounts, because they are created automatically in a sign-up procedure (see the _DI RDM Protocol for Researchers_). 

In some cases it may be necessary for the research administrator to initiate accounts for new users that cannot use the IdP-based login procedure. This involves a procedure that lies largely outside the scope of this protocol and/or involves a procedure that is not yet part of it. This  is described in the [Frequently Asked Questions](rdm-wiki/en/faq/other.md). 



TBD: the following is correct, but not appropriate in the context of this protocol. See https://github.com/Donders-Institute/donders-institute.github.io/issues/24

To provide some context for this issue, one must know that DACs and RDCs can only be accessed if the user has signed up against the RU or RUMCN Identity Providers (IdP) or a so-called trusted federated authentication infrastructure (SurfConext, EduGain). Potential users may not (anymore) have access to one of these identity providers. To help these potential users, they can be given an account in the RU’s Relation Management System (Relatie Beheer Systeem). A so-called E-account can be created with limited administrative work, and seems the most useful account type for this purpose. The essential requirement is that the account should allow the owner to make use of the IdP service of the RU. The collection manager will ask the research administrator to give a potential user an account in the RU’s Relation Management System.

At this moment, it is not possible to give access to potential users that do not have access to a trusted federated authentication infrastructure, neither via their employer nor via the RU’s Relation Management System. If this turns out to be a serious problem, it is in principle possible to allow the research administrator to create an internal account, involving a login ID and an initial password, thus bypassing IdP-based authentication. These self-created accounts have to be managed, and the requirements for this management are identical to the ones for the management of the E-accounts created by the RU’s Relation Management System. When this becomes necessary, this protocol will be updated with these requirements.


### 8.2.	Migrating User Accounts

TBD: the following is correct, but not appropriate in the context of this protocol. See https://github.com/Donders-Institute/donders-institute.github.io/issues/24

Many users change organization and thereby also IdP. When a user signs up using the credentials (ID plus password) provided by this new organization, a new internal account is created specifically for his new organization. Importantly, when subsequently authenticating (logging in) using the credentials of his new organization, he cannot access the collections for which he is authorized if he authenticates against the IdP of his old organization. However, the research administrator can change his new internal account such that the user keeps his access to those collections also when authenticating against the IdP of his new organization. This change involves a migration of the old internal account such that it can be accessed via authenticating against the IdP of his new organization. For performing this migration, the research administrator has access to a portal in which he must change the value of the appropriate field.
To prevent misunderstanding, migrating the old internal account of a former RU employee such that it can be accessed by authenticating against the IdP of his new organization, does not imply that this user can still be manager in any of his old collections: these authorizations have to be modified by another collection manager or the research administrator.


