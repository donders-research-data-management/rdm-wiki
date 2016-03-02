# Using Wildcards
## Background
A handy way to refer to many items with a similar pattern is with _wildcards_. These were described so far in the lectures, but mainly consist of the characters:

	\* Matches everything 
	? matches any single character
	[] matches a range of letters or numbers, i.e [0-9] or [A-Z] or [a-z], or [a-Z]
	
With BASH, the shell itself expands the wildcards, not the commands being run with them. This means that the commands never see these special characters because BASH has already expanded them before the command is run. Try to get a feel for wild cards with the following examples

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


Do you understand all of the patterns and how they returned what they did? Try to simplify your _for loop_ by using wildcards. Instead of writing out every item you want to iterate over, you can write one pattern using wildcards. For example

## Your Task

1. Find a search pattern that will return all files ending in _.txt_.
2. Find a search pattern that will return all files starting in _s_ and ending in _.log_.
3. Find a search pattern that will return all files only starting with two numbers.
4. Find a search pattern that will return all files only starting with one number.


## Solution

_Placeholder_
