# Exercise: distribute data analysis in the Torque cluster

This exercise mimics a distributed data analysis assuming that we have to apply the same data analysis algorithm independently on the datasets collected from 5 subjects.  We will use the torque cluster to run the analysis in parallel.

## Preparation

Using the commands below to download the exercise package from [this link](torque_exercise.tgz) and check its content.

```bash
$ wget http://donders-institute.github.io/hpc-wiki/en/cluster_howto/exercise_da/torque_exercise.tgz
$ tar xvzf torque_exercise.tgz
$ cd torque_exercise
$ ls
run_analysis.sh  subject_1  subject_2  subject_3  subject_4  subject_5
```

In the package, there are folders for subject data (i.e. `subject_{1..5}`).  In each subject folder, there is a data file containing an encrypted string (URL) pointing to the subject's photo.  In this fake analysis, we are going to find out who our subjects are by decrypting the string and downloading the photo into each subject's folder.  The core of this analysis has been provided as a function in the bash script `run_analysis.sh`.

## Task
1. understand the script `run_analysis.sh` and complete it by implementing the ___TODO___ at the bottom of the script.

   Hint: we assume the script takes one argument, the subject id. Call the analysis function and pass the script's argument to the function.

2. run the analysis by submitting 5 parallel jobs; each runs on a dataset.

3. wait until the jobs finish and check out who our subjects are. You should see a file `photo.*` in each subject's folder.

## Solution

1. a complete version of the `run_analysis.sh`: 

   [gimmick:gist](4c1fe3dbdd50e21be399)

2. submit jobs to the torque cluster

   ```bash
   $ for id in $( seq 1 5 ); do echo "$PWD/run_analysis.sh $id" | qsub -N "subject_$id" -q veryshort; done
   ```
