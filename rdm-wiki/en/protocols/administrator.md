# Protocol for Research Administrators

## 1.	Version
Draft version, last update by Eric, January 5, 2016.

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

The research administrator should initiate collection and manage their permissions. These data are represented in binary form in files and/or directories that are organized in collections. The repository implements separate collections for preservation, for research documentation and for sharing. 

## 5.	The Research Administrator Role

Researchers and research administrators have different roles. The difference between the different researcher roles and that of a research administrator is in the way of interacting with the digital repository:

1.	Researchers interact with the repository by creating, modifying, and viewing files and by providing collection attributes (see the DI RDM Protocol for Researchers).
2.	Research administrators mainly interact with the repository by initiating and initializing collections, as described in this protocol. And besides this main task, research administrators also have a task in user administration.

Within the digital repository, the research administrator role is mainly defined in terms of rights with respect to particular collections of files. There are three types of collections: data acquisition collections (DACs), research documentation collections (RDCs), and data sharing collections (DSCs). Building these collections involves uploading files and providing collection attributes, as described in the _DI RDM Protocol for Researchers_.

The collections are aggregated by Donders center (DCC, DCCN, DCN_s, and DCN_m). A collection is assigned to one of the centers if it is initiated by that center’s research administrator. This way of organizing the collections does limits the access to these collections by members of other Donders centers or RU-external institutes, as the authorization for collection access is at the level of the collections (rather than at the center level). Authorization for the collection manager role, however, is at the center level.

The rights and responsibilities of research administrators involve the following:

1.	Initiating, initializing and managing collections
2.	Authorizing users at the center level. 
3.	Creating, managing and linking user accounts

These three tasks are now described in more detail. For the description of the first task (initiating, initializing and managing collections), we have to make some distinctions between DACs, RDCs and DSCs. 

## 6.	Initiating, Initializing and Managing Collections

### 6.1.	Common Protocol for all Collection Types

#### 6.1.1.	Collection Initiation

A collection is initiated by the research administrator following a request by a researcher that is formally approved by the center director (or that conforms to the criteria put forward by the center director).

The research administrator configures the collection on the digital repository and specifies the disk space and the time period in which data can be added. The initial disk space and time period are based on center policies (see _Center Specific_). Increasing the disk space and/or changing the time period can only be performed by the research administrator.

#### 6.1.2.	Naming Convention

The name of a collection can be chosen freely, subject to the following constraints:
1.	All DACs have a name that starts with “DAC”.
2.	All RDCs have a name that starts with “RDC”.
3.	All DACs have a name that starts with “DSC”.
4.	The name does not involve the following characters: /, >, <, |, :, and &.

#### 6.1.3.	Assigning a Collection Manager

The research administrator assigns to the collection at least one person in the role of collection manager. This role is described in the _DI RDM Protocol for Researchers_.

The collection manager must be an employee of the university. This also holds if the collection is a part of contract or collaborative research in which the research question was put forward by the client/collaborator. In the latter case, the client/collaborator can (and is likely to be) a collection contributor. Collection contributors and viewers are added to the collection by the collection manager.
If the contract of the collection manager ends, a new collection manager must be added to the collection. The original collection manager can remain contributor or viewer if the involvement in the collection is continued. If the research administrator notices that a collection manager's contract has ended, then he must do the following:

1.	Give the old collection manager the role of collection viewer.
2.	In case the old collection manager was the only one with this role, in agreement with the center director, add a new collection manager to the collection.


### 6.2.	Protocol Specific for Data Acquisition Collections

#### 6.2.1.	Required

##### 6.2.1.1. General

##### 6.2.1.2. Center specific - DCC

The DCC manages the initiation of new DACs via a form that has to be completed by the researcher and which must be approved by the center director.

The DAC collection name is constructed according to the following standard: 

“DAC” _<YYYYMMDD>_<freename>  ,

in which YYYY is the year, MM the month, and DD the day at which the collection is initiated. The component <freename> should be an acronym for the study to which this collection belongs. For example: DAC_20150623_AttSelConMon.

DCCN

The DCCN manages the initiation of new DACs in the Project Proposal Meetings (PPMs). Preparation of a PPM as well as the procedure itself, are described on the following intranet page: https://intranet.donders.ru.nl/index.php?id=442.

DCN_s

DCN_m



#### 6.2.2.	Recommended

General 

Center specific

### 6.3.	Protocol Specific for Scientific Integrity Collections

#### 6.3.1.	Required

General

Center specific

#### 6.3.2.	Recommended

General

Center specific

### 6.4.	Protocol Specific for Data Sharing Collections

#### 6.4.1.	Required

General

Center specific

TODO
-	rules for the embargo period (if applicable)

#### 6.4.2.	Recommended

General

Center specific

## 7.	Authorizing Users at the Center Level 

Besides administrative actions that pertain to individual collections, the research administrator must also perform two authorizations that pertain to all of a center’s collections: 
1.	Authorizing a user in the role of DCX employee (with DCX representing  DCC, DCCN, DCN_s, or DCN_m). Only DCX employees can be added as a manager or reviewer to their center’s collections. Also, DCX employees can view the metadata of all of a center’s collections. A user is added in the role of DCX employee by setting the value of the appropriate field in the user’s profile. This profile must be linked to the user’s entry in the RU or RUMCN identity provider (IdP; see further).
2.	Authorizing a user in the role of DCX reviewer. Only DCX reviewers can  view the data of all of a center’s collections. At least the center’s scientific integrity officer must have this role, but this role may also be given to members of an audit committee (see the DI RDM Protocol for Reviewers).

## 8.	Creating, Managing and Linking User Accounts

### 8.1.	Creating and Managing User Accounts

In the most likely scenario, the research administrator will not be involved in the creation of user accounts. However, there can be situations in which he has to act, and therefore we briefly describe the mechanism via which user accounts are created (see the DI RDM Protocol for Researchers, for a more extensive description). User accounts are created automatically when a user signs up . During sign up, a user must authenticate against an identity provider (IdP). The user account that is created during sign up typically is not visible to the user (it is an internal account), but he needs it to access files on the repository (after being authorized for access). Importantly, for most collections, the files can only be accessed if the user has signed up against the IdP service of the RU/RUMCN or a so-called trusted federated authentication infrastructure. Potential users that are not (anymore) RU/RUMCN employees, may not have access to such a trusted federated authentication structure. To help these potential users, they can be given an account in the RU’s Relation Management System (Relatie Beheer Systeem). A so-called E-account can be created with little administrative work, but another type of account may also work. The essential requirement is that the account should allow the owner to make use of the IdP service of the RU. 
The requests for giving a potential user an account in the RU’s Relation Management System, will come from collection managers and collection reviewers.
At this moment, it is not possible to give access to potential users that do not have access to a trusted federated authentication infrastructure, neither via their employer nor via the RU’s Relation Management System. If this turns out to be a serious problem, it is in principle possible to allow the research administrator to create an internal account, involving a login ID and an initial password, thus bypassing IdP-based authentication. These self-created accounts have to be managed, and the requirements for this management are identical to the ones for the management of the E-accounts created by the RU’s Relation Management System. When this becomes necessary, this protocol will be updated with these requirements.

### 8.2.	Migrating User Accounts

Many users change organization and thereby also IdP. When a user signs up using the credentials (ID plus password) provided by this new organization, a new internal account is created specifically for his new organization. Importantly, when subsequently authenticating (logging in) using the credentials of his new organization, he cannot access the collections for which he is authorized if he authenticates against the IdP of his old organization. However, the research administrator can change his new internal account such that the user keeps his access to those collections also when authenticating against the IdP of his new organization. This change involves a migration of the old internal account such that it can be accessed by authenticating against the IdP of his new organization. For performing this migration, the research administrator has access to a portal in which he must change the value of the appropriate field.
To prevent misunderstanding, migrating the old internal account of a former RU employee such that it can be accessed by authenticating against the IdP of his new organization, does not imply that this user can still be manager or reviewer in any of his old collections: these authorizations have to be modified by the collection reviewer (in case the user was a manager) and the research administrator (in case the user was a reviewer). 

