# DI RDM in a Nutshell

DI = Donders Institute for Brain, Cognition and Behaviour

RDM = Research Data Management

RDM at the DI serves three purposes:

1. _Data preservation_ for internal reuse
2. _Research documentation_ for increasing reproducibility
3. _Data sharing_ with the external scientific community

DI RDM involves a written protocol that describes how one must interact with a _digital data repository_. This data repository involves (1) a storage layer that is managed by an intelligent file system (iRODS), and (2) clients with which one can interact with this file systems. Two clients have a graphical user interface: (1) a web client (https://data.donders.ru.nl, also called _content management system_), and (2) a file transfer client (Cyberduck, which allows to transfer data using the Webdav protocol).

The data repository allows a researcher to archive digital data into collections. The repository contains separate collections for preservation, for research documentation and for sharing:

1. In a _Data Acquisition Collection_ (DAC), the data are archived in their original form. Here, _original_ means _without any manipulations that limit future analyses of these data_.
2. A _Research Documentation Collection_ (RDC) documents the process via which data are converted into published results. 
3. A _Data Sharing Collection_ (DSC) contains the data that on which published results are based, allowing external researchers to extend scientific findings by reanalyzing data with new methods, and/or by addressing new research questions using these data.

These three collections are built at different stages of a research project, as illustrated here:

  ![](CollectionTimeline.png)
  









Repository users can have different predefined roles in a collection. These roles differ in their rights with respect to the collection.

1. A _manager_ can add and remove users to the collection, and can change the role of other users. A manager also has the rights of a contributor.
2. A _contributor_ can add, modify and delete files. A contributor also has the rights of a viewer.
3. A _viewer_ can view the content of files.

When a collection is initiated, a research administrator assigns a manager to the collection (see the _DI RDM Protocol for Research Administrators_). Typically, the collection manager is also the supervisor of the research project to which this collection belongs. A collection manager can add other users to the collection in the role of manager, and these then obtain the same rights.

Jointly, managers and contributors are called the _authors_ of a collection.  When a collection is closed and shared with others, it is a publication (a _data_ publication), of which the authors are its managers and contributors.

##	5 Data, Metadata, and Attributes

There exist several definitions of data. For the purpose of this protocol, we focus on _research data_, which we define as follows:

>All information that is (1) generated as a part of the research process and (2) on which a scientific report is/will be based.

This definition does not only include empirical data, but also simulated data, computer scripts for analysis and simulations, stimuli presented in experiments and the computer scripts for presenting them, etc. A good way to determine what is the research data on which a study is based, is asking oneself what information has contributed to the results on which you report in your publication. And a good way to delineate the empirical from the other research data, is by asking oneself whether one has used some device for obtaining these data: empirical data are always collected using a device (a button box, a keyboard, an MRI scanner, an EEG or MEG system, a video camera, a touch screen, a microscope, …). Not all studies and publications depend on research data, as defined above. This holds for theoretical, perspective and opinion papers, as well as for reviews. This protocol is only relevant for those studies and publications that do depend on research data.

Empirical research data can be acquired in digital or non-digital form. This distinction is relevant because only digital data are to be archived on the data repository. However, this protocol addresses both digital and non-digital data. Specifically, this protocol also describes how non-digital data have to be preserved and documented. Common non-digital data are psychometric and performance data on paper or film (e.g., questionnaires, psychological tests, handwritten text, photos), and samples or biochemical assessment of biological tissue (e.g., brain tissue, blood, saliva).

Metadata is data about data. Most familiar are the metadata at the level of individual files: the filename, its type (.docx, .pdf, .dcm, .mat, .xlsx, …), its creation date, the date it was last modified, etc. In this protocol, we will mainly consider metadata at the collection level, because this allows for metadata that are very useful for research data management. Some examples of such collection-level metadata are the persons that have contributed to the study, the budget from which it is financed, the date and time it was created and closed, the type of data that was collected (behavior, fMRI, EEG, MEG, genomics, transcriptomics, video, …), the species (human, non-human primate, rat, mouse, …), and the topic of the study.  

The function of metadata is to describe the data in a way that increases their value for potential users ("Are these data interesting for me?","With which software can I process them?", ...). For that reason, the concept of metadata is closely linked to _data publication_. Importantly, because published data should not change (just like a published paper also should not change), the current view is that also metadata should not change. However, there are a few situations in which it is very useful to have attributes that could change while the data themselves do not. For example, over time, a given published data set may be used in an increasing number of publications. All these publications are highly relevant attributes of that data set, even though technically they cannot be called "metadata".

In this protocol, a distinction is made between _metadata_ and _attributes_: metadata are a special class of attributes that have the distinguishing feature that they are communicated to potential users of published data. Because the current view is that metadata should not change if the published data don't change, the metadata of a closed collection (see further down, for a description of "collection closure") cannot be modified. However, this collection can have other attributes (technically, not metadata) that _can_ be modified after closure.


##	6 Accessing the Repository

### 6.1 Authentication

When visiting the website of the data repository, one can see the metadata of all _Data Sharing Collections_ (DSCs; see further). However, one cannot see any files, nor the metadata of the other collections. To access the files in the repository, and to see the metadata of the other (non-DSC) collections, one must first log in. This is also called _authentication_. There are three ways to authenticate :

1.	Using a local identity provider (RU or RadboudUMC) and logging in with your RU or RadboudUMC credentials. This applies to RU and RadboudUMC employees (U-, resp., Z-number), for RU students (s-number), and for affiliated non-employees (E-number). It is possible that a person has multiple credentials (e.g., a U- and a Z-number). If you log in using multiple credentials, the system will treat as multiple users, mapped one-to-one on the different credentials.
2.	Using a trusted federated authentication infrastructure (e.g., the Dutch SURFconext and the international eduGAIN) and logging in with the credentials provided by the researcher’s employer. This authentication option can be used by employees of the organizations that participate in the federated authentication infrastructure – so not necessarily RU or RadboudUMC.
3.	Using a non-trusted identity provider service such as Linkedin, Google, Facebook, or Twitter.

One can only authenticate after _signing up_. By signing up, an internal user profile is generated, via which one can access files on the repository (after being authorized for access; see further). One needs this internal user profile to up- and download files using a client for file transfer (see further).

### 6.2 Authorizations and authorization levels

After a successful authentication, a repository user still cannot read or write a collection’s files. To do this, a user must first be added to that collection in a particular role. The research administrator and collection manager can add a user to a collection. The collections to which a user is added in a particular role determines what that user can do in the repository. This is also called the user’s _authorizations_. Not every user can be added to an arbitrary collection in an arbitrary role. In fact, a user’s possible authorizations are determined by the way he/she has authenticated. To describe a user’s possible authorizations, a distinction is made between four different user types, ordered according to their authorization level. These four user types form a hierarchy in which every next user type has the authorizations of the previous type plus some more:

1.	An _anonymous user_ (also called, non-registered user or visitor) visits the website of the repository without authenticating him/herself. An anonymous user can view the metadata of all DSCs. However, he can be added to none of the collections, and therefore cannot read a single file.
2.	A _non-trusted registered user_ authenticates him/herself against a non-trusted identity provider (e.g., Google, Facebook). This user type can be added as a viewer to a DSC.
3.	 A _trusted registered user_ authenticates him/herself against a trusted authentication service (e.g., SURFconext, EDUgain). This user type can be added as a contributor or viewer to all collection types (which also includes _Data Acquisition_ and _Research Documentation Collections_, DACs and SICs; see further). A contributor cannot only view but also modify a collection's files.
4.	A _DCX employee_ authenticates him/herself against the RU or RUMCN identity provider _and_ is registered by a center’s research administrator as an employee of that center. In the Donders Institute, we distinguish between four centers: DCC, DCCN, DCN_S (DCN Science Faculty), and DCN_M (DCN Medical Faculty), jointly denoted as DCX. This user type can be added as a _manager_ to all collections of his center.

### 6.3 One physical person, multiple user profiles

In principle, the same physical person can be represented with multiple user profiles in the repository. This may happen if that person therefore has a digital identity (account) on multiple identity providers and/or multiple digital identities on a single identity provider. This would for example happen if that person is employed by multiple institutions (e.g. Radboud University and Max Planck). If that person authenticates him/herself using the different digital identities, then he/she will also be represented with multiple user profiles in the repository, each of which is likely to have different authorizations.

### 6.4 Authorizations linked to employers

Some identity providers represent an organization that also acts as an employer (a university, a governmental organization, ...). The membership of these organizations changes with employment. Because employees in academia often change organization, they also change identity provider. Importantly, when a user signs up using the credentials (ID plus password) provided by an organization, an internal user profile is created that is specific for this organization. Therefore, when a user becomes authorized (in a particular role) for some collection, that authorization is linked to the organization where the user is employed, namely via that organization's identity provider.

When a user looses access to this identity provider, e.g. by switching jobs, the authorizations granted to the user profile linked to that identity provider are no longer accessible. Consequently, he/she loses access to the collections for which he/she used to be authorized via this identity provider. To regain access to these collections, the user must do the following:

1. Find another identity provider (e.g., another employer with an identity provider) with which he/she can sign up and create an associated user profile in the repository.
2. For the collections to which he/she wants to have access, ask the managers to be added with the appropriate authorizations linked to his/her new user profile.

When a user, after a period of unemployment, returns to his/her old organization and regains access to that organization's identity provider, that user will also regain the authorizations that he had prior to leaving the organization.

## 7	Up- and Downloading Files

A web interface (more precisely, the HTTP protocol) does not allow for a convenient up- and download of large files and a large number of files. For that reason, the up- and download of files to and from the repository has to be performed by means of a so-called _WebDAV_ client (called after the protocol that is used to transfer files over the internet). A very good WebDAV client is Cyberduck, which can be downloaded for free.

Up- and downloading files is only possible after authenticating oneself at the website of the repository. Via the website, one can then obtain a _data access password_ that can be used in combination with one's _data access username_ to up- and download files. This data access username is _not_ the username with which one authenticates oneself at the website of the repository (for RU and RUMCN employees, their U- or Z-number). The data access username and password are used in combination with the WebDAV client.  

It is also possible to up- and download files using a command-line interface. However, this file transfer is only possible to and from a few dedicated computers, which are typically located in the labs. This file transfer is intended for large volumes of data, and the dedicated computers will only be operated by support staff and a limited number of experienced users.    

