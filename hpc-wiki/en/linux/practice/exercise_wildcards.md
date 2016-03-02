# Using Wildcards
## Background
A handy way to refer to many items with a similar pattern is with _wildcards_. These were described so far in the lectures, but mainly consist of the characters:

	* Matches everything 
	? matches any single character
	[] matches any of the letters or numbers, or a range of letters or numbers inside the brackets. A range of characters is specified using the `-` character. Some legal patterns would be [0-9], [5-8], [A-Z], [a-z], [a-Z], or [ady1-3]. 
	There are examples below to clarify usage.

With BASH, the shell itself expands the wildcards. This means that the commands usually don't see these special characters because BASH has already expanded them before the command is run. Try to get a feel for wild cards with the following examples

```bash
$ ls *recon-all.log
gcutError_recon-all.log  s10_recon-all.log  s1_recon-all.log  s6_recon-all.log	s8_recon-all.log

$ ls gcut*
gcutError_recon-all.log

$ ls s[0-9]*
s10_recon-all.log  s1_recon-all.log  s6_recon-all.log  s8_recon-all.log

$ ls s[0-9]_*
s1_recon-all.log  s6_recon-all.log  s8_recon-all.log

$ ls s[0-9][0-9]_*
s10_recon-all.log

$ ls [a-z][0-9][0-9]???con-all.log
s10_recon-all.log

$ ls s?_recon-all.log
s1_recon-all.log  s6_recon-all.log  s8_recon-all.log

```

Do you understand all of the patterns and how they returned what they did? 

The [ ] wildcard has the most complex syntax because it is more flexible. When BASH sees the [ ] characters, it will try to match any of the characters it sees inside them. For example:

```bash
$ ls * #Matches all strings
4file afile bfile cfile
$ ls [a-c4]* #Matches all strings starting with any of a range of letters from a to c, or the number 4.
4file afile bfile cfile
$ ls [4a-b]* #Matches all strings starting with any of a range of letters from a to b, or the number 4
4file afile bfile
$ ls [abc4]* #Matches all strings starting with a b c or 4. This is the same as [a-c4] or [4a-c]
```

## Your Task

1. Find a search pattern that will return all files ending in _.txt_.
2. Find a search pattern that will return all files starting in _s_ and ending in _.log_.
3. Find a search pattern that will return all files only starting with two numbers.
4. Find a search pattern that will return all files only starting with one number.


## Solution

_Placeholder_