# C stacks n queues

## Building an interpreter for Monty bytecode files

## Overview
- This project is a Monty bytecode interpreter implemented in C. Monty is a simple, stack-based programming language.
- This interpreter is capable of parsing and executing Monty bytecode files.

## Features
- Supports a variety of Monty bytecode instructions, including `push`,
- Implements a stack data structure to store and manipulate values.
- Provides error handling for common scenarios such as invalid instructions and stack underflow/overflow.

## Getting started
To use the monty interpreter, follow these steps:
1. Clone the repo to your local machine.
2. compile the source code using a C compiler (e.g., gcc)
3. Run the interpreter with a Monty bytecode file:
	` ./monty <file>`

## supported instructions
This monty interpreter supports the following instructions:
- `push <int>`: pushes an integer onto the stack.
- `pall`: Prints all values on the stack

## Example
Suppose you have a Monty bytecode file named `push_pall.m` with the following content:
```
push 10
push 20
push 30
pall
```
running this interpreter with the file `push_pall.m` would produce the following output:
```
30
20
10
```

## Contributing
Any contributions to this project are welcome, if you encounter any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.
