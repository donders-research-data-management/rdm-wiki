# Protocol for Researchers

##	1 Version

Draft, last update by Eric on 5 January 2016

##	2 Scope

This protocol is in effect as of DD-MM-YYYY and replaces all previous versions of the DI-RDM protocol for researchers

## 3 Audience

The audience for this protocol consists of all people conducting research at the Donders Institute (DI). This includes research assistants, internship students, PhD students, guest/visiting researchers, postdocs, senior researchers, and principal investigators. These people will be collectively denoted as _researchers_ in the subsequent text. This group is to be distinguished from the _research administrators_, who have their own protocol.

##	4 Context

The context of this protocol is the _Research Data Management_ (RDM) at the Donders Institute (DI), which involves interaction with a digital data repository. This protocol describes how researchers must interact with this repository. Future changes to the organization and user interface of the repository may have consequences for this protocol, and these changes will be integrated in future versions of this protocol. The researcher should therefore always ensure to use the latest version of this protocol.

This protocol serves three purposes:

1. _Data preservation_ for internal reuse
2. _Research documentation_ for increasing reproducibility
3. _Data sharing_ with the external scientific community

The data repository allows a researcher to archive digital data into collections. The repository contains separate collections for preservation, for research documentation and for sharing. Repository users can have different predefined roles in a collection. These roles differ in their rights with respect to the collection.

1. A _manager_ can add and remove users to the collection, and can change the role of other users. A manager automatically also has the rights of a contributor.
2. A _contributor_ can add, modify and delete files. A contributor also has the rights of a viewer.
3. A _viewer_ can view the content of files.

When a collection is initiated, a research administrator assigns a manager to the collection (see the _DI RDM Protocol for Research Administrators_). Typically, the collection manager is also the supervisor of the research project to which this collection belongs. A collection manager can add other users to the collection in the role of manager, and these then obtain the same rights.

##	5 Data, Metadata, and Attributes

There exist several definitions of data. For the purpose of this protocol, we focus on _research data_, which we define as follows:

>All information that is (1) generated as a part of the research process and (2) on which a scientific report is/will be based.

This definition does not only include empirical data, but also simulated data, computer scripts for analysis and simulations, stimuli presented in experiments and the computer scripts for presenting them, etc. A good way to determine what is the research data on which a study is based, is asking oneself what information has contributed to the results on which you report in your publication. And a good way to delineate the empirical from the other research data, is by asking oneself whether one has used some device for obtaining these data: empirical data are always collected using a device (a button box, a keyboard, an MRI scanner, an EEG or MEG system, a video camera, a touch screen, a microscope, …). Not all studies and publications depend on research data, as defined above. This holds for theoretical, perspective and opinion papers, as well as for reviews. This protocol is only relevant for those studies and publications that do depend on research data.

Empirical research data can be acquired in digital or non-digital form. This distinction is relevant because only digital data are to be archived on the data repository. However, this protocol addresses both digital and non-digital data. Specifically, this protocol also describes how non-digital data have to be preserved and documented. Common non-digital data are psychometric and performance data on paper or film (e.g., questionnaires, psychological tests, handwritten text, photos), and samples or biochemical assessment of biological tissue (e.g., brain tissue, blood, saliva).

Metadata is data about data. Most familiar are the metadata at the level of individual files: the filename, its type (.docx, .pdf, .dcm, .mat, .xlsx, …), its creation date, the date it was last modified, etc. In this protocol, we will mainly consider metadata at the collection level, because this allows for metadata that are very useful for research data management. Some examples of such collection-level metadata are the persons that have contributed to the study, the budget from which it is financed, the date and time it was created and closed, the type of data that was collected (behavior, fMRI, EEG, MEG, genomics, transcriptomics, video, …), the species (human, non-human primate, rat, mouse, …), and the topic of the study.  

The function of metadata is to describe the data in a way that increases their value for potential users ("Are these data interesting for me?","With which software can I process them?", ...). For that reason, the concept of metadata is closely linked to _data publication_. Importantly, published data should not change (just like a published paper also should not change), the current view is that also metadata should not change. However, there are a few situations in which it is very useful to have attributes that could change while the data themselves do not. For example, over time, a given published data set may be used in an increasing number of publications. All these publications are highly relevant attributes of that data set, even though technically they cannot be called "metadata".

In this protocol, a distinction is made between _metadata_ and _attributes_: metadata are a special class of attributes that have the distinguishing that feature they are communicated to potential users of published data. Because the current view is that metadata should not change if the published data don't change, the metadata of a closed collection (see further down, for a description of "collection closure") cannot be modified. However, this collection can have other attributes (technically, not metadata) that _can_ be modified after closure.


##	6 Accessing the Repository

When visiting the website of the data repository, one can see the metadata of all _Data Sharing Collections_ (DSCs; see further). However, one cannot see any files, nor the metadata of the other collections. To access the files in the repository, and to see the metadata of the other (non-DSC) collections, one must first log in. This is also called _authentication_. There are three ways to authenticate :

1.	Using a local identity provider (RU or RUMCN) and logging in with your RU or RUMCN credentials. This applies to RU and RUMCN employees (U-, resp., Z-number), for RU students (s-number), and for affiliated non-employees (E-number). It is possible that a person has multiple credentials (e.g., a U- and a Z-number). If you log in using multiple credentials, the system will treat as multiple users, mapped one-to-one on the different credentials.
2.	Using a trusted federated authentication infrastructure (e.g., the Dutch SURFconext and the international eduGAIN) and logging in with the credentials provided by the researcher’s employer. This authentication option can be used by employees of the organizations that participate in the federated authentication infrastructure – so not necessarily RU or RUMCN.
3.	Using a non-trusted authentication service such as Google, Facebook, or Twitter.

One can only authenticate after _signing up_. By signing up, an internal account is generated, via which one can access files on the repository (after being authorized for access; see further). One needs this internal account to up- and download files using a client for file transfer (see further).

After a successful authentication, a repository user still cannot read or write a collection’s files. To do this, a user must first be added to that collection in a particular role. The research administrator and collection manager can add a user to a collection. The collections to which a user is added in a particular role determines what that user can do in the repository. This is also called the user’s _authorizations_. Not every user can be added to an arbitrary collection in an arbitrary role. In fact, a user’s possible authorizations are determined by the way he/she has authenticated. To describe a user’s possible authorizations, a distinction is made between four different user types, ordered according to their authorization level (every next user type has the authorizations of the previous type plus some more):

1.	An _anonymous user_ (also called, non-registered user or visitor) visits the website of the repository without authenticating him/herself. An anonymous user can view the metadata of all DSCs. However, he can be added to none of the collections, and therefore cannot read a single file.
2.	A _non-trusted registered user_ authenticates him/herself against a non-trusted authentication service (e.g., Google, Facebook). This user type can be added as a viewer to a DSC.
3.	 A _trusted registered user_ authenticates him/herself against a trusted authentication service (e.g., SURFconext, EDUgain). This user type can be added as a contributor or viewer to all collection types (which also includes _Data Acquisition_ and _Research Documentation Collections_, DACs and SICs; see further). A contributor cannot only view but also modify a collection's files.
4.	A _DCX employee_ authenticates him/herself against the RU or RUMCN authentication service _and_ is registered by a center’s research administrator as an employee of that center. In the Donders Institute, we distinguish between four centers: DCC, DCCN, DCN_S (DCN Science Faculty), and DCN_M (DCN Medical Faculty), jointly denoted as DCX. This user type can be added as a _manager_ to all collections of his center.

In principle, the same physical person can be represented as multiple users in the repository. This can happen if that person has a digital identity (account) on multiple identity providers and/or multiple digital identities on a single identity provider. If a user authenticates him/herself using multiple digital identities, then he/she will also be represented in the repository with multiple internal accounts, each of which is likely to have different authorizations. In some situations, it is highly desirable to migrate an internal account, and a center’s research administrator can do this for its members as well as external collaborators (see the DI RDM Protocol for Research Administrators). For example, when a user leaves the RU (and thus loses his access to the RU identity provider) and becomes an employee of another University that participates in a trusted federated authentication infrastructure, that user may want to keep his authorizations for the collections in the Donders repository. Under certain constraints (see the _DI RDM Protocol for Research Administrators_), this is also possible.

## 7	Up- and Downloading Files

A web interface (more precisely, the HTTP protocol) does not allow for a convenient up- and download of large files and a large number of files. For that reason, the up- and download of files to and from the repository has to be performed by means of a so-called _WebDAV_ client (called after the protocol that is used to transfer files over the internet). A very good WebDAV client is Cyberduck, which can be downloaded for free.

Up- and downloading files is only possible after authenticating oneself at the website of the repository. Via the website, one can then obtain a _data access password_ that can be used in combination with one's _data access username_ to up- and download files. This data access username is _not_ the username with which one authenticates oneself at the website of the repository (for RU and RUMCN employees, their U- or Z-number). The data access username and password are used in combination with the WebDAV client.  

It is also possible to up- and download files using a command-line interface. However, this file transfer is only possible to and from a few dedicated computers, which are typically located in the labs. This file transfer is intended for large volumes, and the dedicated computers will only be operated by support staff and a limited number of experienced users.    

##	8. Preservation – Data Acquisition Collection

### 8.1	Objectives

1.	Preserving the (digital) research data in their original form.
2.	Documenting conformity with the relevant laws and regulations pertaining to data acquisition.
3.	Annotating the data to increase its scientific usefulness.

This protocol involves both required (8.2) and recommended (8.3) operating procedures.

### 8.2	Required

#### 8.2.1	Initiation

A _Data Acquisition Collection_ (DAC) is initiated by the research administrator upon request by a researcher, typically following formal approval by the center director, or on the basis of criteria put forward by the center director (e.g., the Project Proposal Meeting at the DCCN; see Center Specific). The protocol for initiating a DAC is described in the _DI RDM Protocol for Research Administrators_.

#### 8.2.2	General

Data must be archived in their original form. Here, original means the following: without any manipulations that limit future analyses of these data.

The DAC must be annotated in two ways: (1) by providing collection attributes (see further), and (2) by adding one or more human-readable documents in which the data are annotated.

#### 8.2.3	DAC annotation

The DAC annotation is a set of one or more documents that is uploaded to the collection. It contains information that is necessary to properly interpret and (re-)analyze the data. This information involves three parts: (1) a description of the type of data that was acquired,
(2) the organization of the files and the folders and its relation to the design of the study/experiment, and (3) experimental information that is written into the datasets by the data acquisition system.

Describing the type of data can usually be short, but might include details on the equipment used and the location where the data was recorded.

The description of the organization of the data is essential for a study in which participants participate in multiple recording sessions, as well as for an experiment in which different types of data are acquired. The DAC annotation must include a description of the different sessions and data types, and how these are mapped onto the experimental conditions.

The  experimental information written by the data acquisition system refers for example to stimulus events that are relevant for the analysis of the data, or to behaviour (e.g., button presses, eye movements). This information is often present in the form of experimental log files or as trigger or annotation channels. As a part of the DAC annotation, researchers should include a description of the codes that are used for these stimulus and behavioral events (i.e., a table associating the events to their meaning).

The DAC annotation should be provided in a format that is easily accessible to present and future colleagues, for example, .docx, .txt, .pdf, .xlsx. The annotation should be written such that someone with domain specific skills can reuse the data. It is required to specify details that vary between studies, such as the mapping of trigger codes on experimental parameters. It is not required to explain details that can be considered commonly shared knowledge.

#### 8.2.4	Conformity with laws and regulations

In a DAC, information will be collected that demonstrates conformity with valid local, national and international laws and regulations, as evaluated by an ethical review board (see further). As outlined below, the way to demonstrate this conformity is different for human and animal data. This protocol does not detail the relevant laws and regulations, nor does it include measures to enforce conformity with them.

##### 8.2.4.1	Human data

1.	The researcher must indicate whether approval was obtained from an accredited _Medical Ethical Reviewing Committee_ (MERC) or non-accredited local ethical reviewing committee and, if this is the case, specify the name of this committee (e.g., CMO Regio Arnhem-Nijmegen, Ethical Review Board of the Faculty of Social Sciences) and the registered identifier of the approved application. Guidelines for deciding about the appropriate ethical review board can be found in a separate document in the Donders RDM Information Package.
2.	The researcher must archive the signed informed consent forms (i.e., the paper forms). These forms must allow for the de-identified data to be shared via a data sharing collection (DSC). If the researcher plans to share the data of this DAC together with data of the same participants in other DACs, then the signed informed consent forms must mention this linked sharing.
... The precise archiving protocol for the signed informed consent forms (where to hand in the forms, where they will be archived, ...) differs according to DI center, and the center management is responsible for communicating this protocol.
3.	The researcher must upload to the DAC the _Participant Information Brochures_ (PIBs) that he/she has provided to the participants. For findability, the researcher should use the folder name "PIB" for organizing the PIBs.
... There are three types of information brochures: general, method-specific (e.g., EEG, MEG, fMRI, audio/video), and study-specific. For the former two, template information brochures have been written specifically for use in combination with this protocol. Prior to being used, these template brochures, or modified versions thereof, must be submitted to the appropriate ethical review board.

TBD1: I propose to also add the following documents to this Github-hosted wiki: guidelines for deciding about the appropriate ethical review board, the template informed consent forms, the template information brochures. When realized, we can refer to these documements from inside the wiki. This must also be discussed with Sabine K and Miriam K, because they must be comfortable working with it.  

TBD2: As you can read, I propose to document the PIBs by uploading them to the DAC. Agree?


##### 8.2.4.2	Animal data

The researcher must specify whether approval was obtained from an accredited Animal Care and Use Committee. If this is the case, then the researcher must specify the name of this committee (e.g., Dier-experimentencommissie Radboud Universiteit Nijmegen) and the registered identifier of the approved application.


#### 8.2.5	Digital data

Whenever possible, digital datasets must be added to the DAC immediately after acquisition. The digital datasets must contain all the scientifically relevant data that were obtained from the participants or samples under investigation. These datasets must also include files that are often considered auxiliary, such as log files containing behavioral or questionnaire data. Technical data that do not provide information about the correctness of the results, such as those related to some calibrations of the measurement device, should not be part of the DAC.

In case of human data, the name of the files/folders in which a participant’s data are stored may not contain information that allows this participant to be identified in a direct way (e.g., by including the participant’s name as a part of the file/folder name).  Instead, this file or folder name should contain a code that uniquely identifies the participant in the project. The naming scheme for file/folder names is described further down.

The key that relates the participant identification code and the participant’s personal information (name, address, telephone number,…) may not be kept in the DAC. Instead, this key must be kept in a locked room on a medium that cannot be accessed via the intra- or the internet (e.g., on paper). The DI centers determine where and on which medium the key is kept.

TBD: This last paragraph is subject to change following discussions involving TG1 and the Security Officer.

Digital datasets can be uploaded in two ways: (1) manually by the researcher (as described in 7), and (2) by an automatic upload procedure that is controlled by the lab manager or ICT group. The DI centers decide which upload process is to be followed for which lab and for which study type.


#### 8.2.6	Non-digital data

Non-digital data cannot be stored in the repository. Their location has to be specified in the appropriate field, either by selection from a menu or by entering it as free text. The menu may contain labels (e.g., DCC Questionnaire and Psychological Test Archive) that do not specify a particular physical location but instead refer to a location that is commonly known in the respective center.

Typically, within a room, the non-digital data of multiple DACs are stored at a location that can be further specified by referring to a cabinet (e.g., nr. 2), a shelf (e.g., shelf A), a freezer (e.g., freezer B, rack 2), etc. These location indicators must be provided in one or more files that are organized in a folder named “DataLocation”. The format of these files must be easily accessible, for example, .docx, .txt, .pdf, .xlsx. In case the non-digital data are relocated, these files must be updated.

TBD: We still need an attributes for the location of the non-digital data. I propose to add a repeatable free-text attribute: locationNonDigitalRoom.

Typically, parameters of non-digital data will be converted to digital format. All digital data that are obtained in this way must be added to the DAC. Storing non-digital data in the archive after conversion to digital format does not automatically imply that the original non-digital data can be discarded.  This is because the conversion process can be selective, in the sense that not all parameters are extracted that are possibly of scientific value. For some non-digital data (e.g., questionnaires, psychological tests, handwritten text) the conversion to digital format involves little or no loss of scientific value. For other non-digital data (e.g., blood and other tissue samples), by performing an analysis (e.g., biochemical), only a few parameters (e.g., hormone levels) are converted to digital format.

In cases where the center director decides that the non-digital data (e.g., tissue samples) do not have to be archived, it suffices that only the converted digital data is archived.


#### 8.2.7	Data reduction

For some data, the scientific usefulness is not substantially affected if the data are first reduced prior to archiving. Different scientific disciplines use different types of data reduction. For instance, spatial and/or temporal downsampling is common for high-density broadband biological signals, and compression (e.g., jpeg) is common for images and video. For this type of data, the reduced data may be stored on the repository. In this case, the data reduction algorithm must be described as a part of the DAC annotation (see further down).


#### 8.2.8	Pilot data

Pilot studies differ from regular studies in that it is not their intention to collect data systematically, or to provide evidence for generalizable conclusions (i.e., generalizable beyond the sample investigated). Pilot studies may differ from the main part of the study in several ways. For example, the pilot data could be collected prior to obtaining formal approval for the data acquisition, or they were collected using a preliminary protocol. For all these different pilot types, there is a single protocol, which involves the following:

1.	In case the center regulations and the ethical approval allow for pilot data being added to the DAC, then the pilot data must be added as soon as possible after initiation of the DAC.
2.	It must be specified in the DAC annotation (see further down) which part of the data are pilot data.


#### 8.2.9	REMOVED

#### 8.2.10	 DAC closure

A collection may only be closed when its content is in accordance with this protocol. Only a collection manager can close a collection, and he/she is thus responsible for the decision whether or not the collection is in accordance with this protocol.

When a collection is closed, a permanent read-only copy of this collection is created and a unique identifier is assigned to it. A collection manager can re-open a closed collection, but may only do so with a good reason, for example if the closed collection contains incorrect and/or insufficient information. Carefulness is required here, because closing a collection twice also requires twice the amount of storage (and thus costs twice as much). In fact, when a re-opened collection is modified and thereafter closed again, then a second permanent read-only copy of the collection is created, again with a unique identifier. All the read-only copies that are created at collection closure are thus snapshots of the collection at different time points.

A collection is closed in _two_ steps:

1. The status of the collection is changed from _open_ to _tobeclosed_. In the _tobeclosed_ status, the collection has become read-only.
2. At an appropriate time (determined by the repository), a permanently read-only copy of the collection is created and a unique identifier is assigned to it. If the collection would be re-opened, this read-only copy would not be modified.

There can be situations in which it is useful to make multiple collection snapshots. For instance, this may be the case when the DAC belongs to an ongoing study, and one wants to write a paper using the data collected until present. The identifier that is assigned to this collection then serves as a reference in other collections that make use of this DAC snapshot. This workflow is a form of versioning.

#### 8.2.11	Data/study type specific
To be provided.

#### 8.2.12	 Centre specific - DCCN
The researcher must specify the PPM number.

TBD: I think the sentence above can be removed, because the research admin already specifies this number.

The researcher must organize the data files and directories according to the DCCN standard:

> projectnumber_userID_subjectnumber_sessionnumber

For example, 30123456.01_pethag_003_002. If folders are used to organize files, then only the folder’s name must be in accordance with this scheme.

#### 8.2.13	 Centre specific - DCC
The researcher should specify the DCC project number.

TBD: Remove above sentence (same reason as for the DCCN)?

The researcher must organize the data files and directories according to the DCC standard:

> projectnumber_userID_subjectnumber_sessionnumber

For example, DCC_2015_0978_piemed_004_001. If folders are used to organize files, then only the folder’s name must be in accordance with this scheme.


### 8.3	Recommended


#### 8.3.1	General

#### 8.3.2	Neuroscience-specific attributes

Neuroscience-specific attributes are useful to find DACs via a search query. Neuroscience terms can be selected from two controlled vocabularies: the topic list of the Society for Neuroscience (SFN), and the Medical Subject Headings (MESH; used by PubMed for indexing articles). When selecting terms from these controlled vocabularies, the following domains may guide the collection managers and contributors: technique, topic, species, disorder, and brain area.

#### 8.3.3	Associating DACs

Some DACs are associated with existing DACs, for example, because they all belong to the same longitudinal study. Associations between DACs are documented by specifying the identifiers of the associated DACs.

#### 8.3.4	DAC annotation

It is recommended to include stimulus presentation scripts, including software version number in the DAC.

#### 8.3.5	Checking contributions

As a part of his/her final responsibility for a collection, it is recommended that a collection manager checks the contributions of all persons that have write access to this collection. For that purpose, a collection manager can make use of a monitoring tool (available to all users) that produces a log of all the changes in the collection, specifying who uploaded/modified which file at what time (source verification).

#### 8.3.6	Data/study type specific

To be provided.


#### 8.3.7	Centre specific DCN_S

The following scheme is recommended for the names of the files/folders that contain a participant’s data:

>XXXX.

If folders are used to organize files, then only the folder’s name must be in accordance with this scheme.


## 9	Research Documentation Collection

### 9.1	Objectives

1.	Document the process via which data are converted into published results.
2.	Provide a digital platform for collaborators to contribute to and review good scientific practices.

In a _Research Documentation Collection_ (RDC), information will be collected that may be relevant for evaluating good scientific practice. However, this protocol does not specify any scientific integrity rules, nor does it include measures to enforce conformity with such rules.

This protocol involves both required (9.2) and recommended (9.3) operating procedures.

### 9.2	Required

#### 9.2.1	Initiation

A RDC is initiated by the research administrator upon request by a researcher on the basis of criteria put forward by the center director. The protocol for initiating a RDC is described in the _DI RDM Protocol for Research Administrators_.

#### 9.2.2	General

A RDC pertains to the process that has led to a scientific publication. It contains the documents that may be relevant for evaluating good scientific practice. The core content of a RDC are files that document the scientific process in which data are converted into results (statistical tests, summary measures, figures, tables, etc.). For simplicity, in the following, this part of the scientific process will be denoted as the _scientific process_, without any qualification as to the specific result it contributes to the publication.

#### 9.2.3	Attributes

The researcher must add the following information:

1.	Title of the manuscript
2.	List of all co-authors

Following publication, the researcher must add the following additional information:

1.	A persistent identifier (PID) of the published manuscript (typically, a digital object identifier; DOI). (A PID is a persistent and unique identifier that allows for direct access to the collection, even if the URL has changed.)
2.	PubMed identifier (PMID) of the published manuscript

TBD: Does the PMID add sufficient information if we also have a PID?

#### 9.2.4	Contributors to the publication

All coauthors to a publication share responsibility for good scientific practices and therefore must be contributor to the RDC. Consequently, all coauthors must be registered users in the repository. It is the responsibility of the RDC manager to invite co-authors external to the DI to create an account. Following registration of the user account, the RDC manager must add the co-author as contributor, thereby giving hin/her access to the files in the RDC.

#### 9.2.5	Documenting the origin of the data

When the published results depend on data, the RDC must refer to them. There are two ways to document the data on which the published results depend:

1.	If the data is represented in the repository as one or more DACs, the RDC must be associated with the corresponding DACs by specifying the DAC identification numbers. Only closed DACs can be associated with the RDC. A single closed DAC may be associated to  multiple RDCs.
2.	If the data is not represented in the repository as one or more closed DACs, the researcher must add the data to the RDC or document the source of the data by means of a PID. This situation applies, for instance, when the DAC is not yet closed, or when the data were collected at another institute. It also applies when the published results only depend on computer scripts (as in modeling work), in which case these scripts must be added tot the RDC.

If the data is represented in the repository, then the collaborators on the RDC must obtain the right to access the relevant data in the DACs. If collaborators on the RDC do not have this right, there are two ways for these collaborators to get access:

1.	The DAC manager adds the RDC collaborators to the collection in the role of viewer.
2.	In agreement with the DAC managers, the RDC manager copies the relevant parts of the DACs to the RDC. The selection of the data from the DACs must be documented (in free text format) in the RDC.


#### 9.2.6	Reproducing the results of the publication

By the time the scientific paper is accepted for publication, the RDC must contain all the information that a knowledgeable colleague needs to reproduce the results in this publication. This information could be used by an independent audit committee that investigates how the results of a publication were obtained. Very related information must be provided as a part of a Data Sharing Collection (DSC; see further), which is intended for external researchers that re-use the data.

Publications may differ substantially in the amount and detail of the information that is required for reproducing the results. Collaborators on a collection are expected to demonstrate scholarship in providing the required information.

#### 9.2.7	Associating to the shared data

For all publications of which the results depend on data, the data must be shared. These data can be shared as a Data Sharing Collection (DSC) in this DI repository, or as a collection in a DI-external repository. In both cases, after collection closure, the shared data can be identified by a PID. The RDC must be associated to the shared data by adding its PID as an attribute.


#### 9.2.8	RDC closure

See 8.2.10.



#### 9.2.8	Data/study type specific


### 9.3	Recommended


#### 9.3.1	Analysis scripts

Often, the process via which data are converted into published results is partially or fully specified by analysis scripts that can be executed by software packages such as MATLAB, R, Python, SPSS, Bash+FSL, etc. The recommended way of documenting the scientific process is by providing these analysis scripts.

#### 9.3.2	The editorial and peer-review process

It is recommended that the complete scientific publication process is documented in the RDC. The following files are part of this process: the files that are initially uploaded to a journal’s manuscript submission system, the reviews, the reply to the reviewers, the proofs, etc.

#### 9.3.3	Checking contributions

As part of his/her final responsibility for a collection, it is recommended that a collection manager verify the contributions of all persons that have write access to this collection. For that purpose, a collection manager can make use of a reporting tool that produces a log of all the changes in the collection, specifying file uploads and modifications by the different collection contributors.

#### 9.3.4	Registered reports

A registered report is a publication for which the experimental methods are pre-registered and reviewed before data are collected. The objective of registered reports is to neutralize a variety of inappropriate research practices, such as selective reporting of results, undisclosed analytic flexibility, and publication bias.

If the study was conducted as a part of a registered report, then specify (1) the authority (e.g., a journal, a website for collaboration such as the OSF) where the methods and proposed analyses were pre-registered and reviewed prior to the research being conducted, and (2) the identifier of this pre-registration.

TBD: I propose to remove 9.3.4. The pre-registration already is documented by the journal.


## 10	Data Sharing Collection
### 10.1	Objectives

1.	To allow external researchers to extend scientific findings by reanalyzing data with new methods, and/or by addressing new research questions using these data.
2.	To allow external researchers to reproduce scientific findings.

This protocol involves both required (10.2) and recommended (10.3) operating procedures.

### 10.2	Required
#### 10.2.1	Initiation

A _Data Sharing Collection_ (DSC) is initiated by the research administrator upon request by a researcher on the basis of criteria put forward by the center director. Typically, a DSC is initiated after a paper has been accepted for publication. The protocol for initiating a DSC is described in the _DI RDM Protocol for Research Administrators_.

#### 10.2.2	General

A DSC pertains to the reuse of the data that was used for a scientific publication. Every publication of which the results are based on data must have an associated DSC that contains all these data.

A DSC contains (part of) the data of one or more DACs as well as additional files. These additional files contain relevant information, both for external researchers that want to reanalyze the data to extend the published results and those that only want to reproduce these results.

Contrary to DACs and RDCs, which are only for DI-internal use, DSCs are made available to the international scientific community. This does not imply that everyone can read and download the DSCs; access to a DSC requires authorization, and this can only be granted by the DSC manager.

Finding a DSC on the web must be easy. Therefore it must contain so-called _discovery attributes_.

Sharing data of human participants requires that their privacy must be guaranteed. Therefore these data can only be shared in a way that conforms to the relevant laws and regulations.

The results of some publications do not depend on newly collected data, but on published (shared) data. The DSC for such a publication must not contain a copy of these published data. Instead, this DSC must only contain the data that is unique for the publication. This may involve computer scripts that implement novel analysis methods, or novel empirical data that is compared to the published data.

#### 10.2.3	Discovery attributes

The researcher must add both general and neuroscience-specific attributes that allow the DSC to be found on the web. The neuroscience-specific attributes allow the DSC to be found independently from the original publication. The general attributes, which all pertain to the publication, are the following:

1.	Title of the publication
2.	List of all co-authors
3.	Journal in which the publication has appeared (will appear)
4.	PID of the publication
5.	PubMed identifier (PMID) of the publication

There are two types of neuroscience-specific discovery attributes:

1.	Free text metadata, of which there are two subtypes:
  1.	Keyword, like the keywords of a journal article.
  2.	Description, like the abstract of a journal article.  
2.	Neuroscience terms that are selected from two controlled vocabularies: the topic list of the Society for Neuroscience (SFN), and the Medical Subject Headings (MESH; used by PubMed for indexing articles). When selecting terms from these controlled vocabularies, the following domains may serve as a guide: technique, topic, species, disorder, and brain area.

#### 10.2.4	Conformity with laws and regulations

Sharing human data requires that the participants have signed an informed consent form that allows the data to be shared. In case the data were acquired at the DI, this must be documented as a part of the relevant DACs (i.e., the DACs that contain the data on which the results are based, as specified in the RDC).

Sharing human data also requires that these data do not contain elements on the basis of which the human participants can be identified in a direct or indirect way. Two types of information are especially relevant: personal background information and research-related information. (In the Dutch Data Protection Act, these are denoted as, respectively, "communicatie gegevens" and "onderzoeksgegevens".) Personal background information pertains to the subject’s past and present status with respect to health, education, occupation, activities, etc. Personal background information on the basis of which a subject could be uniquely identified (e.g., name, bank account number, Burger Service Nummer) can never be shared. Some personal background information may be essential in order to reproduce the results on which the publication is based. Only under this condition, this personal background information may be shared. This requires however that the Data Use Agreement (DUA, see further) specifies that the collection contains sensitive data and that the agreement specifies how this sensitive data may or may not be used.

It is sometimes possible to identify human participants on the basis of research-related information such as anatomical MRIs, video-, and audio data. These are so-called identifiable human data. Tools are available that remove the information that allow for this identification, such as software for removing facial characteristics and ears from anatomical MRI, and transcriptions of audio data. If these tools are available, researchers must use them to de-identify their participants’ data.

#### 10.2.5	Preparing the data for sharing

One must distinguish between the situation in which all data in the DAC can be shared, and the situation in which some data of the DAC must not be shared (see 10.2.5). In the former situation, the data are prepared for sharing by copying them from the DAC(s). In the latter situation, the researcher must do the following:

1.	Download the relevant data from the DAC(s).
2.	Perform all the operations that are required in order for the data to be shared (see 10.2.5).
3.	Upload the result of the previous step to the DSC.

#### 10.2.6	DSC annotation

See 8.2.9.

#### 10.2.7	Extending on the published results

The DSC must contain all the information that a knowledgeable colleague needs to extend on the published results. In a first step, this typically involves that the published results are reproduced. Publications may differ substantially in the amount and detail of the information that is required for reproducing the results. Collaborators on a collection are expected to demonstrate scholarship in providing the required information.

It is highly unlikely that an external colleague would only want to reproduce the published results using exactly the same computer scripts that were also used by the authors. Instead, it is much more likely that such a colleague would want to investigate related effects, or modulations of the published effects by variables that are present in the data. Collaborators on a collection are expected to provide the information that allows external colleagues to perform such analyses, amongst others by providing inline comments in their analysis scripts.

#### 10.2.8	Specifying the data use agreement

Every DSC requires a _Data Use Agreement_ (DUA) that specifies the conditions under which data is shared. The repository offers several standard DUAs, both for human and for non-human data. If a The DUA should adhere to the legal standards and the local policies. The DUA may also include details on specific intellectual property rights and limitations on the reuse of the data.

The choice for a particular DUA must be based on the decision tree that part of the Donders RDM Information Package.

TBD: I propose to replace the information package by a part of the Github-hosted wiki.

When an authenticated external researcher agrees to the DUA corresponding to the DSC, he/she is automatically added as a viewer to the DSC, which gives him/her read access.

#### 10.2.9	 Specifying the contact person

The contact person for a DSC is a collection manager to whom the signed DUA must be sent and who can grant access.

The contact person’s email address must be in the appropriate metadata field.

TBD: Now that we have decided that external researchers, after agreeing with the DUA, are automatically added to a collection as a viewer, I think we do not need the contact person anymore. If external researchers have questions about the data, they may contact the corresponding author of the publication.


#### 10.2.10	Associating to the RDC

All publications of which the results depend on data are also represented in the repository as a RDC, and therefore every DSC is associated with a RDC. The DSC must be associated with this RDC by adding the RDC identification number as an attribute.

TBD: Do we require that the RDC identification number to corresponds to a closed collection?


#### 10.2.11	 DSC closure

See 8.2.10.

There is one important difference between the closure of, on the one hand, DACs and RDCs, and on the other hand, DSCs: after closure, the DAC and RDC snapshots are only assigned a unique _internal_ identifier, whereas a DSC snapshot is also assigned a unique _external_ identifier  that is exported to the web. This unique external identifier is a so-called _persistent identifier_ (PID), and is of the same type as the _digital object identifiers_ (DOIs) that are typically used to refer to published journal articles. A PID is a persistent and unique identifier that allows for direct access to the collection, even if the URL has changed.

As prerequisite for publication, several journals now request a PID of the shared data, which they publish in the footnote of the article. DI researchers can use the PID of the closed DSC for that purpose.  

If a closed DSC contains incorrect and/or insufficient information, a collection manager may re-open it, allowing for changes to be made. If this re-opened DSC is modified and thereafter closed again, then a second snapshot of the DSC is generated, with a unique PID.


#### 10.2.12	 Data/study type specific
##### 10.2.12.1	Photo-, video-, and audio data

It is technically impossible to de-identify photo-, video-, and audio data without compromising their scientific value. At the same time, it is unrealistic to expect that most candidate-participants for these studies would agree with their data being shared without de-identification. For these reasons, the DSC for a published study that involves photo-, video-, or audio data must not contain the identifiable data of those participants that have indicated on their informed consent form that they did not agreed with sharing. However, the DSC that corresponds to this study must contain the data of all participants in this study. In addition, if the published study also contained non-identifiable data (e.g., response times, electrophysiological data), then all those data must be shared (i.e., the non-identifiable data of all participants).

### 10.3	Recommended
#### 10.3.1	Analysis scripts

Often, the process via which data are converted into published results is fully specified by analysis scripts that can be executed by software packages such as MATLAB, R, Python, SPSS, Bash+FSL, etc. Sharing analysis scripts is the recommended way of providing information to colleague allowing him/her to reproduce the results in the publication.

#### 10.3.2	Checking contributions

As a part of his/her final responsibility for a collection, it is recommended that a collection manager check the contributions of all persons that contribute to this collection. For that purpose, a collection manager can make use of a reporting tool that produces a log of all the changes in the collection, specifying who uploaded/modified which file at what time.
