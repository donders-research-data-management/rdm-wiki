# Frequently asked questions about data sharing

## Should I always share the data of my publication?

Yes! Our funding agencies, such as NWO and EU, require it either explicitly in the grant on basis of which you carried out the work, or implicitly in their general regulations. The Radboud University has made open access its policy. The Donders Institute requires it.

There might be reasons why you don't want to share your data immediately, e.g. if you are still working on follow up publications based on the same data. In those cases you should share the data under an **embargo** of a certain time.

There might be reasons why you don't want to share your data with everyone, e.g. if it represents financial value. In those cases you should make a custom **data use agreement** under which the data is to be shared (which might e.g. contain a clause about paying for the data).

There might be reasons related to the privacy of your subjects and where the data cannot be de-identified. In that case you still might be able to share processed results at the **group level** that allow other researchers to validate the claims in your paper. Note that unprocessed imaging and MEG/EEG data can be shared after it has been de-identified and under the appropriate [data use agreement](../guides/sharing.md).

## Which data should I share?

In principle any data that you are able to share and that is of potential value to other researchers. So not only the final data points that you use in the scatter-plot in your paper, but everything from the raw data onwards.

However, you should only share data that has been de-identified and that cannot be traced back to the individual. The data use agreement for human data prohibits linking the data that you are sharing with other databases, so you should not necessarily worry on other research data that is out there from your subjects. The data that *you* share should not allow individuals to be identified.

## How should I organize the data that I am sharing?

At the Donders Institute we collect data of many different types and there is not a single standard how you should organize the data. To maximize the usefulness of the data for the researchers that will download it (the audience), you should consider whether certain standards exist that are commonly used by the particular audience.

If you start with a standard organization of your data early on in your experimental and analysis pipeline, you will have much less work in re-organizing it for the data sharing collection.

You should consider what data to share, in which file formats to share it, how to organize the data over (sub)directories, and how to annotate and document the data and the experimental conditions under which it was acquired.

### Anatomical and functional MRI data

We recommend the data in the collection to be organized according to the Brain Imaging Data Structure (BIDS, see [bioRxiv](http://dx.doi.org/10.1101/034561)). BIDS is a standard format and comprehensive protocol for organizing and describing MRI datasets. The BIDS protocol uses file formats compatible with existing software, unifies the majority of practices already common in the field, and captures the metadata necessary for most common data processing operations.

### MEG data

There is no standard for MEG data sharing yet, but there are currently efforts to extend the Brain Imaging Data Structure (BIDS) for MEG data. We therefore recommend the data in the collection to be organized in a structure that is comparable to BIDS, see  [bioRxiv](http://dx.doi.org/10.1101/034561)).

You must share the unprocessed MEG data in the original CTF dataset format (i.e. *.ds directories). You should share the anatomical MRI of the MEG subjects in NIfTI format. You should [coregister](http://www.fieldtriptoolbox.org/faq/how_to_coregister_an_anatomical_mri_with_the_gradiometer_or_electrode_positions) the MRI first and subsequently [deface](http://www.fieldtriptoolbox.org/faq/how_can_i_anonimize_an_anatomical_mri) it, so that you can share sufficient anatomical details without identifying features.

## I don't have experimental data, but only simulations

In-silico experiments are as useful as in-vivo experiments and also warrant sharing with other researchers. In this case you should share the software scripts, settings and files that you used in your computer experiments.

## How can external researchers get an account?

External researchers that are interested in downloading data should sign up with their institutional identity provider (IdP) if possible. Since not all IdPs of all academic institutions are supported, and since not all external researchers are linked to an institution that provides federated IdP, external researchers can contact the [DI-RDM helpdesk](mailto:dirdm.helpdesk@gmail.com) with the request for an account.


## Where should I keep my pseudonimisation key?

A pseudonimisation key allows a researcher to link research data (experimental, biological, behavioural ...) to the personal data of the participant (name, telephone number, bank account, ...).    

For the protocol with respect to pseudonimization keys, a distinction has to be made between PKs that are used in course of ongoing studies, and those that have been used studies that are now completed (in the DI RDM terminology, for studies whose associated collections are open, respectively closed).

The protocol with respect to pseudonimization keys of _ongoing studies_ is the following:

1. The pseudonimization key is _not_ stored on the digital repository.
2. Only the collection managers have access to the pseudonimization key.
3. The collection managers must act in accordance with the regulations of the Radboud University about access to privacy-sensitive information.

This protocol is outlined in the [general information brochure](http://donders-institute.github.io/rdm-wiki/en/#!guides/templGenInfoBroch.md#Privacy).

The current version of the DI RDM protocol does not involve a protocol for pseudonimization keys of completed studies. However, all members of the DI RDM legal task force agree that this is an important future extension, and they argue for the following functionality:

1. The pseudonimization keys of all completed studies are stored on a medium that is separated from the data repository.
2. These pseudonimization keys must be stored in encrypted way, and the encryption key is only known to the authorized staff that has access to this pseudonimization key repository.

When considering the usefulness of a pseudonimization key repository, one can think about the following:
* Withdrawal of shared data
* To inform participants in case of incidental findings
* To contact participants for a follow-up study
* To link the data of participants that were part of multiple studies

## Who should have access to the data sharing collection?

All people involved in creating the data sharing collection should have access (as manager, contributor or viewer). In principle this should include all authors of the published data.

Following collection closure and, if applicable, an embargo period, external researchers can request access to the data in the collection. This requires them to agree to the collection-specific "Data Use Agreement", after which they will be automatically added as a viewer of the collection.
