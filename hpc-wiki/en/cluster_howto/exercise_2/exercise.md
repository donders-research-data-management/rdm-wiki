# Exercise: obtaining resource requirements of jobs

In this exercise, you will be confronted with an issue that the computer resource (in this case, the memory) allocated for your job is not sufficient to complete the computation. With few trials, you will find out a sufficient (but not overestimated) memory requirement to finish the job. 

## Preparation

To create such a situation, you are given a program which calculate the cube number of a given integer (i.e. `n^3`). Follow the commands below to download the program and run it locally:

```bash
$ wget http://donders-institute.github.io/hpc-wiki/en/cluster_howto/exercise_2/fake_app
$ chmod +x fake_app
$ ./fake_app 3

compute for 303 seconds
result: 27
```

Although the result looks trivial, the program internally generates certain usage of CPU time and Memory.  Therefore, the result is not returned right away.

## Task

1. Try to submit a job to the cluster using the following command.

    Attention: Remember to replace `<your_email>` with your actual email address.

    ```bash
    $ echo "$PWD/fake_app 3" | qsub -N fake_app -M <your_email> -l walltime=600,mem=128mb
    ```

2. Wait for the job to finish, and check the `STDOUT` and `STDERR` files of the job. Do you get the expected result in the `STDOUT` file?

3. Check your e-mail box for a notification about the job.  The content of it should looks similar to the following snippet.

    ```bash
    PBS Job Id: 10086535.dccn-l029.dccn.nl
    Job Name:   fake_app
    Exec host:  dccn-c365.dccn.nl/0
    job deleted
    Job deleted at request of root@dccn-l029.dccn.nl
    job 10086535 exceeded MEM usage hard limit (516 > 140)
    ```

4. Now check the job's `STDOUT` file again and find out the actual memory usage of the computation.

5. Try to submit the job again with the memory requirement increased sufficiently for the actual usage.

    Note: Specify the requirement higher, but as close as possible to the actual usage.  Unnecessary high requirement results in inefficient usage of resources, and consequently blocks other jobs (including yours) from having sufficient resources to start.
