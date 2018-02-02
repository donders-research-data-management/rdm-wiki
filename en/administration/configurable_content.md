# Configurable content for the Donders Repository portal

This is the repository for managing DI-specific controlled vocabularies, naming schemes and references to external resources that map terms and names onto meanings and definitions.

In the implementation of the Donders Repository portal, configurable contents are decoupled from the codes.  This allows content managers (e.g. the data stewards) to modify informations on the portal, such as policy, links to documentations, without the need of developers updating the code.  It also provides certain level of customise-ability of the portal for different research institutions.

This repository has two branches, the _master_ and the _release_.  They serve different purposes in the following workflow from editing the contents to applying changes online.

## The workflow

Two roles are involved in the workflow: the _content manager_ which is responsible for updating the contents; and _system administrator_ which brings the update online.

1. The content manager edits contents on the master branch.
1. The content manager tests changes on the master branch.
1. The content manager informs system administrator to update the system with the changes.
1. The system administrator merge changes in the master branch into the release branch.
1. The system administrator/content manager receive a notification about the deployment process.

## Content editing

Please refer to [this document](edit_configurable_content.md) for details.

## Test

1. download the repository

  ```bash
  $ git clone https://github.com/donders-research-data-management/rdm-configurable-content-donders
  ```

2. create distribution zip file

  ```bash
  $ cd rdm-configurable-content-donders
  $ make -f Makefile dist
  ```

  This makefile target will do the following things in a sequential order:

  - convert CSV files into JSON documents (e.g. the controlled vocabularies of keywords)
  - validate JSON documents as long as the corresponding `.schema` file is presented
  - create the release package (`rdm-configurable-content-*.tar.gz`) taking into account only the needed files (e.g. derived HTML snippets and JSON documents) for deployment
  - walk through the `external_urls.json` file in the release zip, check whether the URLs are (or will be) available after the deployment

## Deployment

The deployment process is triggered by changes in the `release` branch of the repository. After the changes in the `master` branch is confirmed, one can update the `release` branch using the following git commands:

```bash
$ git checkout release
$ git rebase master
$ git push
```
