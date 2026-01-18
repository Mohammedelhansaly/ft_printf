# ft_printf

## Introduction

`ft_printf` is a custom implementation of the standard C library `printf` function. It replicates `printf`’s core capabilities, providing formatted output to the standard output stream. This project serves as an educational exercise in parsing format strings, handling variadic arguments, and managing string and memory operations in C.

## Features

- Supports standard format specifiers such as `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`
- Handles variadic function arguments
- Implements output conversion and field formatting
- Custom error handling for unsupported formats
- Modular and well-structured C codebase
- Open and extensible for adding new specifiers

## Requirements

- **Operating System:** Unix-like (Linux, macOS)
- **Compiler:** GCC or Clang (C99 compatible)
- **Libraries:** Standard C Library (libc)
- **Tools:** `make` for building the project

## Installation

To install and build `ft_printf`:

1. Clone the repository:
    ```bash
    git clone https://github.com/Mohammedelhansaly/ft_printf.git
    cd ft_printf
    ```

2. Compile the library using `make`:
    ```bash
    make
    ```

3. The output library (`libftprintf.a`) will be created in the project directory.

## Usage

To use `ft_printf` in your C project:

1. Include the header in your source file:
    ```c
    #include "ft_printf.h"
    ```

2. Link against the compiled library when building your project:
    ```bash
    gcc main.c -L. -lftprintf -o my_program
    ```

3. Example usage in code:
    ```c
    #include "ft_printf.h"

    int main(void) {
        ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
        return 0;
    }
    ```

## Configuration

`ft_printf` does not require runtime configuration. However, you may customize or extend functionality by editing the following:

- **Header File:** `ft_printf.h` – Add new function prototypes or macros.
- **Source Files:** Add or modify specifier handling in the implementation files.
- **Makefile:** Adjust compiler flags or library output settings as needed.

If you want to add support for new format specifiers or custom behavior, follow the code structure in the existing source files.

## Contributing

Contributions are welcome! To contribute to `ft_printf`:

- Fork the repository and create a feature branch.
- Make your changes, following the existing code style.
- Add tests for new features or bug fixes.
- Submit a pull request with a clear description of your changes.

**Best Practices:**

- Use clear and descriptive commit messages.
- Test changes thoroughly before submitting.
- Document any new features or specifiers you add.

---

For any questions or issues, please open an issue on the GitHub repository page. Thank you for using and contributing to `ft_printf`!
