# High Performance Computing for Neuroimaging Research

## About the wiki
 
This wiki contains materials used by the __Linux and HPC tutorial__ held regularly at DCCN. The aim of this tutorial is to provide researchers the basic knowledage to use the Torque/Maui cluster for data analysis. During the tutorial, the wiki is used in a combination with lectures; nevertheless, contents of the wiki are written in such that they can also be used for self-learning.

Two major sessions are found on the navigation bar at the top of the page. [The Linux basic](#!linux/intro.md) consists of the usage of the Linux operating system and an introduction to the Bash scripting language.  After following the session, you should be able to create text-based data files in a Linux system, and write a bash script to perform simple data analysis on the file.  [The cluster usage](#!cluster_howto/access.md) focuses on the general approach of running computations on the Torque/Maui cluster.  After learning this session, you should be knowing how to distribute data analysis computations to the Torque/Maui cluster at DCCN. 

## HPC Environment

![](DCCN_HPC_architecture.png)
The architecture of the HPC environment is illustrated on the left.

## Computing Cluster 

The HPC cluster at DCCN consists of three groups of computer nodes, they are:

* **access nodes**: `mentat001` ~ `mentat004` as login nodes.
* **mentat compute nodes**: `mentat203` ~ `mentat208` used for long term (i.e. > 72 hours) computations. 
* **Torque/Maui cluster**: a pool of powerful computers with more than 600 CPU cores, managed by the [Torque](http://www.adaptivecomputing.com/products/open-source/torque/) job manager and the [Moab](http://www.adaptivecomputing.com/products/hpc-products/moab-hpc-basic-edition/) job scheduler.

## Central Storage 

The central storage provides a shared file system amongst the Windows desktops within DCCN and the computers in the HPC cluster.

On the central storage, every user has a personal folder with a so-called office quota (20 gigabytes by default).  This personal folder is referred to as the `M:\` drive on the Windows desktops.

Storage spaces granted to research projects (following the [project proposal meeting(PPM)](http://intranet.donders.ru.nl/index.php?id=442)) are also provided by the central storage.  The project folders are organised under the directory `/project` which is referred to as the `P:\` drive on the Windows desktops.

The central storage also hosts a set of commonly used software/tools for neuroimaging data processing and analysis.  This area in the storage is only accessible for computers in the HPC cluster as software/tools stored there require the Linux operating system.

## Identity Manager

The identity manager maintains information for authenticating users accessing to the HPC cluster. It is also used to check users' identity when logging into the Windows desktops at DCCN. In fact, the user account received from [the DCCN check-in proceduer](https://intranet.donders.ru.nl/index.php?id=160) in fact stored secretely in this identity manager.

Note: The user account concerned here (and throughout the entire wiki) is the one received via the DCCN check-in procedure.  It is, in most of cases, a combination of __the first three letters of your first name and the first three letters of your last name__.  It is __NOT__ the account (i.e. U/Z/S-number) from the Radboud University.

## Supported Software

A list of supported software can be found [here](http://intranet.donders.ru.nl/index.php?id=966).
