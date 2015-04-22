# Exercise: Linux practise

## Task
1. Download [this data file](../exercise/cluster_accounting.dat) using the following command:

   ```
   $ wget http://torquemon.dccn.nl/hpc_wiki/linux/exercise/cluster_accounting.dat
   ```

2. In the data file you will find some accounting data concerning the number of completed computational jobs in the HPC cluster per user per day.  Data are organised in four columns separated by a space character, from left to right, they are ___date___, ___user id___, ___number of completed matlab jobs___ and ___number of completed batch jobs___.

3. Construct a Linux command (pipeline) to get the number of active users per day.

   Hint: use the command `uniq -c` to count repeating string.

## Solution

```bash
$ cat cluster_accounting.dat | awk '{print $1}' | sort | uniq -c

  11 2014-09-01
  24 2014-09-02
  26 2014-09-03
  27 2014-09-04
  27 2014-09-05
  19 2014-09-06
   8 2014-09-07
  12 2014-09-08
```
