*This project has been created as part of the 42 curriculum by <vicarauj>.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build your own C static library, `libft.a`, containing general-purpose functions that will be reused in future projects of the curriculum.

The project is divided into three parts:

1. **Libc functions** – reimplementation of standard C library functions, with the same prototypes and behaviour as the originals but prefixed with `ft_`.
2. **Additional functions** – utility functions that are either not in the libc or exist in a different form (string manipulation, conversions and file descriptor output).
3. **Linked list functions** – a set of functions to manipulate singly linked lists using the `t_list` structure.

### Library overview

#### Part 1 – Libc functions

| Category | Functions |
|---|---|
| Character classification / conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

#### Part 2 – Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string (allocated with `malloc`). |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Removes characters of a given set from the beginning and end of a string. |
| `ft_split` | Splits a string by a delimiter character into a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer to a string (handles negative numbers). |
| `ft_strmapi` | Applies a function to each character (with its index) and builds a new string. |
| `ft_striteri` | Applies a function to each character (by address, with its index) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

#### Part 3 – Linked list

The library defines the following structure in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (using `del`) and the node itself. |
| `ft_lstclear` | Frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

### Technical constraints

- Written in C, following the 42 Norm.
- Compiled with `cc -Wall -Wextra -Werror`.
- No global variables; helper functions are declared `static`.
- Library created with `ar` (`libtool` is forbidden).
- No memory leaks and no unexpected crashes (except undefined behaviour).

## Instructions

### Compilation

At the root of the repository:

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

### Usage

Include the header in your code and link against the library:

```c
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello, libft!", 1);
	return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o test
./test
```

### Repository structure

```
.
├── Makefile
├── libft.h
├── README.md
└── ft_*.c
```

## Resources

### References

- `man` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, `man 3 calloc`, ...).
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) – Kernighan & Ritchie.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html).
- [`ar` manual](https://man7.org/linux/man-pages/man1/ar.1.html).
- 42 Norm (available on the intranet).

### Use of AI

- This README's structure was drafted with the help of an AI assistant, based on the subject's README requirements, and then reviewed by the author(s).
- Understanding Concepts and Explanations of the expected behavior of some libc functions and their edge cases.
- Reviewing of the code.
