# Exercise: play with text-based data file 

## Preparation

Download [this data file](../exercise/gcutError_recon-all.log) using the following command:

```bash
$ wget http://donders-institute.github.io/hpc-wiki/en/linux/exercise/gcutError_recon-all.log
```

This data file is an example output file from a freesurfer command submitted to the cluster using qsub. In this simple task we are going to try to extract some information from it using a few commands.

## Your Task
1. Construct a Linux command pipeline to get the subject ID associated with the log file. The subejct ID is of the form Subject##, i.e Subject01, Subject02, Subject03, etc. Use one command to send input to grep, and then use grep to search for a pattern.
  
    Hint: 1. Commands separated with a pipe, the `|` character, send the output of the command to the left of the pipe as input to   the command on the right of the pipe. 

    Hint: 2. Think back on the exercise about the wildcards.

2. If you completed Task 1, you were able to find the output you wanted, but there was much more output sent to the screen than you needed. Construct another pipeline to limit the output of _grep_ to only the first line.

    Hint: Think of a command that prints the first n lines of a file. You can always google the task if you can't think of the right tool for the job.

## Solutions

### Task 1

```bash
$ cat gcutError_recon-all.log | grep "Subject[0-9][0-9]"
/home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer
-subjid FreeSurfer -i /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/Scans/Anatomical/MP2RAGE/MP2RAGE.nii -all
setenv SUBJECTS_DIR /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05
/home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer
mri_convert /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/Scans/Anatomical/MP2RAGE/MP2RAGE.nii /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/orig/001.mgz 
mri_convert /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/Scans/Anatomical/MP2RAGE/MP2RAGE.nii /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/orig/001.mgz 
reading from /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/Scans/Anatomical/MP2RAGE/MP2RAGE.nii...
writing to /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/orig/001.mgz...
/home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/orig/001.mgz
cp /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/orig/001.mgz /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer/mri/rawavg.mgz 
```

Hint: Note that you could also have run the command `grep "Subject" gcutError_recon-all.log` to get the same results. The traditional unix command line tools typically provide many ways of doing the same thing. It's up to the user to find the best way to accomplish each task. grep is an excellent tool. To learn more about what you can search, try man grep. You can also google for something like "cool stuff I can do with grep." 

### Task 2

```bash
$ grep "Subject[0-9][0-9]" gcutError_recon-all.log | head -1 /home/language/dansha/Studies/LaminarWord/SubjectData/Subject05/FreeSurfer
```

You could have also done

```bash
$ grep -m 1 "Subject[0-9][0-9]" gcutError_recon-all.log
$ cat gcutError_recon-all.log | grep "Subject[0-9][0-9]" | head -1
$ cat gcutError_recon-all.log | grep -m 1 "Subject[0-9][0-9]"
```

There are usually many ways to do the same thing. Look up the -m option in the grep man page if you're curious! 

## Closing Remarks

These are just simple examples. You see the real power of the unix command line tools when you add a little, soon to come, scripting know-how. A simple example of a more powerful way to use grep is in a case where you have 543 subject logs (not impossible!), and you need to search through all of them for subjects who participated in a version of your experiment with a bad stimuli list. grep is an excellent tool for this!
