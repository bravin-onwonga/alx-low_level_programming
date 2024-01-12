## Task on doubly linked lists

### What are doubly linked lists?
- Almost similar to singly linked list excepts that you can traverse it ```forward``` and ```backward```
- This is possible since doubly linked list contain pointer to the ```previous node``` and the ```next node```, unlike ```singly linked list``` which only contain a pointer to the next node in each node.

### Structure of a doubly linked list

Head--->|NULL|(data)|Next|--->|Prev|(data)|Next|--->|Prev|(data)|NULL|

### Where are doubly linked list used?
- Doubly linked lists are used in web browsers for backward and forward navigation of web pages.
- By various operations for undo and redo operations.
- Used in the OS by thread scheduler to keep track of processes that execute at that time.
- LRU (Least) and MRU(Most Recently Used) cache are constructed using doubly linked lists

***Note***
```dlistint_t``` - doubly linked list

### Files in this project:

Filename | Description
-------- | -----------
[lists.h](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/0-print_dlistint.c) | Header file contain all our prototypes and structures use in this task.
[0-print_dlistint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/0-print_dlistint.c) | Prints all the elements of a ```dlistint_t``` list.
[1-dlistint_len.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/1-dlistint_len.c) | Returns the number of elements in a linked ```dlistint_t``` list.
[2-add_dnodeint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/2-add_dnodeint.c) | Adds a new node at the beginning of a ```dlistint_t``` list.
[3-add_dnodeint_end.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/3-add_dnodeint_end.c) | Adds a new node at the end of a ```dlistint_t``` list.
[4-free_dlistint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/4-free_dlistint.c) | Frees a ```dlistint_t``` list.
[5-get_dnodeint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/5-get_dnodeint.c) | Returns the nth node of a ```dlistint_t``` linked list.
[6-sum_dlistint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/6-sum_dlistint.c) | Returns the sum of all the data (n) of a ```dlistint_t``` linked list.
[7-insert_dnodeint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/7-insert_dnodeint.c) | Inserts a new node at a given position in a ```dlistint_t``` linked list.
[8-delete_dnodeint.c](https://github.com/bravin-onwonga/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/8-delete_dnodeint.c) | Deletes the node at index index of a ```dlistint_t``` linked list.
