# Exercise: file system operations

In this exercise, we will get you familiar with the Linux file system.  Following the steps below, you will perform certain frequently used commands to perform operations on the file system, including

* browsing files and sub-directories within a directory,
* creating and removing directory,
* moving current working directory between directories,
* changing access permission of a directory,
* creating and deleting files.

You will also learn few useful _wildcard_ syntax to make things done quicker and easier.

## Tasks

1. Change the present working directory to your personal directory 

  ```bash
  $ cd $HOME
  ```

2. Create a new directory called `tutorial`

  ```bash
  $ mkdir tutorial 
  ```

3. Change the present working directory to the `tutorial` directory

  ```bash
  $ cd tutorial 
  ```

4. Create two new directories called `labs` and `exercises` 

  ```bash
  $ mkdir labs
  $ mkdir exercises
  ```
  
5. Remove all access permissions of `others` from the `exercises` directory

  ```bash
  $ chmod o-rwx exercises
  ```

6. Set `groups` to have read and execute permissions on the `exercises` directory

  ```bash
  $ chmod g=rx exercises
  ```

7. Change the present working directory to `$HOME/tutorial/labs`

  ```bash
  $ cd $HOME/tutorial/labs
  ```

8. Create multiple empty files (and list them) using wildcards.  Note the syntax `{1..5}` in the first command below. It is taken by the Linux shell as a serious of sequencial integers from `1` to `5`. 

  ```bash
  $ touch subject_{1..5}.dat

  $ ls -l subject_*
  -rw-r--r-- 1 honlee tg 0 Sep 30 16:24 subject_1.dat
  -rw-r--r-- 1 honlee tg 0 Sep 30 16:24 subject_2.dat
  -rw-r--r-- 1 honlee tg 0 Sep 30 16:24 subject_3.dat
  -rw-r--r-- 1 honlee tg 0 Sep 30 16:24 subject_4.dat
  -rw-r--r-- 1 honlee tg 0 Sep 30 16:24 subject_5.dat
  ```

  Tip: the `touch` command is used for creating empty files.

9. Remove multiple files using wildcards.  Note the syntax `*`.  It is taken as "any characters" by the Linux shell.

  ```bash
  $ rm subject_*.dat
  ```
