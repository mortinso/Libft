<h1>
	<p align="center">Libft</p>
	<img align="right" alt="Final Grade: 125/ 100%" src="https://img.shields.io/badge/-%20125%20%2F%20100-success">
</h1>
<p align="center">
	<b><i>Your very first own library</b></i>
</p>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mortinso/Libft">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/mortinso/Libft">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/mortinso/Libft">
</p>

<details>
	<summary><h2>Table of Contents</h2></summary>

<table>
<tr>
<td>

1. [Overview](https://github.com/mortinso/libft/#overview) 
2. [Installation](https://github.com/mortinso/libft/#installation)

   2.1. [Requirements](https://github.com/mortinso/libft/#requirements)

   2.2. [Build Instructions](https://github.com/mortinso/libft/#build-instructions)

   2.3. [Adding it to your project](https://github.com/mortinso/libft/#adding-it-to-your-project)
3. [Usage](https://github.com/mortinso/libft/#usage)

   3.1. [Makefile Commands](https://github.com/mortinso/libft/#makefile-commands)

   3.2. [`t_list` Struct](https://github.com/mortinso/libft/#t_list-struct)

   3.3. [Libft Functions](https://github.com/mortinso/libft/#libft-functions)

   3.4. [Extra Functions](https://github.com/mortinso/libft/#extra-functions)
</td>
</tr>
</table>
</details>


## Overview
This project entailed developing a C library comprising numerous general-purpose functions that would be useful for future 42 projects. Considering that the project subjects sometimes limit the functions a student is allowed to use, this proved extremely useful. We were encouraged to add more functions to the library throughout the course.

## Installation
### Requirements
- OS: Linux

### Build Instructions
1. Clone the repository:
   ```bash
   git clone https://githubom/mortinso/Libft.git
   ```
2. Compile the project:
   ```bash
   cd Libft
   make
   ```
3. Install it to your machine (*Optional*) :
	```bash
	sudo cp libft.a /usr/local/lib
	sudo cp libft.h /usr/local/include
	sudo ldconfig
	```

### Adding it to your projects
1. Include the header file in your code:
	- If installed: `#include <libft.h>`
	- Otherwise: `#include "<PATH>/libft.h"`

2. Link it at compilation time: 
	- If installed `gcc <SRCS> -lft`
	- Otherwise `gcc <SRCS> <PATH>/libft.a`

## Usage

### Makefile Commands

`clean`  - Removes the object files created at build time.

`fclean` - Removes the archive file from the `Libft` directory.

`re`     - Removes both the object and archive files, before re-compiling the project

### `t_list` Struct
The `t_list` struct is essentially a linked list. It has its own [functions](https://mortinso/libft/#libft-functions).
<img width="537" height="112" alt="Struct" src="https://github.com/user-attachments/assets/ebfbdd57-4126-4bcd-867e-ae946860101a" />


### Libft Functions
<details><summary>Libc Functions</summary>
<br>
<table>
	<tr>
		<td>ft_atoi</td>
		<td><code>int ft_atoi(const char *s)</code></td>
		<td>Returns the initial portion of the string <code>s</code> as an integer.</td>
	</tr>
 	<tr>
		<td>ft_bzero</td>
		<td><code>void ft_bzero(void *s, size_t n)</code></td>
		<td>Erases the data in the first <code>n</code> bytes of the memory starting at the location pointed to by <code>s</code>.</td>
	</tr>
	<tr>
		<td>ft_calloc</td>
		<td><code>void *ft_calloc(size_t n, size_t size)</code></td>
		<td>Allocates memory for an array of <code>n</code> elements of <code>size</code> bytes each, and sets their memory to zero. Returns a pointer to the allocated memory.</td>
	</tr>
	<tr>
		<td>ft_isalnum</td>
		<td><code>int ft_isalnum(int c)</code></td>
		<td>Checks if it was given an alphanumeric character.</td>
	</tr>
	<tr>
		<td>ft_isalpha</td>
		<td><code>int ft_isalpha(int c)</code></td>
		<td>Checks if it was given an alphabetic character.</td>
	</tr>
	<tr>
		<td>ft_isascii</td>
		<td><code>int ft_isascii(int c)</code></td>
		<td>Checks if it was given a char value that fits in the ASCII character set.</td>
	</tr>
	<tr>
		<td>ft_isdigit</td>
		<td><code>int ft_isdigit(int c)</code></td>
		<td>Checks if it was given a digit.</td>
	</tr>
	<tr>
		<td>ft_isprint</td>
		<td><code>int ft_isprint(int c)</code></td>
		<td>Checks if it was given a printable character.</td>
	</tr>
	<tr>
		<td>ft_memchr</td>
		<td><code>void *ft_memchr(const void *s, int c, size_t n)</code></td>
		<td>Scans the initial <code>n<code> bytes of the memory area pointed to by <code>s<code> for the first instance of <code>c<code>. Returns 0 if <code>c<code> isn't found.</td>
	</tr>
	<tr>
		<td>ft_memcmp</td>
		<td><code>int ft_memcmp(const void *s1, const void *s2, size_t n)</code></td>
		<td>Compares the first <code>n<code> bytes of the memory areas <code>s1<code> and <code>s2<code>.</td>
	</tr>
	<tr>
		<td>ft_memcpy</td>
		<td><code>void *ft_memcpy(void *dest, const void *src, size_t n)</code></td>
		<td>Copies <code>n<code> bytes from memory area <code>src<code> to memory area <code>dest<code>. The memory areas must not overlap.</td>
	</tr>
	<tr>
		<td>ft_memmove</td>
		<td><code>void *ft_memmove(void *dest, const void *src, size_t n)</code></td>
		<td>Copies <code>n<code> bytes from memory area <code>src<code> to memory area <code>dest<code>.</td>
	</tr>
	<tr>
		<td>ft_memset</td>
		<td><code>void *ft_memset(void *s, int c, size_t n)</code></td>
		<td>Fills the first <code>n<code> bytes of the memory area <code>s<code> with <code>c<code>.</td>
	</tr>
	<tr>
		<td>ft_strchr</td>
		<td><code>char *ft_strchr(const char *s, int c)</code></td>
		<td>Returns a pointer to the first occurrence of the character <code>c<code> in the string <code>s<code>.</td>
	</tr>
	<tr>
		<td>ft_strdup</td>
		<td><code>char *ft_strdup(const char *s)</code></td>
		<td>Returns a pointer to a new string duplicated from the string <code>s<code>.</td>
	</tr>
	<tr>
		<td>ft_strlcat</td>
		<td><code>unsigned int ft_strlcat(char *dest, const char *src, size_t size)</code></td>
		<td>Appends the string <code>src<code> to the end of <code>dest<code>. It will append at most <code>size - ft_strlen(dest) - 1 bytes<code>.</td>
	</tr>
	<tr>
		<td>ft_strlcpy</td>
		<td><code>unsigned int ft_strlcpy(char *dest, const char *src, size_t size)</code></td>
		<td>Copies up to <code>size - 1<code> characters from the string <code>src<code> to <code>dest<code>.</td>
	</tr>
	<tr>
		<td>ft_strlen</td>
		<td><code>size_t ft_strlen(const char *s)</code></td>
		<td>Returns the number of characters in <code>s<code>.</td>
	</tr>
	<tr>
		<td>ft_strncmp</td>
		<td><code>int ft_strncmp(const char *s1, const char *s2, size_t n)</code></td>
		<td>Compares at most the first <code>n<code> bytes of <code>s1<code> and <code>s2<code>.</td>
	</tr>
	<tr>
		<td>ft_strnstr</td>
		<td><code>char *ft_strnstr(const char *big, const char *lil, size_t n)</code></td>
		<td>Returns the first occurrence of the string <code>lil<code> in the string <code>big<code>. No more than <code>n<code> characters are searched. Returns <code>0<code> if <code>lil<code> isn't found.</td>
	</tr>
	<tr>
		<td>ft_strrchr</td>
		<td><code>char *ft_strrchr(const char *s, int c)</code></td>
		<td>Returns a pointer to the last occurrence of the character <code>c<code> in the string <code>s<code>. Returns <code>NULL<code> if <code>c<code> is not found.</td>
	</tr>
	<tr>
		<td>ft_tolower</td>
		<td><code>int ft_tolower(int c)</code></td>
		<td>Converts the letter <code>c<code> to lowercase, if possible.</td>
	</tr>
	<tr>
		<td>ft_toupper</td>
		<td><code>int ft_toupper(int c)</code></td>
		<td>Converts the letter <code>c<code> to uppercase, if possible.</td>
	</tr>
</table>
</details>

<details><summary>Additional Functions</summary>
<br>
<table>
	<tr>
		<td>ft_itoa </td>
		<td><code>char *ft_itoa(int n)</code></td>
		<td>Returns a string representing the integer received as an argument.</td>
	</tr>
 	<tr>
		<td>ft_putchar_fd</td>
		<td><code>void ft_putchar_fd(char c, int fd)</code></td>
		<td>Outputs the character <code>c</code> to the file descriptor <code>fd</code>.</td>
	</tr>
	<tr>
		<td>ft_putendl_fd</td>
		<td><code>void ft_putendl_fd(char *s, int fd)</code></td>
		<td>Outputs the string <code>s</code> to the file descriptor <code>fd</code> followed by a newline.</td>
	</tr>
	<tr>
		<td>ft_putnbr_fd</td>
		<td><code>void ft_putnbr_fd(int n, int fd)</code></td>
		<td>Outputs the integer <code>n</code> to the file descriptor <code>fd</code>.</td>
	</tr>
	<tr>
		<td>ft_putstr_fd</td>
		<td><code>void ft_putstr_fd(char *s, int fd)</code></td>
		<td>Outputs the string <code>s</code> to the file descriptor <code>fd</code>.</td>
	</tr>
	<tr>
		<td>ft_split</td>
		<td><code>char** ft_split(char const *s, char c)</code></td>
		<td>Returns an array of strings obtained by splitting <code>s</code> using the character <code>c</code> as a delimiter.</td>
	</tr>
	<tr>
		<td>ft_striteri</td>
		<td><code>void ft_striteri(char *s, void (*f)(unsigned int, char*))</code></td>
		<td>Applies the function <code>'f'</code> to each character of the string <code>s</code>.</td>
	</tr>
	<tr>
		<td>ft_strjoin</td>
		<td><code>char *ft_strjoin(const char *s1, const char *s2)</code></td>
		<td>Returns a new string, resulting of the concatenation of <code>s1</code> and <code>s2</code>.</td>
	</tr>
	<tr>
		<td>ft_strmapi</td>
		<td><code>char *ft_strmapi(char const *s, char (*f)(unsigned int, char))</code></td>
		<td>Returns a new string resulting from the successive application of <code>'f'</code> to each character of the string <code>s</code>.</td>
	</tr>
	<tr>
		<td>ft_strtrim</td>
		<td><code>char *ft_strtrim(const char *s, const char *set)</code></td>
		<td>Returns a copy of <code>str</code> with the characters specified in <code>set</code> removed from the beginning and the end of the string.</td>
	</tr>
	<tr>
		<td>ft_substr</td>
		<td><code>char *ft_substr(char const *str, unsigned int c, size_t n)</code></td>
		<td>Returns an allocated substring from the string <code>s</code>, beginning at index <code>c</code> and being no longer than <code>n</code>.</td>
	</tr>
</table>
</details>

<details><summary><code>t_list</code> Functions</summary>
<br>
<table>
	<tr>
		<td>ft_lstadd_back </td>
		<td><code>void ft_lstadd_back(t_list **lst, t_list *new)</code></td>
		<td>Adds the node <code>new</code> at the end of the list <code>lst</code>.</td>
	</tr>
 	<tr>
		<td>ft_lstadd_front</td>
		<td><code>void ft_lstadd_front(t_list **lst, t_list *new)</code></td>
		<td>Adds the node <code>new</code> at the beginning of the list <code>lst</code>.</td>
	</tr>
	<tr>
		<td>ft_lstclear</td>
		<td><code>void ft_lstclear(t_list **lst, void (*del)(void*))</code></td>
		<td>Deletes and frees the given node and all of its successors using the functions <code>'del'</code> and <code>free</code>.</td>
	</tr>
	<tr>
		<td>ft_lstdelone</td>
		<td><code>void ft_lstdelone(t_list *lst, void (*del)(void*))</code></td>
		<td>Deletes and frees the given node using the functions <code>'del'</code> and <code>free</code>.</td>
	</tr>
	<tr>
		<td>ft_lstiter</td>
		<td><code>void ft_lstiter(t_list *lst, void (*f)(void *))</code></td>
		<td>Applies the function <code>'f'</code> to the content of each node.</td>
	</tr>
	<tr>
		<td>ft_lstlast</td>
		<td><code>t_list *ft_lstlast(t_list *lst)</code></td>
		<td>Returns the last node of the list <code>lst</code>.</td>
	</tr>
	<tr>
		<td>ft_lstmap</td>
		<td><code>t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *))</code></td>
		<td>Creates a new list resulting from the application of the function <code>'f'</code> to each node of the list <code>lst</code>.</td>
	</tr>
	<tr>
		<td>ft_lstnew</td>
		<td><code>t_list *ft_lstnew(void *content)</code></td>
		<td>Returns a new node with <code>content</code> as its content.</td>
	</tr>
	<tr>
		<td>ft_lstsize</td>
		<td><code>int ft_lstsize(t_list *lst)</code></td>
		<td>Returns the number of nodes in a list.</td>
	</tr>
</table>
</details>

### Extra Functions
[ft_printf](https://github.com/mortinso/ft_printf/)

[get_next_line](https://github.com/mortinso/get_next_line/)
