# Updating the configurable content

- For the configurable content editor, always use the “master” branch of the “rdm-configurable-contents-donders” repository on GitHub: https://github.com/donders-research-data-management/rdm-configurable-content-donders

- When the editing is complete, the editor informs the system administrator (Hong, at this moment) to merge changes from the “master” branch to the “release” branch.

- The merging action by Hong results in changes in the “release” branch.

- At ISC, the deployment job is performed by a service (called ‘Jenkins’) once per 5 minutes.  The job checks if there are changes on the “release” branch on GitHub.  If there is a change, it starts a deployment procedure.

- When the deployment procedure starts, it pulls the changes from the “release” branch; runs a script (a script included in the rdm-configurable-contents-donders repository) to validate data, builds the release ‘tarball’, and copies the release “tarball” to the local filesystem on the production webserver.

- In the release tarball (and therefore the content finally deployed on the production webserver), there is a “build.txt” file created by the deployment job.  It contains 1) build time 2) Git commit hash 3) Jenkin job number.  So the traceability is maintained.

- When the deployment is made or failed, system administrators (Bram, Paul and Hong) receives an email.

The whole procedure should take less than 10 minutes (out of it is the max. 5 minutes delay of the build job) to complete.

# Configurable files that support variables
Some configurable content files support variables that need to be present. These variables are html elements with a wicket:id attribute. These files and variables are processed as follows:

|File|Web portal page|Variable|Processing|
| --- | --- | --- | --- |
|downloadcontent.html|collection content page|downloadLink|The data access page of the collection is set as the href attribute of the a element|
|footer.html|all pages|year|The current year is set as the body of the element|
|footer.html|all pages|version|The web portal software version is set as the body of the element|

