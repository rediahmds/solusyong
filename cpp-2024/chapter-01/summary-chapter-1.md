# Chapter 1: Summary

This chapter covers topics that are essential to C++ program, so it will not be that deep, but enough to get by. The goal of this chapter is to help you understand how basic C++ programs are constructed.

## Statements

- A computer program is basically a sequence of instructions that tell the computer what to do. Well, a statement is a ***type of instruction*** that causes the program to do perform action.
- Statements act much like sentences do in natural language. For example,  When we want to convey an idea to another person, we typically write or speak in sentences. In C++, when we want to have our program do something, we typically write statements.
- In a high-level language like C++, a statement may compile into many machine language instructions.

## Functions and the main function

- Actually, you know what it is right? It is a collection of statements that executes sequentially.
- Every C++ must have a `main` function. The return value of this function will be sent to the OS to indicate whether the program ran successfully or not.

## C++ STL

A library file is a collection of precompiled code that has been “packaged up” for reuse in other programs. The C++ Standard Library is a library that ships with C++. It contains additional functionality to use in your programs.

## Object and Variables

- Program can manipulates data to produce results the program designed to be.
- When a program runs, the data required and the program itself will be loaded to a memory called RAM. 
- In C++, direct access to RAM is discouraged. Instead, we can access RAM indirectly using an **object**. An **object** is a region of storage (usually memory) that can store value and has other properties associated. So if we want to access a value or data in the memory, we can say, "*go get the value stored by this object*".
- A **variable** is simply a named objects. It can store and retrieve values, we don't have to worry about where in memory those objects are actually placed.

>An object is used to store a value in memory. A variable is an object that has a name (identifier).
>Naming our objects let us refer to them again later in the program.
>
>In general programming, the term _object_ typically refers to an unnamed object in memory, a variable, or a function. In C++, the term _object_ has a narrower definition that excludes functions

### Variable Instantiation

- To create a variable, we have to declare it, e.g. `int varname;`
- Compiler then will remember that we have a variable named `varname` with type of `int`. From that point forward, whenever the compiler sees the  identifier `varname`, it will know that we're referencing this variable.
- When the program is run (called **runtime**), the variable will be instantiated.
- **Instantiation** means that the object will be created and assigned a memory address. Variables must be instantiated before they can be used to store values.

## Data Types

- **Data type** (more commonly just called a **type**) tells the compiler what type of value (e.g. a number, a letter, text, etc.) the variable will store.
- It is used to determine how the value in memory should be interpreted.
- In C++, the type of a variable must be known at **compile-time**. Meaning that the type cannot be changed without recompiling.

[README - C++ 2024](cpp-2024/README.md) | [summary-chapter-0](summary-chapter-0.md)

