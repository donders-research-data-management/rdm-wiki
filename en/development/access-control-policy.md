# The technical description of the access-control policy

The access-control policy in DR is a [attribute-based access control](https://en.wikipedia.org/wiki/Attribute-based_access_control), as the access decision takes into account the attributes of three components:

1. subject: the user who is performing the access.
2. action: the type of access, e.g. read, write, etc.
3. resource: the object the user is trying to access, e.g. collection, user, etc.

The purpose of this document is to summarise all the policies in a way that developers can use it to evaluate new or existing technical implementations.

## Subjects

In the scheme of the attribute-based access control, __Subject__ refers to an instance initiating the access action.  In DR, access action is always triggered by an __User__ subject.

On a __User__ subject, the attributes used for determining access permission are:

1. __homeOrgnisation__: the home organisation of the user.
1. __organisationalUnit__: the organisational unit of DR in which the user is a member.
1. __roles__: a list of user's roles in DR

## Actions

__Actions__ are possible access operations that can take place withint the system.  Hereafter are possible actions within the DR system:

1. __read__ is an action that a subject retrieves attributes of a resource object.
1. __write__ is an action that a subject updates attributes of a resource object.
1. __manageAccess__ is an action that a subject updates the access right of a resource object.
1. __acquireAccess__ is an action that a subject tries to gain his/her access right of one or multiple resource objects.
1. __create__ is an action that a subject initiates a new resource object.
1. __close__ is an action that a subject disables future updates on attributes of a resource object. 
1. __open__ is an action that a subject enables future updates on attributes of a resource object.

## Objects

__Objects__ are resources to be accessed. In DR, the following objects are identified:

1. __User__: a user, see above in the Subject section.
1. __UserAttribute__: an attribute of an User object.
1. __Collection__: a DR collection
1. __CollectionAttribute__: an attribute of a DR collection
1. __Organisation__: The organisation
1. __OrganisationalUnit__: The organisational unit

## Policies

### for access to the User object

- Allow user can read their own profile:

```
Allow access to resource User
    if Subject is User 
    and Action is read
```

- Allow access to displayName of any users

```
Allow access to UserAttribute
    if Action is read
    and if UserAttribute.key in ['surName', 'givenName', 'displayName',
                                 'email', 'homeOrganisation', 'organisationalUnit',
                                 'researcherId', 'ORCHID' ]
```

- Allow access to givenName, surName, email, displayName of any users if the user is a collection manager, or OU admin

```
Allow access to UserAttribute
    if Action is read
    and if typeOf(Subject.roles) in [CollectionManager, OUAdmin]
    and if UserAttribute.key in ['surName', 'givenName', 'displayName', 'email']
```

### for access to the Collection object

### for access to the Organisation object

### for access to the OrganisationalUnit object
