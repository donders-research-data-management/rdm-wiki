# Managing access permission of project data

At DCCN, researches are organised as projects. Data related to the project is centrally organized in a so-called _project directory_ on the central storage.  The path to the project directory adopts the naming convention:

```bash
/project/<the_project_id>
```

For example, a project with id `3010000.01` has its project directory `/project/3010000.01`.

Data sharing within the project directory is controlled by a role-based mechanism implemented around the [__NFSv4 Access Control List__](http://www.citi.umich.edu/projects/nfsv4/linux/using-acls.html) technology.

## User roles

Users should be aware of the following four __roles__ defined for the access control.

| Role              | Access right                                      |
| ------------------|---------------------------------------------------|
| __User__          | users in this role has read-only permission.      |
| __Contributor__   | users in this role has read and write permission. |
| __Administrator__ | users in this role has read, write permission and rights to grant/revoke roles of other users.|
| __Traverse__      | This role is only relevent for a directory. Users in this role has permission to "pass through" a directory. It is similar to the `x`-bit of the linux filesystem permission. |

Any user who wants to access data in a project directory must acquire one of the roles on the project. Users in the __Administrator__ role have rights to grant/revoke additional user roles. The project owner is the initial and the _de facto_ administrator of the project. 

## Tools

On the HPC cluster at DCCN, three scripts are prepared for managing the access permissions in terms of user roles.  The usage of them are given below.

### End-user's tool for viewing access permission

For general end-users, a tool called `prj_getacl` is used to show user roles of a given project.  For example, to list the user roles on project `3010000.01`, one does

```bash
$ prj_getacl 3010000.01
+------------+---------------------+--------+-------------+--------+----------+
|  project   |         path        | admin  | contributor |  user  | traverse |
+------------+---------------------+--------+-------------+--------+----------+
| 3010000.01 | /project/3010000.01 | honlee |    martyc   | edwger | rendbru  |
+------------+---------------------+--------+-------------+--------+----------+
```

The script support few optional arguments. Some usefule ones are listed in the following table. 

| Option       | Purpose                                                              |
| -------------|----------------------------------------------------------------------|
| `-h`         | print the help message with a full list of the command-line options  |
| `-l LOGLEVEL`| set the verbosity of the log message in a level between `0` and `3`  |
| `-p SUBDIR`  | retrieve the access right on a `SUBDIR` within the project directory |

### Administrator's tool for permission control

For the administrator, the tool called `prj_setacl` is used for altering user roles on a given project.  For example, to change the role of user `rendbru` from `Contributor` to `User` on project `3010000.01`.  One does

```bash
$ prj_setacl -u rendbru 3010000.01
```

Similarly, setting `rendbru` back to the `Contributor` role, one does the following command:

```bash
$ prj_setacl -c rendbru 3010000.01
``` 

To promote `rendbru` to the `Administrator` role, one uses the `-a` option then, e.g.

```bash
$ prj_setacl -a rendbru 3010000.01
```

For removing an user from accessing a project, another tool called `prj_delacl` is used.  For example, if we want to remove the access right of `rendbru` from project `3010000.01`, one does

```bash
$ prj_delacl rendbru 3010000.01
```

#### Controlling user role on sub-directories
Although it's still experimental, it is possible to set/delete user role on sub-directory within a project directory, using the `-p` option of the `prj_setacl` and `prj_delacl` scripts. For example, granting user `edwger` with the `Contributor` role in the subdirectory `subject_001` within project `3010000.01` can be done as follows:

```bash
$ prj_setacl -p subject_001 -c edwger 3010000.01
```

Note: One should note that changing and deleting user role is always applied recursively.

#### The "Traverse" role
When granting user a role in a sub-directory, a minimum permission in upper-level directories should also be given to the user to "pass through" the directory tree.  This minimum permission is given by assiging the user to the `Traverse` role.

In practice, the assignment is more meaningful when it takes place at the time the user is given a role to a sub-directory, therefore, it is done via the `-t` option of the `prj_setacl` command.  For example, the following command gives user `rendbru` the `Contributor` role in the subdirectory `subject_001`, as well as the minimum permission (i.e. the `Traverse` role) to pass through the top-level directory of project `3010000.01`.

```bash
$ prj_setacl -t -p subject_001 -c rendbru 3010000.01
```
