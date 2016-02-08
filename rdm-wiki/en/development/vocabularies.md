# Controlled vocabularies used by the RDM system

The controlled vocabularies refer to sets of well-defined words (or terms) used in the RDM ICT system to provide user a more structured way in specifying certain collection attributes. Those vocabularies are organised and distributed via [this package](https://github.com/donders-research-data-management/rdm-control-vocabularies). Hereafter we summarise these vocabularies with respect to their usages in the collection attributes.

## Collection keywords

Keywords provide a way of describing collection content.  Using controlled vocabularies for keywords ensures researchers a more efficient (and less ambiguous) way of sharing collection contents. 

The first two controlled vocabularies for keywords are `SFN2013` and `MeSH2015`. They are referred to as `keyword_SFN2013` and `keyword_MeSH2015` as repeatable collection attributes. The demand of supporting more controlled vocabularies is foreseeable.

## Identifier scheme for external content

External contents are objects (e.g. data, publications) of which the contents are not stored in the RDM system.  Instead, they are referred by _identifiers_.

An identifier is a string (or serial number).  It is only relevant to certain identifier organisation (i.e. scheme).  To make the identifier meaningful, the identifier scheme should also be provided as part of the identifier. It implies that a full identifier to external content is in fact a [_Combinatory Attribute_](collection_attributes.md#Combinatory_attributes) consisting of the `scheme` and the `identifier`.

To avoid ambiguity, widely-used identifier schemes are provided as a pre-defined list (controlled vocabulary).  It allows certain features to be built around, e.g. resolving identifiers to URL's to which external content can be obtained via the web browser, or applying scheme-specific validation on the identifier.

### External publications

External publications are linked to RDM collections via the `associatedPublication` attribute.  The table below summarise a list of identifier schemes to be supported for identifying an external publication.
   
|  scheme           |  name                         |           link to content                         |
| ----------------- | ----------------------------- | ------------------------------------------------- |
|  PMID             | PubMed                        | http://www.ncbi.nlm.nih.gov/pubmed/{identifier}   |
|  arXiv            | arXiv.org: e-print archive    | http://arxiv.org/abs/{identifier}                 |
|  DOI              | Digital object identifier     | https://doi.org/{identifier}                      |
|  handle           | Handle persistent identifier  | http://hdl.handle.net/{identifier}                |
|  ePIC             | European persistent identifier consortium | http://hdl.handle.net/{identifier}    |
|  ISBN             | International standard book number |                                              |
|  URI              | Uniform Resource Identifier        |   as the identifier                          |

## Ethics review boards for ethical approval identifier

Ethics review board should be provided as part of the `ethicalApprovalIdentifier`, a [_Combinatory Attribute_](collection_attributes.md#Combinatory_attributes) of a collection.

A list of ethics review boards are given [here](../guides/ethics.md#4._Appendix_-_overview_of_ethics_review_boards).

__TODO__: It is unclear whether the `code` and `short name` are important.
