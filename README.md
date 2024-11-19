# libft project
This project consist to program a library in C. This library have a lot of general purpose functions that will rely on in more complex programs.
This project allows us to understand the way in which these functions They work, how to implement them and learn to use them.

## Mandatory functions
### Libc functions
In this part it is proposed to redo some functions of the libc. The functions to be implemented will have the same prototypes and will implement the same behaviors as the original functions. They must be as described in the man. The only difference will be the nomenclature.
They will begin with the prefix “ft_”. For example, strlen will become ft_strlen.

| First     | Second     | Using malloc |
| -------- | -------- | ------------ |
| isalpha  | toupper  |  strdup |
| isdigit  | tolower  |  calloc |
| isalnum  | strchr   |
| isascii  | strrchr  |
| isprint  | strncmp  |
| strlen   | memchr   |
| memset   | memcmp   |
| bzero    | strnstr  |
| memcpy   | atoi     |
| memmove  |     |
| strlcpy  |    |
| strlcat  |    |

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
