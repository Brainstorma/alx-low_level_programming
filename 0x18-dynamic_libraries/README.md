*# 0x18 - Dynamic Libraries*

## Table of Contents 

- Introduction 
- Prerequisites
- Installation 
- Basic Usage 
- Dynamic Libraries Overview 
- Compiling a Simple “Hello World” Library
- Linking Libraries
- Using Library Functions 
- Advanced Topic: Position-Independent Code (PIC)
- Advanced Topic: Shared Libraries
- Advanced Topic: Dynamic Linking
- Advanced Topic: Linker Scripts
- Advanced Topic: Cross-Platform Dynamic Libraries
- Troubleshooting 
- Credits

## Introduction

Welcome to 0x18 - Dynamic Libraries! This tutorial will provide you a comprehensive understanding of dynamic libraries, including how to create, link, and use them. This tutorial will cover topics ranging from the basics of dynamic linking, to the more advanced topics of shared libraries, position-independent code (PIC), cross-platform development, and linker scripts. 

Dynamic libraries are one of the most important concepts in software development, as they allow for increased efficiency and scalability as well as for easier code reuse. By the end of this tutorial, you will have a good understanding of dynamic libraries and will be able to create, link, and use them for your own projects.

## Prerequisites

In order to complete this tutorial, you will need:

- A basic understanding of C or C++ programming
- A text editor or IDE (e.g. Visual Studio Code)
- A C or C++ compiler (e.g. GCC, Clang)

## Installation 

Before you get started, you need to ensure that you have the necessary tools installed on your system. 

1. Install a C or C++ compiler. We recommend GCC or Clang on Linux, or Visual Studio on Windows.

2. Install a text editor or IDE. We recommend Visual Studio Code.

## Basic Usage

Once you have installed the necessary tools, you are ready to start using dynamic libraries. Here are the basic steps to creating and using dynamic libraries:

1. Create a library file (usually a .c or .cpp file) containing the code you want to use.

2. Compile your library code into a binary library file (usually a .so or .dylib file).

3. Link the binary library file to your target program or library.

4. Use the functions from your library in your program or library.

## Dynamic Libraries Overview

Dynamic libraries are shared objects that can be used by other programs or libraries. A library file contains compiled code, and can contain both code and data. It is linked to other programs or libraries at run-time, which allows them to access the code and data in the library. 

Dynamic libraries are used to reduce the amount of code duplication across programs and libraries, and to enable code reuse. They are also used to reduce the size of programs and libraries, as shared code can be reused without having to be included separately in each program or library. 

Dynamic libraries are typically binary files, which means they cannot be read or modified by humans. They are created using a linker, which takes compiled code and produces a library file. 

## Compiling a Simple “Hello World” Library 

Now that you have a basic understanding of dynamic libraries, let’s create a simple “hello world” library. This library will contain a single function, called `print_hello`, which will simply print “Hello World!” to the console. 

To create this library, you will need to create a library file containing the code for the library. Let’s call this file `hello.c`. Here is the code for the library:

```c
#include <stdio.h>

void print_hello() {
    printf("Hello World!\n");
}
```

Once you have created the library file, you need to compile it into a binary library file. To do this, you will need to use a C compiler, such as GCC or Clang. 

The following command will compile the library file and create a dynamic shared object file called `libhello.so`:

`gcc -shared -fPIC hello.c -o libhello.so`

## Linking Libraries 

Once you have compiled the library file, you need to link it to your program or library. This is done using the linker, which is included in the compiler toolchain. 

The linker takes the dynamic library file (`libhello.so` in our example) and links it to the program or library. The process of linking is often referred to as “static linking”, as the linker takes a static library file and links it to a program or library.

The following command will link the library file to your program.

`gcc -L. -lhello program.c -o program`

The `-L.` flag tells the linker to look for the library file in the current directory. The `-lhello` flag tells the linker to link the library file named `libhello.so`. 

## Using Library Functions 

Once you have linked the library to your program, you can start using the functions from the library. You can access the functions from the library by including the library’s header file in your program. In our example, the header file is called `hello.h`. Here is the code for the header file:

```c
#ifndef HELLO_H
#define HELLO_H

void print_hello();

#endif
```

Now you can use the `print_hello` function in your program, simply by calling the function. Here is an example of how you can use the function in your program:

```c
#include "hello.h"

int main(void)
{
    print_hello();
    return 0;
}
```

## Advanced Topic: Position-Independent Code (PIC)

Position-independent code (PIC) is code written in a special way that allows it to be located at different memory locations at run-time. This is useful for providing flexibility in memory usage and for allowing the code to be relocated or shared between processes. 

PIC is used in dynamic libraries for both performance and security reasons. For performance, PIC is necessary to make the code position-independent, allowing it to be shared between processes. For security, it prevents memory corruption, as any attempts to overwrite the code would be blocked. 

In order to use PIC, the code needs to be written according to special rules that ensure that the code is position-independent. Some of these rules include avoiding absolute memory references, using relative memory references, and not including any hard-coded addresses. 

## Advanced Topic: Shared Libraries

Shared libraries are libraries that are shared between multiple processes or applications. These libraries are stored in memory and are shared between all the processes or applications that use them. 

Shared libraries allow for efficient resource usage, as the same code can be shared between multiple programs or libraries. This allows for code reuse and reduces memory usage, as the same code does not need to be stored multiple times. 

Shared libraries also allow for easier development, as programs and libraries can share functions and data without having to be compiled together. This allows for more modular development, as developers can focus on different parts of the code without having to worry about integrating them. 

## Advanced Topic: Dynamic Linking

Dynamic linking is the process of linking a program or library to another program or library at run-time. This allows for more flexibility in programs and libraries, as the code can be reused without having the binary library files compiled into the program or library. 

Dynamic linking also allows for efficient resource usage, as the same library can be used by multiple programs or libraries without having to be recompiled. This reduces the amount of time and effort required to maintain and update programs and libraries, as code only needs to be updated in one place. 

Dynamic linking is implemented using dynamic linking loaders, which are responsible for loading the necessary library files at run-time. 

## Advanced Topic: Linker Scripts

Linker scripts are special files that provide the linker with instructions on how to link a program or library. These scripts contain information about the libraries to be linked, the order in which the libraries are to be linked, and any other special instructions related to linking. 

Linker scripts are important in dynamic linking, as they provide the linker with the necessary information to link the library files at run-time. This allows for more flexibility and control over the linking process, as developers can specify the exact libraries to be linked and the order in which they should be linked. 

## Advanced Topic: Cross-Platform Dynamic Libraries

Cross-platform development is the process of developing programs and libraries that can be used on multiple operating systems and platforms. This requires the use of dynamic libraries, as the same code needs to be able to be shared between multiple platforms. 

Cross-platform development requires the use of dynamic linking, as the same library needs to be able to be linked to multiple programs or libraries on multiple platforms. This allows the same library to be used by programs and libraries on multiple platforms without having to be recompiled. 

It also requires the use of linker scripts, as the same library needs to be able to be linked in different ways on different platforms. This allows developers to specify the exact libraries and linking order that should be used on each platform. 

## Troubleshooting

If you encounter any issues while using dynamic libraries, here are some common issues and solutions:

- The library is not found when linking: Ensure that the library file is located in the correct directory and that the library name is correct (e.g. `libhello.so` in the example above).

- The library functions are not found when linking: Ensure that you have included the library’s header file in your program.

- The library functions are not found at run-time: Ensure that the library file is located in the correct directory and that the dynamic linker is able to find it.

## Credits

This repository was created by Brainstorma.
