# The bash scripting language

## The example script

We will use an example script to illustrate the syntax of the bash language. This script takes user ids from the command arguments and checks whether the users are currently logged in to the system.

Open a text editor (e.g. `nano`) and save the following code snippet into a file named `check_login.sh`.

[gimmick:gist](78ae286f079e4a68ed63)

Check if the script is working for you.

```bash
$ chmod +x check_login.sh
$ ./check_login.sh
```

## Conditional statement

The basic syntax of the conditional statement in bash is shown between line 8 and 13: 

```bash
if [ $# -lt 1 ]; then
    echo "usage: $0 uid1 uid2 uid3 ..."
    exit 1
else
    echo "checking users ..."
fi
```

It uses the `if-then-else-fi` structure with a boolean condition (`$# -lt 1` in the snippet) enclosed in brackets `[]`.

Note: spaces before and after the boolean condition within the brackets are mandatory.

The boolean condition can be given in various ways:

#### __Constant value or variable as boolean condition__

A constant value or the data stored in a variable can be given as a conditional statement.  It will be treated as a string.  It is considered as a _true_ statement if the string's length is not zero. For example, `[ "xyz" ]`, `[ 0 ]` and `[ 1 ]` are all _true_ statements; while `[ "" ]` and `[  ]` are taken as _false_.

#### __String comparison as boolean condition__

Binary operators in bash, such as `==`, `!=`, `<`, `>`, are meant for string comparisons. The following table summarises the possible syntax.
   
| syntax               |  _true_ condition when ...        |
|:---------------------|:----------------------------------|
| `[ str1 == str2 ]`   | `str1` is identical to `str2`     |
| `[ str1 != str2 ]`   | `str1` is not identical to `str2` |
| `[[ str1 < str2 ]]`  | `str1` sorts before `str2` lexicographically |
| `[[ str1 > str2 ]]`  | `str1` sorts after `str2` lexicographically  |

Note: the double brackets `[[ ]]` are required when using `>` and `<` operators in order to distinguish it form the syntax for the I/O redirection.

#### __Integer comparison as boolean condition__

Integer comparison is another type of boolean condition. In bash, a set of arithmetic binary operators is available for this purpose. They are summarised in the following table.

| syntax          |  _true_ condition when ...          |
|:----------------|:------------------------------------|
| `[ a -eq b ]`   | `a` is numerically equal to `b`     |
| `[ a -ne b ]`   | `a` is numerically not equal to `b` |
| `[ a -gt b ]`   | `a` is numerically greater than `b` |
| `[ a -ge b ]`   | `a` is numerically greater than or equal to `b` |
| `[ a -lt b ]`   | `a` is numerically less than `b`    |

#### __File attribute tester as boolean condition__

File attribute testers in bash are very handy conditional statements when, for example, the type and permissions of files are the concern. Some useful testers are given in the table below:

| syntax          |  _true_ condition when ...                    |
|:----------------|:----------------------------------------------|
| `[ -f path ]`   | `path` exists and refers to a regular file    |
| `[ -d path ]`   | `path` exists and refers to a directory       |
| `[ -h path ]`   | `path` exists and refers to a symbolic link   |
| `[ -r path ]`   | `path` exists and refers to a readable file   |
| `[ -w path ]`   | `path` exists and refers to a writable file   |
| `[ -x path ]`   | `path` exists and refers to a executable file |

Tip: more file attribute testers can be found [here](http://www.gnu.org/software/bash/manual/html_node/Bash-Conditional-Expressions.html).

## Iteration

Iteration in bash is enclosed wihtin a `for-do-done` block.  It is shown between line 38 and 52 in the example script:

```bash
for u in $ulistToCheck; do
    ## check if the logged-in user is on our check list
    ... skipped ...
done
```

Note the keyword `in` used here to iterate over the user ids stored in the variable `$ulistToCheck`.  For each iteration, a variable called `u` is refreshed with the current user id and used inside the loop.

## Case switch

Case switch is handy for dealing with non-binary conditions, such as the value of a variable.  An example is shown between line 41 and 53 in the script.

```bash
case $? in
    0)
        ## run this part of code when the string representation of $? is 0
        ... skipped ...
        ;;
    *)
        ## run this part of code when the string representation of $? is anything else
        ... skipped ...
        ;;
esac
```
The entire case-switch block is wrapped inside the keywords `case` and `esac`. Right after the `case` keyword is the value to be checked. In this example, the value is retrieved from a special variable `$?` referring to the exit code of the last command in the script (see [Function](language.md#Function)).

The switch is made by matching the value to options provided in the block, using the string representations. In the example, two options are specified: the first option is for the case that the value is `0`; while the second option uses asterisk `*` for any other possible cases. When an option is matched, it runs the code following the option until reaching the line with two semicolons (`;;`).

## Function

When a piece of code implements a specific feature that is reused several times in the program, it is wise to organise it in a function as it isolates the implementation complexity of the specific feature from the main logic of the program.

#### __Defining a function__
In the example script, a function called `finduser` is defined between line 18 and 26.  It checks whether a given user id is logged in to the system.

```bash
function finduser {
    ## TODO: check if the user id is a valid account
    for lu in $ulistLoggedIn; do
        if [ $lu == $1 ]; then
            return 0
        fi
    done
    return 1
}
```

The n-th argument to function is referred by `$n`.  The example above actually retrieves the first argument (`$1`) to construct the boolean condition for the if-statement.

#### __Calling a function__

Function is called by its name followed by (optional) arguments.  An example is shown on line 40 where the function `finduser` is called with an additional argument retrieved from the variable `$u`.

```bash
finduser $u
```

Value returned from the ___last___ function call is immediately stored in a special variable `$?`. 

Note: The variable `$?` is also used by bash to store the exit code of the ___last___ command. Therefore, the value stored in `$?` is overwriten after a command execution or a function call.

## Arithmetic calculation

In the scientific computation, it's very often to run arithmetic calculations in a program.  It is, however, not trivial in bash (or in any Linux shell in general).

Building in the bash shell is a preliminary integer calculator called `let`. The usage of it is illustrated on line 44 of the example script, where we add an integer `1` to the variable `n_online`.

```bash
let "n_online = $n_online + 1"
```

For doing arithmetic calculation with floating-point numbers, an utility called `bc` is commonly used. It requires pipelining the calculation expression (as a string) to the `bc` command followed by capturing the output back to the script.  For example, the above integer calculation with `let` can be done with `bc` using the following command:

```bash
n_online=$( echo "$n_online + 1" | bc )
```

Although it looks more complicated than using `let` in this case, the advantage of `bc` is its comprehension of arithmetic calculations.

Tip: check what `bc` can do with `man bc`.

## Command arguments

It is very often that the script has to receive user inputs from command arguments. In a bash script, command arguments are stored in a set of special variables.  Ways to retrieve the values stored in those special variables are given below:

- __Name of the command (`$0`)__: This value is identical to the name of the script itself and can be retrieved from `$0`. It is useful when, for example, printing an online instruction of using the script like line 9 in the example script. 

  ```bash
  echo "usage: $0 uid1 uid2 uid3 ..." 
  ```

- __Individual command argument (`$n`)__: Command argument is accessible via `$n` where `n` refers to the n-th argument. For example, one uses `$2` to get the value of the second argument.

- __Total number of specified arguments (`$#`)__: The total number of specified command arguments is stored in a special variable called `$#`.  In the example script, we use it to check whether the user provides at-least one user id for the script to process.  It is on line 8.

  ```bash
  if [ $# -lt 1 ]; then
      ... skipped ...
  ```

- __Full list of arguments (`$@`)__: If the full list of command arguments is our interest, it is stored in the variable `$@`. On line 29 of the example script, we retrieve the entire list of the command arguments and assign it to a new variable called `ulistToCheck`.

  ```bash
  ulistToCheck=$@
  ```
