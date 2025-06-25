# Libft - 42 School Library

A comprehensive C library containing reimplementations of standard library functions and additional utility functions for 42 School projects.

## 📋 Table of Contents

- [Overview](#overview)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
  - [Memory Functions](#memory-functions)
  - [String Functions](#string-functions)
  - [Character Functions](#character-functions)
  - [Conversion Functions](#conversion-functions)
  - [I/O Functions](#io-functions)
  - [Utility Functions](#utility-functions)
  - [Get Next Line](#get-next-line)
- [Makefile Targets](#makefile-targets)
- [Project Structure](#project-structure)
- [License](#license)

## Overview

Libft is a custom C library that provides reimplementations of standard C library functions along with additional utility functions. It's designed to be used across various 42 School projects and includes functions for memory manipulation, string handling, character operations, and more.

## Installation

1. Clone the repository:
```bash
git clone <repository-url>
cd libft
```

2. Compile the library:
```bash
make
```

This will create a static library `libft.a` that you can link with your projects.

## Usage

To use libft in your project:

1. Include the header file:
```c
#include "libft.h"
```

2. Compile your program with the library:
```bash
gcc your_program.c -L. -lft -I includes/
```

## Functions

### Memory Functions

| Function | Description |
|----------|-------------|
| `ft_bzero` | Zeroes a memory area |
| `ft_bzero_uint128` | Zeroes a 128-bit memory area |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_free_2d` | Frees a 2D array |
| `ft_memccpy` | Copies memory until character is found |
| `ft_memchr` | Locates character in memory |
| `ft_memcmp` | Compares memory areas |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Moves memory area |
| `ft_memset` | Fills memory with byte |
| `ft_memset_uint32` | Fills memory with 32-bit value |

### String Functions

| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates string length |
| `ft_strlen_2d` | Calculates length of 2D string array |
| `ft_strclen` | Calculates length until character |
| `ft_strchr` | Locates character in string |
| `ft_strrchr` | Locates last occurrence of character |
| `ft_strschr` | Searches for any character from set |
| `ft_strcmp` | Compares strings |
| `ft_strncmp` | Compares strings up to n characters |
| `ft_strnrcmp` | Reverse string comparison |
| `ft_strlcpy` | Safe string copy |
| `ft_strlcat` | Safe string concatenation |
| `ft_strnstr` | Locates substring |
| `ft_strcpy` | Copies string |
| `ft_strccpy` | Copies string until character |
| `ft_strdup` | Duplicates string |
| `ft_strndup` | Duplicates string up to n characters |
| `ft_strcdup` | Duplicates string until character |
| `ft_substr` | Extracts substring |
| `ft_strjoin` | Joins strings |
| `ft_strtrim` | Trims string of specified characters |
| `ft_strctrim` | Trims string until character |
| `ft_split` | Splits string by delimiter |
| `ft_strmapi` | Applies function to string characters |
| `ft_strcreplace` | Replaces character in string |
| `ft_strlengthen` | Extends string with padding |
| `ft_replace_string` | Replaces string pointer |
| `ft_tolower_string` | Converts string to lowercase |

### Character Functions

| Function | Description |
|----------|-------------|
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isdigit` | Checks if character is digit |
| `ft_isprint` | Checks if character is printable |
| `ft_isspace` | Checks if character is whitespace |
| `ft_is_number` | Checks if string contains only digits |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

### Conversion Functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |
| `ft_atol` | Converts string to long |
| `ft_atoul` | Converts string to unsigned long |
| `ft_itoa` | Converts integer to string |
| `ft_dtoa` | Converts long long to string |
| `ft_udtoa` | Converts unsigned long long to string |
| `ft_int2hex` | Converts integer to hexadecimal string |
| `ft_strtol` | Converts string to long with base |
| `ft_abs` | Returns absolute value |

### I/O Functions

| Function | Description |
|----------|-------------|
| `ft_putchar` | Outputs character |
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr` | Outputs string |
| `ft_putnstr` | Outputs n characters of string |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl` | Outputs string with newline |
| `ft_putendl_fd` | Outputs string with newline to file descriptor |
| `ft_putnbr_fd` | Outputs number to file descriptor |

### Utility Functions

| Function | Description |
|----------|-------------|
| `ft_swap` | Swaps two values |
| `ft_tmp` | Temporary value holder |
| `ft_max_value` | Returns maximum of two values |
| `ft_min_value` | Returns minimum of two values |
| `ft_regex` | Simple regex matching |
| `ft_skip_digit` | Skips digits in string |
| `ft_ether_aton` | Converts ethernet address string to binary |
| `ft_ether_ntoa` | Converts binary ethernet address to string |

### Get Next Line

The library includes a `get_next_line` function for reading lines from file descriptors:

```c
int get_next_line(int fd, char **line, char *remainder, long read_length);
```

## Makefile Targets

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and library
- `make re` - Recompiles the library
- `make debug` - Compiles with debug flags

## Project Structure

```
libft/
├── includes/          # Header files
│   ├── libft.h       # Main library header
│   ├── get_next_line.h
│   └── ft_printf.h
├── src/              # Source files
│   ├── libc/         # Standard library reimplementations
│   ├── ft_printf/    # Printf implementation
│   └── *.c          # Additional utility functions
├── Makefile          # Build configuration
└── README.md         # This file
```

## License

This project is part of the 42 school curriculum and is intended for educational purposes.