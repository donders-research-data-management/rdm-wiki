## Exercise: Running FreeSurfer jobs on the cluster
In this exercise we will construct a small script to run `freesurfer --recon-all` and use qsub to submit this script to the cluster for execution.

## Preparation
Move into the directory you'd like to work in and download the necessary files for this exercise using this command:

```bash
wget http://donders-institute.github.io/hpc-wiki/en/cluster_howto/exercise_freesurfer/FSdata.tgz
```
## Create the script 
 1. CD into FSdata/, open a text editor and create the script runFreesurfer.sh

```bash
#!/bin/bash

export SUBJECTS_DIR=$(pwd)
recon-all -subjid FreeSurfer -i MP2RAGE.nii -all
```
 
 2. Set the script to be executable
 
 3. Run the qsub command
 
 ```bash
 $ echo "cd $PWD; ./runFreesurfer.sh" | qsub walltime=00:10:00,mem=1GB 
 ```
 4. Verify the job is running with `qstat.` You should see something like:

```bash
Job ID                    Name             User            Time Use S Queue
------------------------- ---------------- --------------- -------- - -----
11173851.dccn-l029         STDIN            dansha                 0 Q long
```
5. Because we don't really want to run the analysis but rather test a script, kill the job with qdel

```bash
$ qdel <your-job-id>
```
