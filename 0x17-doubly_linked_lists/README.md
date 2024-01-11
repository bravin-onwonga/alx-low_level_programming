## Task on doubly linked lists

### What are doubly linked lists?
- Almost similar to singly linked list excepts that you can traverse it ```forward``` and ```backward```
- This is possible since doubly linked list contain pointer to the ```previous node``` and the ```next node```, unlike ```singly linked list``` which only contain a pointer to the next node in each node.

### Where are doubly linked list used?
- Doubly linked lists are used in web browsers for backward and forward navigation of web pages.
- By various operations for undo and redo operations.
- Used in the OS by thread scheduler to keep track of processes that execute at that time.
- LRU (Least) and MRU(Most Recently Used) cache are constructed using doubly linked lists

### Files in this project:

Filename | Description
-------- | -----------
[lists.h](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/0-print_dlistint.c) | Header file contain all our prototypes
(0-print_dlistint.c)[] | Prints all the elements of a dlistint_t list.
