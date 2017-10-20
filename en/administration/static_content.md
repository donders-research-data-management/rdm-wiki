# Updating the static content

- For the static content editor, always use the “master” branch of the “rdm-ontology” repository on GitHub: https://github.com/donders-research-data-management/rdm-ontology

- When the editing is complete, the editor informs the system administrator (Hong, at this moment) to merge changes from the “master” branch to the “release” branch.

- The merging action by Hong results in changes in the “release” branch.

- At ISC, the deployment job is performed by a service (called ‘Jenkin’) once per 5 minutes.  The job checks if there are changes on the “release” branch on GitHub.  If there is a change, it starts a deployment procedure.

- When the deployment procedure starts, it pulls the changes from the “release” branch; runs a script (a script included in the rdm-ontology repository) to validate data, builds the release ‘tarball’, and copies the release “tarball” to the local filesystem on the production webserver.

- In the release tarball (and therefore the content finally deployed on the production webserver), there is a “build.txt” file created by the deployment job.  It contains 1) build time 2) Git commit hash 3) Jenkin job number.  So the traceability is maintained.

- When the deployment is made or failed, system administrators (Bram, Paul and Hong) receives an email.

The whole procedure should take less than 10 minutes (out of it is the max. 5 minutes delay of the build job) to complete.
