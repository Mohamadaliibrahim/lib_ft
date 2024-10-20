
# Libft

## Overview

**Libft** is a custom C library developed as part of the 42 curriculum. It serves as a foundation for many other projects, providing essential functions that mimic the standard C library. The library includes implementations of various string manipulation, memory management, and other utility functions that are often used in C programming.

## Table of Contents

- [Getting Started](#getting-started)
- [Library Contents](#library-contents)
- [Usage](#usage)
- [Makefile](#makefile)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites

To compile and use `libft`, you need:
- A Unix-like operating system (Linux, macOS, etc.)
- `gcc` or another C compiler
- `make`

### Installation

Clone the repository to your local machine:

```bash
git clone git@github.com:Mohamadaliibrahim/lib_ft.git
```
Enter the file:
```bash
cd libft
```

### Building the Library

To compile the library, simply run:

```bash
make
```

This will generate the `libft.a` static library file, which you can link against in your projects.

## Library Contents

### Functions

The `libft` library includes the following categories of functions:

- **Memory Management:**
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
  - `ft_calloc`, `ft_malloc`, `ft_free`

- **String Manipulation:**
  - `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`
  - `ft_strnstr`, `ft_strncmp`, `ft_strdup`
  - `ft_strjoin`, `ft_strtrim`, `ft_split`

- **Character Checks and Manipulation:**
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_tolower`, `ft_toupper`

- **Conversion Functions:**
  - `ft_atoi`, `ft_itoa`

- **Linked List Management:**
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
  - `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

- **Other Utilities:**
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Usage

To use `libft` in your project, include the library header:

```c
#include "libft.h"
```

Compile your project by linking the `libft.a` file:

```bash
gcc -Wall -Wextra -Werror -o my_program my_program.c -L. -lft
```

## Makefile

The `Makefile` includes the following rules:

- `make` or `make all`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Cleans and recompiles the library.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please fork the repository and create a new branch for your feature or bug fix. Submit a pull request once your changes are ready.

1. Fork the project.
2. Create your feature branch: `git checkout -b feature/my-feature`
3. Commit your changes: `git commit -m 'Add some feature'`
4. Push to the branch: `git push origin feature/my-feature`
5. Open a pull request.


### Author

This project was developed by **mohamibr** as part of the 42 school curriculum.
