# Arithmetic Addition in C

A modular C programming project that implements integer addition using a function-based architecture, validates user input, and verifies functionality through assertion-based testing.

## Overview

This project demonstrates the implementation of a basic arithmetic operation in C using a structured, modular approach. It separates the application entry point, business logic, header declarations, and test cases into individual source files.

The project is designed to practice fundamental programming concepts and encourage clean, maintainable, and testable code.

## Features

- **Modular Architecture** — Separates application logic, function implementation, and declarations.
- **Reusable Function** — Implements addition through a dedicated `Addition()` function.
- **Input Validation** — Checks whether user input is a valid integer.
- **Error Handling** — Reports invalid input and exits with a failure status.
- **Assertion-Based Testing** — Verifies addition with positive and negative integers.
- **Standard C Libraries** — Uses standard input/output and process exit-status functionality.

## Project Structure

```text
Arithematic/
├── Header/
│   └── Header.h
├── src/
│   ├── EntryPointFunction.c
│   └── MainFunction.c
├── Test/
│   └── AssertFunction.c
├── Doc/
└── Myexe.exe
```

## Technologies Used

- **Programming Language:** C
- **Standard Libraries:** `stdio.h`, `stdlib.h`, `assert.h`
- **Compiler:** GCC or another compatible C compiler
- **Testing:** C standard assertion mechanism

## How It Works

1. The program accepts two integer inputs from the user.
2. It validates both inputs using `scanf()`.
3. The `Addition()` function calculates their sum.
4. The result is displayed in the terminal.
5. Separate assertion-based tests verify the function against expected results.

### Example

```text
Enter first number:
10
Enter second number:
20
Addition is :30
```

## Getting Started

### Prerequisites

Install a C compiler, such as GCC, and ensure it is available in your terminal.

### Compile the Application

Run the following commands from the project root:

```bash
gcc src/MainFunction.c src/EntryPointFunction.c -o addition
```

### Run the Application

**Linux / macOS**

```bash
./addition
```

**Windows**

```bash
addition.exe
```

## Testing

The project includes assertion-based tests for positive and negative integer combinations.

Compile the test program separately from the application's `main()` function:

```bash
gcc Test/AssertFunction.c src/EntryPointFunction.c -o test_addition
```

Run the tests:

```bash
./test_addition
```

On Windows, run:

```bash
test_addition.exe
```

If all assertions pass, the test process completes without assertion errors.

## Error Handling

The application checks whether each input is successfully parsed as an integer. If an input is invalid, it prints an error message and returns `EXIT_FAILURE`.

## Learning Objectives

- Understanding functions and function declarations in C
- Separating declarations from implementations
- Organizing a small C project into modules
- Handling invalid user input
- Writing basic automated checks with assertions
- Compiling and executing multi-file C programs

---

**Author:** Sankalp Baban Devkar

**Project:** Arithmetic Addition in C
