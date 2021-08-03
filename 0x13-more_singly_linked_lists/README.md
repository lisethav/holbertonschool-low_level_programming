# **0x13. C - More singly linked lists**
## **Requirements**
### ✨ General 
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- Code should use the Betty style. It will be checked using [betty-style.pl] and [betty-doc.pl]
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- The prototypes of all your functions and the prototype of the function [_putchar] should be included in your header file called lists.h


## ✨ **Tasks**
- ### 0. Print list
Function that prints all the elements of a listint_t list <br>
**Prototype:** ```size_t print_listint(const listint_t *h);``` 
- ### 1. List length
Function that returns the number of elements in a linked listint_t list.
**Prototype:** ```size_t listint_len(const listint_t *h);``` 
- ### 2. Add node
Function that adds a new node at the beginning of a listint_t list.
**Prototype:** ```listint_t *add_nodeint(listint_t **head, const int n);``` 
- ### 3. Add node at the end
Function that adds a new node at the end of a listint_t list
**Prototype:** ```listint_t *add_nodeint_end(listint_t **head, const int n);``` 
- ### 4. Free list
Function that frees a listint_t list.
**Prototype:** ```void free_listint(listint_t *head);``` 
- ### 5. Free
Function that frees a listint_t list.
**Prototype:** ```void free_listint2(listint_t **head);``` 
- ### 6. Pop
Function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
**Prototype:** ```int pop_listint(listint_t **head);``` 
- ### 7. Get node at index
Function that returns the nth node of a listint_t linked list.
**Prototype:** ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);``` 
- ### 8. Sum list
Function that returns the sum of all the data (n) of a listint_t linked list.
**Prototype:** ```int sum_listint(listint_t *head);``` 
- ### 9. Insert
Function that inserts a new node at a given position.
**Prototype:** ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);``` 
- ### 10. Delete at index
Function that deletes the node at index index of a listint_t linked list.
**Prototype:** ```int delete_nodeint_at_index(listint_t **head, unsigned int index);``` 

## ✨  Links

Access to task functions

| Task | Access|
| ------ | ------ |
| 0| [0-print_listint.c] |
| 1 | [1-listint_len.c] |
| 2 | [2-add_nodeint.c] |
| 3 | [3-add_nodeint_end.c] |
| 4 | [4-free_listint.c] |
| 5 | [5-free_listint2.c]|
| 6 | [6-pop_listint.c] |
| 7 | [7-get_nodeint.c] |
| 8 | [8-sum_listint.c]|
| 9 | [9-insert_nodeint.c] |
| 10 | [10-delete_nodeint.c]|
## License

**Free Software, Hell Yeah!**
### Find me
[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Lisethav55)
[![N|Solid](https://i.postimg.cc/qBNpwbw3/pngegg-3.png)](https://www.linkedin.com/in/liseth-arias/)


[//]: # (Here are the links)

   [0-print_listint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c>
   [1-listint_len.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c>
   [2-add_nodeint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c>
   [3-add_nodeint_end.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c>
   [4-free_listint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c>
   [5-free_listint2.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c>
   [6-pop_listint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/6-pop_listint.c>
   [7-get_nodeint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/7-get_nodeint.c>
   [8-sum_listint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/8-sum_listint.c>
   [9-insert_nodeint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/9-insert_nodeint.c>
   [10-delete_nodeint.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/10-delete_nodeint.c>
   [betty-style.pl]: <https://github.com/holbertonschool/Betty/blob/master/betty-style.pl>
   [betty-doc.pl]: <https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl>
   [_putchar]: <https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c>