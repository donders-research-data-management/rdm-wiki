# Exercise: distributed data analysis with MATLAB 

In this exercise, you will learn how to submit MATLAB jobs in the cluster using two approaches that are commonly used at DCCN.

The first approach is to use a wrapper script called `matlab_sub`; while the second is to submit batch jobs right within the graphical interface of MATLAB.

## Preparation

Follow the steps below to download the prepared MATLAB scripts and functions.

```bash
$ wget http://donders-institute.github.io/hpc-wiki/en/cluster_howto/exercise_3/matlab_exercise.tgz
$ tar xvzf matlab_exercise.tgz
$ cd matlab_exercise
$ ls
matlab_sub  qsub_toolbox
```

## Task 1: matlab_sub

## Task 2: qsubcellfun

1. Start matlab interactive session with the command

    ```bash
    $ matlab2014a
    ```

2. In the matlab graphical interface, type the following commands to load the MATLAB functions for submitting jobs to the cluster.  Those functions are part of [the FieldTrip toolbox](http://www.fieldtriptoolbox.org/).

    ```matlab
    >> addpath '/home/common/matlab/fieldtrip/qsub' 
    ```

3. Switch the working directory to which the prepared MATLAB functions are located. For example,

    ```matlab
    >> cd qsub_toolbox
    >> ls
    qsubcellfun_demo.m  qsubfeval_demo.m  qsubget_demo.m  randn_aft_t.m
    ```

4. Open the file `randn_aft_t.m`.  This matlab function keeps refreshing a n-dimentional array for a duration.  It takes two arguments: `n` for the array dimention, and `t` for duration. You could try to run it interactively using the MATLAB command below:

    ```matlab
    >> n_array = {10,10,10,10,10};
    >> t_array = {30,30,30,30,30};
    >> out = cellfun(@randn_aft_t, n_array, t_array, 'UniformOutput', false);
    >> out

    out = 

      Columns 1 through 4

        [10x10 double]    [10x10 double]    [10x10 double]    [10x10 double]

      Column 5

        [10x10 double]
    ```

5. The `cellfun` function above makes five iterations sequencially over the `randn_aft_t` function.  For every iteration, it fill in the function with `n=10` and `t=30`.  Using the cluster, the iterations can be made in parallel via the `qsubcellfun` function. For example,

    ```matlab
    >> out = qsubcellfun(@randn_aft_t, n_array, t_array, 'memreq', 10*10*8, 'timreq', 30, 'stack', 1);
    ```

    Note: The `qsubcellfun` will block the MATLAB console until all submitted jobs are finished.
