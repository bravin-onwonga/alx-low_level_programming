## Project on dynamic libraries

### What are dynamic libraries
- To understand dynamic libraries we must first understand ```static libraries```:


### Commands to create a dynamic library
- ```gcc -c -fPIC *.c``` - in this command the ```-c``` creates object files for all ```.c``` files in the current directory as the ```-fPIC``` make the code position independent.
- ```gcc -shared -o libdynamic.so *.o``` - this command creates your shared library.
- ```nm -D libdynamic.so``` - this command confirms your shared library had been created and lists the object files contained in it.
