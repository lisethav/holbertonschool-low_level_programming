# **# **0x15. C - File I/O****
File Operations
In C, you can perform four major operations on files, either text or binary:

1. Creating a new file
2. Opening an existing file
3. Closing a file
4. Reading from and writing information to a file

## **✨ Requirements**
### General 
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- Code should use the Betty style. It will be checked using [betty-style.pl] and [betty-doc.pl]
- No more than 5 functions per file.
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
- Allowed syscalls: read, write, open, close
- The prototypes of all your functions and the prototype of the function. [_putchar] should be included in your header file called lists.h.
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...


## ✨ **Tasks**
- #### 0. Tread lightly, she is near
Function that reads a text file and prints it to the POSIX standard output.
**Prototype:** ```ssize_t read_textfile(const char *filename, size_t letters);```
**For example:**
- **Text - ```Requiescat```**
```
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.
```
- **Input ```main.c```** 
```sh
int main(int ac, char **av) {
    ssize_t n;

    if (ac != 2) {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
```
- **Output - ```./out Requiescat```** 
```
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
```
- #### 1. Under the snow
Function that creates a file.
**Prototype:** ```int create_file(const char *filename, char *text_content);``` 
- #### 2. Speak gently, she can hear
Function that appends text at the end of a file.
**Prototype:** ```int append_text_to_file(const char *filename, char *text_content);``` 
- #### 3. cp
Program that copies the content of a file to another file.
**Prototype:** ```listint_t *add_nodeint_end(listint_t **head, const int n);``` 

## ✨  Links

Access to task functions

| Task | Access|
| ------ | ------ |
| 0| [0-read_textfile.c] |
| 1 | [1-create_file.c] |
| 2 | [2-append_text_to_file.c] |
| 3 | [3-cp.c] |

## License

**Free Software, Hell Yeah!**
### Find me
[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Lisethav55)
[![N|Solid](https://i.postimg.cc/qBNpwbw3/pngegg-3.png)](https://www.linkedin.com/in/liseth-arias/)


[//]: # (Here are the links)

   [0-read_textfile.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x15-file_io/0-read_textfile.c>
   [1-create_file.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x15-file_io/1-create_file.c>
   [2-append_text_to_file.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x15-file_io/2-append_text_to_file.c>
   [3-cp.c]: <https://github.com/lisethav/holbertonschool-low_level_programming/blob/main/0x15-file_io/3-cp.c>

   [betty-style.pl]: <https://github.com/holbertonschool/Betty/blob/master/betty-style.pl>
   [betty-doc.pl]: <https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl>
   [_putchar]: <https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c>