# Exercise: Linux practise

## Preparation

Download [this data file](../exercise/cluster-qstat.dat) using the following command:

```
$ wget http://donders-institute.github.io/hpc_wiki/en/linux/exercise/cluster-qstat.dat
```

In the data file you will find an output of the `cluster-qstat`, an utility command you may eventually use to manage computational jobs in the cluster.  Each line in the file shows attributes of a job currently presented in the cluster's job registry. Names of job attributes are given in the 4th line.

## Tasks

1. Construct a Linux command (pipeline) to list the number of running jobs in the data file.

   Hint: the job status is presented in colume `S`, and status `R` indicates that the job is running.
   
2. Find out how many running and waiting jobs in job queue `matlab`.

   Hint: the status `Q` indicates that the job is waiting in the queue.

## Solution

1. for task 1
 
    ```bash
    $ cat cluster-qstat.dat | grep ' R '

    10052631.dccn-l029.dcc  yulber      matlab   yulber_dccn_c013  34919   --       1   51gb  11:09:40 R  05:09:55   dccn-c021
    10066959.dccn-l029.dcc  matfra      matlab   matfra_dccn_c017  48708   --       1   65gb  03:03:00 R  05:25:43   dccn-c019
    10066960.dccn-l029.dcc  matfra      matlab   matfra_dccn_c017  48724   --       1   65gb  03:03:00 R  05:25:43   dccn-c019
    10069566.dccn-l029.dcc  yulber      matlab   yulber_dccn_c012  22391   --       1   16gb  11:09:40 R  03:46:59   dccn-c020
    10069567.dccn-l029.dcc  yulber      matlab   yulber_dccn_c012  22412   --       1   16gb  11:09:40 R  03:46:59   dccn-c020
    10069568.dccn-l029.dcc  yulber      matlab   yulber_dccn_c012  22448   --       1   16gb  11:09:40 R  03:46:59   dccn-c020
    10069569.dccn-l029.dcc  yulber      matlab   yulber_dccn_c012  22500   --       1   16gb  11:09:40 R  03:46:59   dccn-c020
    10069570.dccn-l029.dcc  yulber      matlab   yulber_dccn_c012  22559   --       1   16gb  11:09:40 R  03:46:59   dccn-c020

    ```

2. for task 2

    ```bash
    $ grep 'matlab' cluster-qstat.dat  | grep -i ' [R,Q] ' | awk '{print $10}' | sort | uniq -c

      30 Q
     117 R
    ```

    Here we employ the regular expression in the `grep` command to select jobs either in state `R` or `Q`.  More about the regular expression syntax of `grep` can be found [here](https://www.gnu.org/software/findutils/manual/html_node/find_html/grep-regular-expression-syntax.html).
