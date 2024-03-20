## Project on makefile

### What is a makefile and what does it do?
A makefile is used to compile and manage a set of source code applications and files. It helps breakdown large programs into smaller chunks since you can manage various parts of the codes independently.

### Terminologies of a makefile
- ***target*** function name
> compile_file:
- ***prerequsites*** / ***dependencies*** - follow the target, usually a file name
- ***recipe*** -
- ***rule*** - target, prerequisites and recipes together.

### How to create variables?
You can use **=**:
> C = gcc

Note: when you try to resign the variable you will run into an infinte loop. Use:

**:=** to avoid this

### Patterns to use in makefiles
- **#** - used to write comments.
- **%** - can matc any target name.
- **$<** - patterned to match prerequisites.
- **$@** - matches the target.
- **$&lt;** -

### How to run many targets
