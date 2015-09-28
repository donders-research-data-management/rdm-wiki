# Exercise: Changing the Path

## Task

*OK future neck-beards. We're going to create a script, set it as executable (make it so we can run it), and put it on the path

1. Make a directory called `~/Scripts`. If you can't remember this command, google for it.

   Hint: Remember that `~` refers to your home directory.
   
2. make a text file that contains the following lines

```bash
#!/bin/bash
echo "Hello Mother"
```

3.  Save this file as `~/Scripts/myScript.sh`

4. Set the script as executable with

```bash
$ chmod +x ~/Scripts/script.sh
```

5. Run the script using the relative path and then then by using the absolute path. Raise your hand if you don't understand this instruction. 

6. Now add `~/Scripts` to your path.

   Hint: Remember that you only need to add directories to your path, not files. BASH will search all the directories on your path.

7. See that you can run the script just by typing the name of it now! WOW!!
