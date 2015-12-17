# Protocol for Reviewers


## 1.	Version

Draft version, last update by Eric, 30 august 2015.

## 2.	Scope

This protocol is in effect as of DD-MM-YYYY and replaces all previous versions of the DI-RDM protocol for reviewers.

## 3.	Audience

The audience for this protocol consists of all reviewers. This group is to be distinguished from the researchers and the research administrators, who have their own protocol. The reviewers include supervisors (PIs and other employees that supervise research), center directors, scientific integrity officers, and members of audit committees.

## 4.	Context

The context of this protocol is Research Data Management (RDM) involving a digital repository. It assumes that the reviewer has access to the repository. Changes to the organization and user interface of the repository may have consequences for this protocol, and these will be integrated in future versions of this protocol. The reviewer should therefore always ensure that she or he is using the latest version of this protocol. 
This protocol deals with 
1.	Data preservation for the purpose of internal reuse 
2.	Archiving and documenting for the purpose of scientific integrity
3.	Data sharing with the external scientific community
A reviewer is assigned to monitor whether collections are built in accordance with the protocol for researchers. There are two reviewer roles: (1) the collection reviewer, who has responsibilities for individual collections, and (2) the center reviewer, who has responsibilities for all of a center’s collections. The research administrator assigns collection and center reviewers to the collections. The center director is responsible for the continuity in the collection reviewer role.

## 5.	Tasks of a Collection Reviewer

### 5.1.	Supervision

In each of the Donders centers, research is being supervised. A supervisor monitors the quality of the scientific work and provides guidance with the objective to achieve this quality. For the purpose of RDM, the research administrator adds a supervisor in the role of collection reviewer to the collections he/she must supervise. The center director decides which center member is added as a collection reviewer to a particular collection.
Several aspects of the tasks of a collection reviewer are also described in the DI RDM Protocol for Researchers.

### 5.2.	Closing Collections After Approval

The collection reviewer must monitor whether a collection is built in accordance with the protocol for researchers. The reviewer indicates his approval of the collection by closing it, provided he has been requested to do so by the collection manager. When a collection closes a collection, a permanently read-only (frozen) copy of the collection is made, and a persistent identifier (PID) is assigned to it. This is described in more detail in the DI RDM Protocol for Researchers.
A collection cannot always be closed. In general, a collection can only be closed if the collections on which it depends are also closed. The reason is that reproducing the results of a published study is only possible if (1) the data (stored in the data acquisition collections; DACs) do not change, and (2) the documented analyses (stored in the scientific integrity collection; SIC) do not change. Specifically, the following dependencies exist between the three collection types: 
1.	A SIC can only be closed if the DACs on which it depends are also closed.
2.	A data sharing collection (DSC) can only be closed if the associated SIC is also closed. (This dependence of the SIC on the DAC can be removed if the part of the DAC on which it depends is copied to the SIC; see the DI RDM Protocol for Researchers.)

### 5.3.	Versioning Policy

The collection reviewer is responsible for the versioning policy with respect to this collection. Every frozen copy of a collection is a version of this collection, and is referred to by its PID. In the simplest scenario, a collection changes during the scientific process, until the collection reviewer decides that it is complete and makes a frozen copy of it. In an extended scenario, the reviewer decides to make frozen copy snapshots of the changing collection, with each snapshot being one version. 
When multiple frozen copies are made of a single collection, the collection reviewer and manager can choose between two types of frozen copy:
1.	A frozen copy made after a major change of the collection. A major change has occurred in the collection if at least one of the files has changed since the last frozen copy. A frozen copy made after a major change will be assigned a new PID.
2.	A frozen copy made after a minor change of the collection. A minor change has occurred in the collection if only the metadata have changed since the last frozen copy. A frozen copy made after a minor change will not be assigned a new PID.  
In his/her decisions, the collection reviewer must take into account the costs of versioning, induced by the fact that every read-only copy of an existing collection requires disk space. The costs of a frozen copy after a major or a minor change are the same. 

### 5.4.	Ensuring Continuity in the Collection Manager Role

The collection reviewer is responsible for ensuring continuity in the collection manager role. Specifically, the collection reviewer must act when a collection manager’s contract has ended. After his contract has ended, the collection manager can no longer represent his center in a formal way, and as a result, he/she should not have the right to give other users access to this collection. Therefore, the collection reviewer must do the following:
1.	When that collection manager was the only one for that collection, a new collection manager must be assigned. 
2.	The old collection manager can remain contributor or viewer if his involvement in the collection is continued. 
In case the collection reviewer is not a collection manager himself, these actions are performed by the research administrator or another collection manager. In all cases, the collection reviewer decides about who will be the new collection manager and the new role of the old collection manager.

##6.	Tasks of a Center Director

The center director is responsible for safeguarding the quality and the continuity of the supervision. To perform this task, he/she has access to the metadata of all of his center’s collections.
The center director must act when one of his supervisors leaves the center. In this event, all collections in which this supervisor has the role of collection reviewer must be assigned to a new collection reviewer that takes over the associated responsibility. The center director decides about the new collection reviewer and the research administrator performs the actual assignment of the new collection reviewer.

##7.	Tasks of a Center Reviewer

A center reviewer has a responsibility in monitoring whether collections are built in accordance with the protocol for researchers. For that purpose, he has read access to all of a center’s collections. Different from the corresponding responsibility for researchers, collection reviewers and center directors (which is structured hierarchically; researcher→collection reviewer→center director), the center reviewer’s responsibility is unrelated to any hierarchical relation in the center. However, he reports to the center director. 
Within a center, the center reviewer role is typically assigned to the scientific integrity officer and/or an audit committee. The center director decides on who will be assigned in this role, and the research administrator performs the actual assignment is the digital repository. Typically, a scientific integrity officer is assigned for a much longer period (several years) than an audit committee member (one or more weeks).

##8.	Role-Dependent Metadata Access

Collection reviewers can also be researchers (with the roles of manager, contributor or viewer), a center director can also be collection reviewer and/or researcher, and the same holds for a center reviewer. To deal with this combination of roles, the digital repository offers the possibility to filter the collections on the basis of a selected role:
1.	As a researcher, he will get access to all collections in which he is a manager, contributor or viewer. 
2.	As a reviewer, he will get read access to all collections in which he is a reviewer.
3.	As a center director, he will get access to the metadata of all of his center’s collections. [To be discussed, if all center members can access these metadata, then this role does not have to be represented in the repository.]
4.	As a center reviewer, he will get read access to all of the center’s collections. 
Every user can make use of a reporting tool to list the metadata of all collections for which he is authorized, depending on the selected role. The reporting tool allows for filtering on specific metadata, such as the collection manager and the collection reviewer.

