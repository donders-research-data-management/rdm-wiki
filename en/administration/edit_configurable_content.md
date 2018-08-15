# Editing the configurable content of the Donders Repository portal

This page provides instructions for content manager to edit the configurable contents of the Donders Repository portal.

## How to edit

The configurable contents are organised in GitHub as a git repository.

In the repository, you will see two branches, the _master_ and the _release_.  __You should only edit the master branch__.  Thus, before you start editing, make sure that you are on the master branch.

There are two ways of editing the static content:

### method 1

The first edit method is to modifiy the contents directly on the GitHub web interface. Changes made in this way are committed right way to the repository.

### method 2

The second method is to perform changes on a local copy of the repository. With this method, one could edit contents with a favorite text editor; but knowing a couple of basic Git commands is needed.  Follow the instruction below:

Make a local copy of the repository:

```bash
$ git clone https://github.com/donders-research-data-management/rdm-configurable-content-donders.git
$ cd rdm-configurable-content-donders
```

Edit the files with your favorite text editor.  With this method, changes need to be committed and pushed to GitHub by

```bash
$ git commit -a -m 'message about the change'
$ git push
```

## What to edit

The configurable content to be modified by the content manager are the following type of data:

- __Indices__ are files providing references or elaborated data for the portal to create human-friendly contents at various places in the portal.
- __Snippets__ are files providing part of the HTML body to be incorporated in various portal pages.
- __Styles__ are files used to provide customised style of the portal.
- __Variables__ are placeholders in certain files that will be replaced by the service code with dynamic values when the configurable content is incorporated in the web page.

### indices

The indices files are directly consumed by the portal code to create content dynamically.  Thus, they are presented in a machine-readable format, such as JSON and CSV, in the repository. Given the flexibility of the JSON format, indices in CSV formats are converted into JSON during the deployment process, using the [tools/csv2json.py](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/tools/csv2json.py) script.

A list of indices are given blow:

* [external_urls.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/external_urls.json) contains links to local contents (i.e. contents provides by this repository) or remote resources (i.e internet resources).  The local contents are specified with `/` followed by a path relative to the repository's directory; while the remote resources are specified with a URI protocol, such as `http://` or `https://`.

* [doc/dua/data_use_agreement.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/dua/data_use_agreement.json) provides a list of Data Use Agreements, each has its `id`, `name`, and relative `path` to the content.  Note that the `path` is provided as a relative path as the content are provided locally from the repository.  This list is used by the portal to generate the DUA options on the collection editing form of the Data-Sharing Collections.  The order is respected.

* [doc/ethics/ethics_review_board.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/ethics/ethics_review_board.json) provides a list of Ethical Review Boards, and they are grouped in different categories.  This list is used by the portal to generate the Ethical Review Board options on the collection editing form of the Data-Acquisition Collections.  The order is also respected.

* [doc/publication/publication_systems.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/publication/publication_systems.json) provids a list of supported resource identifier systems that are used by the portal to generate the Publication System options on the collection editing form of the Data-Sharing Collections.  Each item on the list shoudl consists of the full name (`system`), the short name (`pidType`), and the URL prefix (`urlPrefix`).

* [doc/keyword/MeSH2015.csv](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/keyword/MeSH2015.csv) and [doc/keyword/SFN2013.csv](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/keyword/SFN2013.csv) are two controlled vocabularies currently supported by the Donders Repository for collection keywords.  They are provided in the CSV format, and will be converted to a JSON format during the deployment.  __For the moment, adding a new keyword set requires development works in the Donders Repository.__

As the JSON documents are imported by the portal code, invalid JSON document can cause errors.  Therefore, all the JSON indices come with a schema file for validating the JSON document during the build process. This process prevents broken JSON indices being deployed to the production system. __One should make sure the schema matches the modified JSON file so that the build process will not fail.__  

### snippets

Snippets are HTML files that will be inserted in relevant portal pages, providing useful information to the portal users.  For a consistent look-n-feel on the portal, one should prevent any CSS-styling in the snippet.

Supported snippets are listed below:

* [doc/login.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/login.html) contains text to be shown on the portal's login page, after the user clicks on the `LOG IN` button.

* [doc/logout.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/logout.html) contains text to be shown on the portal after the user logs out the portal.

* [doc/signup.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/signup.html) contains text to be shown on the portal after the user signed up to the portal the first time.

* [doc/homepage.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/homepage.html) contains text to be shown on the portal's homepage.

* [doc/footer.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/footer.html) contains text to be shown on the footer of every portal page.

* [doc/privacy_policy.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/privacy_policy.html) contains the privacy policy of the Donders Repository.

* [doc/requestaccess.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/requestaccess.html) contains text guiding user to request data access to a published collection.  The text is used, e.g., in the "Content" tab of the collection detail page.

* [doc/downloadcontent.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/downloadcontent.html) contains text guiding user to download data via a data access method, such as WebDAV.

* [doc/email/collectionChangesLeadText.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/email/collectionChangesLeadText.html) provides leading message of the notification email concerning recent collection changes.

* [doc/email/managerLessCollectionsLeadText.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/email/managerLessCollectionsLeadText.html) provides leading message of the notification email concerning manager-less collections.

* [doc/dua/\*.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/dua/RU-DI-HD-1.0.html) provides contents of a specific data use agreement.

### styles

Currently, the CSS-style is coded in the portal code.  The only customisable components in style are logo and background.

* [doc/style/logo.png](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/style/logo.png): A 100px height logo in png format (logo.png). Width can vary but the height is important to keep the aspect ratio.

* [doc/style/logo@2x.png](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/style/logo@2x.png): A 200px height logo in png format for retina screens. Width can vary but the height is important to keep the aspect ratio.

### variables

Some configurable content files support variables that need to be present in order to refer dynamically to, for example, a collection identifier, when the content is incorporated in a web page.  Those variables are specified in an HTML element with an attribute `wicket:id`.  The table below summarises those variables and their usage:

| File | Web portal page | Variable|Processing|
| ---  | --------------- | ------- | -------- |
|[doc/downloadcontent.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/downloadcontent.html)|collection content page|`downloadLink`|The data access page of the collection is set as the href attribute of the a element|
|[doc/footer.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/footer.html)|all pages|`year`|The current year is set as the body of the element|
|[doc/footer.html](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/doc/footer.html)|all pages|`version`|The web portal software version is set as the body of the element|

## Online helps

By making use of the index file [external_urls.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/external_urls.json), the portal provides a mechanism allowing content manager to link various help buttons in the portal to subject-specific help documents that are hosted externally to the portal. It is achieved by adding a key-value pair in the [external_urls.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/external_urls.json) with the identifier of the help button as the key, and the link to the help documentation as the value.

### find online help identifiers

The way to find the help-button identifiers is to login to the web portal, and follow the steps below:

1. Goto an page in which you want to add the online helps
1. On the browser's navigation bar, add `&help` to the URL, and reload the page
1. On the reloaded page, hover the mouse on the question marks. The identifier should be shown in the label. The identifier is a dot(`.`)-separated string.  When the link of the online help has already been provided, the question mark will be "activated"; otherwise, it is gray-outed.

### Adding online helps

Once you have found the identifier, modify the two files: 

1. [external_urls.json](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/external_urls.json) to specify the URL of the online help identifier.
1. [external_urls.schema](https://github.com/donders-research-data-management/rdm-configurable-content-donders/blob/master/external_urls.schema) to accept the new attribute for the JSON validation.
