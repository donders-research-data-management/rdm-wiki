# Controlled vocabularies

The controlled vocabularies refer to sets of well-defined words (or terms) used in the RDM system to provide user a more structured way in specifying certain collection attributes. Those vocabularies are organised and distributed via [this package](https://github.com/donders-research-data-management/rdm-control-vocabularies). Hereafter we summarise these vocabularies with respect to their usages in the collection attributes.

## Collection keywords

Using controlled vocabularies for keywords provides an efficient (and less ambiguous) way of describing collections for data sharing. 

The first two controlled vocabularies for keywords are `SFN2013` and `MeSH2015`. They are referred to as `keyword_SFN2013` and `keyword_MeSH2015` as repeatable collection attributes. The demand of supporting more controlled vocabularies is foreseeable.

## Identifier systems for external content

External contents are objects (e.g. data, publications) of which the contents are not stored in the RDM system.  Instead, they are referred by _identifiers_.

An identifier is a string (or serial number).  It is only relevant to certain identifier arrangement (i.e. the _identifier system_).  To make the identifier meaningful, the identifier system should be considered as part of the identifier. Thus, a full identifier to external content is in fact a [_Combinatory Attribute_](collection_attributes.md#Combinatory_attributes) consisting of the `system` and the `identifier`.

To avoid ambiguity, widely-used identifier systems are provided as a pre-defined list (controlled vocabulary).  It allows certain features to be built around, e.g. resolving identifiers to URL's to which external content can be obtained via the web browser, or applying system-specific validation on the identifier.

### External publications

External publications are linked to RDM collections via the `associatedPublication` attribute.  The table below summarise a list of identifier systems to be supported for identifying an external publication.
   
|  system           |  name of system               |           link to content                         |
| ----------------- | ----------------------------- | ------------------------------------------------- |
|  PMID             | PubMed                        | http://www.ncbi.nlm.nih.gov/pubmed/{identifier}   |
|  arXiv            | arXiv.org: e-print archive    | http://arxiv.org/abs/{identifier}                 |
|  DOI              | Digital object identifier     | https://doi.org/{identifier}                      |
|  handle           | Handle persistent identifier  | http://hdl.handle.net/{identifier}                |
|  ePIC             | European persistent identifier consortium | http://hdl.handle.net/{identifier}    |
|  ISBN             | International standard book number |                                              |
|  URI              | Uniform Resource Identifier        |   as the identifier                          |

## Ethics review boards for ethical approval identifier

Examples of the "fully qualified" ethical approval identifiers are provided [here](../faq/dac.md). In general, it consists of two parts:

- the ethical review board in terms of its `short-name` (see below), and
- the identifier (the part consisting only `/`, `-`, and numerical digits)

Therefore, the full ethical approval identifier is implemented as a [_Combinatory Attribute_](collection_attributes.md#Combinatory_attributes) of a DAC.

### The ethics review board

A list of ethics review boards are provided [here](../guides/ethics.md#4._Appendix_-_overview_of_ethics_review_boards).  From the two tables, only those with `short-name`'s are supported.  The `short-name`'s form a controlled vocabulary that is used by CMS and iRODS internally. On CMS, the display should use the `full-name`'s instead.

### The identifier

The identifier here refers to the part following the `short-name` of the ethics review board.  The value of it needs to be provided by researcher. 

From the examples, it seems to have a common pattern: __a four-digit year and (3 or 4-digits) number separated by either `-` or `/`__, and the `-` and `/` may be interchangeable.  This common pattern may serve the purpose of validating the value provided by researchers.
