
# LIBFT
| 42 Project| Description |
| ----------- | ----------- |
| <a href=""> <img src="https://github.com/0bvim/42-project-badges/blob/main/badges/libftm.png?raw=true" /></a> | This project consist to program a library in C. This library have a lot of general purpose functions that will rely on in more complex programs. This project allows us to understand the way in which these functions They work, how to implement them and learn to use them.|

## Mandatory functions
### Libc functions
In this part it is proposed to redo some functions of the libc. The functions to be implemented will have the same prototypes and will implement the same behaviors as the original functions. They must be as described in the man. The only difference will be the nomenclature.
They will begin with the prefix “ft_”. For example, strlen will become ft_strlen.

| Libc functions| --- |
| ----------- | ----------- |
|             |             |
| ft_isalpha  | ft_toupper  |
| ft_isdigit  | ft_tolower  |
| ft_isalnum  | ft_strchr   |
| ft_isascii  | ft_strrchr  |
| ft_isprint  | ft_strncmp  |
| ft_strlen   | ft_memchr   |
| ft_memset   | ft_memcmp   |
| ft_bzero    | ft_strnstr  |
| ft_memcpy   | ft_atoi     |
| ft_memmove  | ft_strdup   |
| ft_strlcpy  | ft_calloc   |
| ft_strlcat  |             |

### Additional functions

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Bonus functions
In this part, functions are implemented to operate with linked lists:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Functions summary

| Libc Part1| Libc Part2 | Additional functions | linked list functions |
| ----------- | ----------- | -----------    | -----------    |
|             |             |                ||
| ft_isalpha  | ft_toupper  | ft_substr      |ft_lstnew|
| ft_isdigit  | ft_tolower  | ft_strjoin     |ft_lstadd_front|
| ft_isalnum  | ft_strchr   | ft_strtrim     |ft_lstsize|
| ft_isascii  | ft_strrchr  | ft_split       |ft_lstlast|
| ft_isprint  | ft_strncmp  | ft_itoa        |ft_lstadd_back|
| ft_strlen   | ft_memchr   | ft_strmapi     |ft_lstdelone|
| ft_memset   | ft_memcmp   | ft_striteri    |ft_lstclear|
| ft_bzero    | ft_strnstr  | ft_putchar_fd  |ft_lstiter|
| ft_memcpy   | ft_atoi     | ft_putstr_fd   |ft_lstmap|
| ft_memmove  | ft_strdup   | ft_putendl_fd  ||
| ft_strlcpy  | ft_calloc   | ft_putnbr_fd   ||
| ft_strlcat  |             |    ||
