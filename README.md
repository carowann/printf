# ft_printf

A custom implementation of the printf function in C.

## Description

This project recreates the behavior of the standard `printf` function, supporting the following format specifiers:
- `%c` - Character
- `%s` - String
- `%p` - Pointer address
- `%d` / `%i` - Signed integer
- `%u` - Unsigned integer
- `%x` / `%X` - Hexadecimal (lowercase/uppercase)
- `%%` - Literal percent sign

## Installation

```bash
git clone --recursive git@github.com:carowann/printf.git
cd printf
make
```

**Alternative installation:**
```bash
git clone git@github.com:carowann/printf.git
cd printf
git submodule update --init --recursive
make
```

## Usage

Include the header file in your project:
```c
#include "ft_printf.h"
```

Use it like the standard printf:
```c
ft_printf("Hello %s! Number: %d\n", "World", 42);
```

## Project Structure

- `ft_printf.c` - Main implementation
- `ft_printf.h` - Header file
- `Libft/` - Custom C library (submodule)
- `Makefile` - Compilation rules

## 42 School Project

This project is part of the 42 School curriculum, focusing on understanding variadic functions and recreating standard library functions.
