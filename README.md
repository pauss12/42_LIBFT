FIRST PROJECT - 42 MADRID (LIBFT)

The goal of this project is to program a C library that copies that functionality of the C standard library.

SIMPLE FUNCTIONS:
  - ft_isalnum() => It checks for an alphanumeric character.
  - ft_isalpha() => It checks if is a letter from the alphabet.
  - ft_isascii() => It checks if the letter is within the ASCII characters.
  - ft_isdigit() => It checks if the parameter is between 'a' and 'z'
  - ft_isprint() => It checks if the letter is within the printable characters from ASCII.
  - ft_toupper() =>  It converts the char passed through arguments to uppercase.
  - ft_tolower() => It converts the char passed through arguments to lowercase.
  - ft_strlen() => It counts the number of characters that a string has.

CHAR:
 - ft_atoi() => Its main goal is to be able to transforme a string, to integer.
 - ft_substr() - returns a substring from a string.
 - ft_strjoin() - concatenates two strings
 - ft_strtrim() - trims the beginning and end of string with specific set of chars.
 - ft_split() - splits a string using a char as parameter.
 - ft_itoa() => It transforms a number into a string
 - ft_strmapi() => It applies a function to each character of a string.
 - ft_striteri() => It applies a function to each character of a string.
 - ft_strlcpy() => It copies a string to an specific size.
 - ft_strlcat() => It concatenate two string together to an specific size.
 - ft_strchr() => It locates character in string.
 - ft_strrchr() => It locates character in string.
 - ft_strncmp() => It compares two strings.
 - ft_strnstr() => It locates a substring in a string.

FILE`s FUNCTIONS:
  - ft_putchar_fd() - output a char to a file descriptor.
  - ft_putstr_fd() - output a string to a file descriptor.
  - ft_putendl_fd() - output a string to a file descriptor, followed by a new line.
  - ft_putnbr_fd() - output a number to a file descriptor.

MEMORY FUNCTIONS:
  - ft_memset() => It fills the memory with a constant byte.
  - ft_bzero() => It shall place n zero-valued bytes in the area pointed to by s
  - ft_calloc() => It allocates memory and sets its bytes' values to 0.
  - ft_memcpy() => It copies memory area.
  - ft_memmove() => It copies the memory area.
  - ft_strdup() => It creates a dupplicate for the string passed as parameter.
  - ft_memchr() => It scans the memory for a character.
  - ft_memcmp() => It compares two memory areas.

As extra functions, these are linked lists, which are data structures but whose main difference is that you have to reserve memory for them. We are going to work with a simple linked list, therefore the elements of that structure would be: "the content" and "a pointer to the next node":

  typedef struct t_list
  {
  	void			*content;
  	struct t_list	*next;
  }t_list;
  
  - ft_lstadd_back_bonus() => It adds an element at the end of a list
  - ft_lstadd_front_bonus() => It adds an element at the beginning of a list
  - ft_lstclear_bonus() => It deletes all the elements from a list and free the list
  - ft_lstiter_bonus() => It applies a function to all the elements from a list.
  - ft_lstlast_bonus() => It returns the last element of the list.
  - ft_lstmap_bonus() => It applies a function to each element of a list.
  - ft_lstnew_bonus() => It creates a new list element, a node.
  - ft_lstsize_bonus() => It returns how many elements you have in a list.

