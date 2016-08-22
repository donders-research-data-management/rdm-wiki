# Protocol for Research Administrators

## 1.	Version
Draft version, last update by Robert, March 14, 2016.

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

Researcher administrators have different roles than researchers:

1.	Researchers interact with the repository by creating, modifying, and viewing files and by providing collection attributes (see the DI RDM Protocol for Researchers).
2.	Research administrators mainly interact with the repository by initiating collections, as described in this protocol. As a part of their task of initiating collections, research administrators also have a task in authorizing users at level of the Donders center for which they are responsible (DCC, DCCN, DCN_s, or DCN_m; collectively denoted as DCX).

Within the digital repository, the research administrator role is mainly defined in terms of rights with respect to particular collections of files. There are three types of collections: data acquisition collections (DACs), research documentation collections (RDCs), and data sharing collections (DSCs). Building these collections involves uploading files and providing collection attributes, as described in the _DI RDM Protocol for Researchers_.

The collections are aggregated by Donders center. A collection is assigned to one of the centers if it is initiated by that center’s research administrator. This aggregation of the collections by Donders center does not limit the access to the collections by members of other Donders centers or RU-external institutes. However, it does limit the responsibilities. Specifically, the initial authorization for the collection manager role (see 7.1.5) is performed by a center's research administrator.

The rights and responsibilities of research administrators involve the following:

1.	Authorizing users at the center level.
2.	Initiating and managing collections.

These tasks are now described in more detail. For the description of the second task (initiating and managing collections), we have to make some distinctions between DACs, RDCs and DSCs.

## 6.	Authorizing Users at the Center Level

RDM users that are employed by the RU or the RUMCN can be eligible for the role of _DCX employee_ (with DCX representing DCC, DCCN, DCN_s, or DCN_m). Only DCX employees can be added as a manager to their center’s collections. The center director decides which RU/RUMCN employees can be authorized as a DCX employee for their center.

Users can only be authorized as a DCX employee if they have a user profile. Users can create their own user profile in a procedure that is known as _signing up_ and that is described in the _DI RDM Protocol for Researchers_.

Prior to authorizing a user as a DCX employee, the research administrator must check whether the user's account is linked to the RU or the RUMCN (e.g., a U- or a Z-number). In addition, the center director must agree with this user being authorized as a DCX employee.

A user can be a DCX employee in multiple Donders centers. However, a research administrator can only add a user as a DCX employee of his/her own center.

A user's authorization as a DCX employee may also be revoked. The typical reason for this is the termination of that user's contract with the RU/RUMCN. Thus, when a DCX employee is no longer employed by the RU/RUMCN, his/her authorization as a DCX employee must be revoked. As only a DCX employee can have the responsibility as manager of the corresponding center's collections, the user's manager role must be revoked in all collections for which this is the case. We return to this point in 7.1.6.

A user's authorization as a DCX employee may also be revoked if he/she remains to be employed by the RU/RUMCN. This can happen for instance if a DCX employee leaves the center but continues his/her work elsewhere at the RU/RUMCN. Also in this case, that user can no longer be a manager of the corresponding center's collections.

Note that upon termination of a contract, the user profile should not be deleted in the RDM system. The access to the RDM system will automatically be disabled by the identity provider of the employer.

## 7.	Initiating and Managing Collections

### 7.1.	Common Protocol for all Collection Types

#### 7.1.1.	Collection Initiation

A collection is initiated by the research administrator following a request by a researcher that is formally approved by the center director or that conforms to the criteria put forward by the center director.

The research administrator configures the collection on the digital repository and specifies the disk space and the time period in which data can be added. The initial disk space and time period are based on center policies (see _Center Specific_). Increasing the allocated disk space and/or changing the time period can only be performed by the research administrator.

#### 7.1.2.	Collection Name and Title

A collection has both a name and a title. The collection name determines how the collection appears in the underlying file system, the title is pure descriptive. A collection name cannot be changed anymore after collection initiaition, whereas the title can be changed by the collection managers and contributors.

The name of a collection can be chosen freely, subject to the following constraints:

1.	All DACs have a name that starts with “DAC”.
2.	All RDCs have a name that starts with “RDC”.
3.	All DACs have a name that starts with “DSC”.
4.	The name does not involve the following characters: /, >, <, |, :, and &.

The title of a collection is completely free.

#### 7.1.3. Project Identifier

The project identifier indicates the research project to this collection belongs. Importantly, a _research project_ only exists at the level of the center administration, and by having the project identifier as an attribute of a collection, a link is established between the center administration and the RDM repository. The centers are free to choose an administrative system with which they organize their research projects.

#### 7.1.4. Disk Quotum and Preservation Time

The research administrator must set a disk quotum (the maximum size) and a preservation time for every collection. The disk quotum should be set on the basis of the center's experience with collections that contain a particular type of data (MRI, EEG, MEG, calcium imaging, eye movements, ...).

The preservation time should be set on the basis of requirements by stakeholders such as funding agencies and the Board of the University.

#### 7.1.5.	Assigning a Collection Manager

The research administrator assigns at least one person in the role of collection manager. This role is described in the _DI RDM Protocol for Researchers_.

The collection manager must be a _DCX employee_. Because a DCX employee must also be a RU/RUMCN employee, external collaborators cannot be a collection manager. This is important in case of contract or collaborative research, and it even holds when the research question was put forward by the client or external collaborator. However, that client/external collaborator is likely to have the collection contributor role. Collection contributors and viewers are added to the collection by the collection manager.

#### 7.1.6. Revoking the Collection Manager Role

When a user is no longer a DCX employee, he/she may no longer have the _collection manager_ role. The typical reason for this is the termination of that user's contract with the RU/RUMCN. He/she can remain a _contributor_ or _viewer_ if his/her involvement in the collection is continued.

Procedurally, when a research administrator revokes a user's authorization as a DCX employee, he/she must also revoke that user's manager role in all the relevant collections.

It can happen that, after removing a collection manager, a given collection no longer has a manager. In that case, in agreement with the center director, the research administrator must assign a new collection manager. Every collection must have at least one manager, i.e. a person that can be held responsible.


### 7.2.	Protocol Specific for Data Acquisition Collections

##### 7.2.1. General

Managing the initiation of Data Acquisition Collections is done at the center level.

##### 7.2.2. Center specific - DCCN

The DCCN manages the initiation of new DACs in the Project Proposal Meetings (PPMs). Preparation of a PPM as well as the procedure itself, are described on the following intranet page: https://intranet.donders.ru.nl/index.php?id=442.

##### 7.2.3. Center specific - DCC

The DCC manages the initiation of new DACs via a form that has to be completed by the researcher and which must be approved by the center director.

The DAC collection name is constructed according to the following standard:

DAC\_YYYYMMDD\_freename  ,

in which YYYY is the year, MM the month, and DD the day at which the collection is initiated. The component <freename> should be an acronym for the study to which this collection belongs. For example: DAC_20150623_AttSelConMon.

##### 7.2.4. Center specific - DCN_s

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/20

##### 7.2.5. Center specific - DCN_m

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/20

### 7.3.	Protocol Specific for Research Documentation Collections

##### 7.3.1. General

TBD: see https://github.com/Donders-Institute/donders-institute.github.io/issues/21

Researchers that plan to submit a manuscript for publication must inform the research administrator. The research administrator will initate the RDC and add the senior author (if he/she is a DCX employee) or the first author as collection manager.

An RDC must be initiated before the proofs of the accepted journal article are sent back to the journal's editorial office. An RDC may also be initiated in a very early stage of the process that eventually results in a publication, for instance, at the start of the data analysis. This has the advantage that the RDC can be used to share all kinds of documents with the future co-authors (analysis scripts, figures of preliminary results, the different versions of the manuscript, ...).  The RDC is _not_ to be used for storing all processed data that are generated as a part of the data analysis. However, some processed data that have the status of a preliminary of a final result may be added to an RDC.

##### 7.3.2. Center specific

This section is intentionally empty.

### 7.4.	Protocol Specific for Data Sharing Collections

##### 7.4.1. General

Researchers that plan to submit a manuscript for publication must inform the research administrator. The research administrator will initate the DSC and add the senior author (if he/she is a DCX employee) or the first author as collection manager.

A DSC must be initiated before the proofs of the accepted journal article are sent back to the journal's editorial office.

An embargo period of up to 2 years can be granted, provided the center director has approved in writing.

In case the data is not to be shared, the written request by the researcher and the approval of the center director will be uploaded to the Data Sharing Collection.  

##### 7.4.2. Center specific

This section is intentionally empty.


## 8.	Managing User Accounts

In the default scenario, the research administrator is not involved in the creation of user accounts, because they are created automatically in a sign-up procedure (see the _DI RDM Protocol for Researchers_).

In some cases it may be necessary for the research administrator to initiate accounts for users that cannot sign up using a thrusted authentication service. This involves a procedure that falls outside the scope of this protocol. More details are described in the [Frequently Asked Questions](rdm-wiki/en/faq/other.md).

