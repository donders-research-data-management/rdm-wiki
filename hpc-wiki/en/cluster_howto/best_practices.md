# Best practices of running jobs on the HPC cluster

In this section, we try to collect various best practices that may be helpful for speeding up your data analysis.  Please note that they are developed with certain use-case. Therefore, unless it's mentioned to be general, take a practice carefully and always think twice whether it's applicable to your data analysis.

## Avoid massive short jobs

The scheduler in the HPC cluster is in favor of less-longer jobs over massive-short jobs. The reason is that there are extra overhead for each job in terms of resource provision and job output staging.  Therefore, if feasible, stacking many short jobs into one single longer job is encouraged.

With the longer job, your whole computation task will also be done faster given the fact that whenever a resource is allocated for you, you can utilise it longer to make more computations.

A trade-off of this approach is that if a job fails, more computational time is wasted. Nevertheless, this can be overcome with a good bookeeping in such that results from the finished computations in a job is preserved, and the finished computations do not need to be re-run.

## Utilise local drive on compute node

## Avoid massive output to STDOUT

## Spread jobs over time
