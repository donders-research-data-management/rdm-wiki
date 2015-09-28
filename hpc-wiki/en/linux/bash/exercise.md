# Exercise: scripting in bash

## Task

### __Part I__

1. Download the [example script](language.md#The_example_script) using the following command, make it executable and run it.

   ```
   $ wget --no-check-certificate https://gist.githubusercontent.com/hurngchunlee/78ae286f079e4a68ed63/raw/check_login.sh
   ``` 

   Hint: use [this wiki](language.md) to understand the script. 

2. Complete the ToDo parts in the script. The steps:

    - use the `id` command to check whether the user id given from the command argument is valid in the system (i.e. the user does actually exist),

      Hint: When the user does not exist in the system, the `id` command returns a non-zero number.

    - return a different number (`2`, for example) from the `finduser` function,

    - implement a corresponding option in the case switch to print out an error saying the user is not valid.

### __Part II__

Download [this file](../exercise/cluster_accounting.dat) containing some accounting data concerning the number of completed computational jobs in the HPC cluster per user per day.  Data are organised in four columns separated by a space character, from left to right, they are ___date___, ___user id___, ___number of completed matlab jobs___ and ___number of completed batch jobs___.

- Write a script to calculate the overall cluster usage fraction of each user in terms of the number of completed jobs.
   
- Start from the following script template

  [gimmick:gist](1809422520cc85f7edf5)

## Solution 

### __Part I__

After completing the ToDo items in the `check_login.sh` script.

[gimmick:gist](12cb9394c691e55db047)

### __Part II__

Usage percentage of the cluster per user, in terms of number of completed jobs.

[gimmick:gist](125f83822d839aabd6ea)
