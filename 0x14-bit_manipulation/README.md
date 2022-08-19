Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte. C language is very efficient in manipulating bits.



Here are following operators to perform bits manipulation:



Bitwise Operators:

Bitwise operator works on bits and perform bit by bit operation.



Assume if B = 60; and B = 13; Now in binary format they will be as follows:



A = 0011 1100



B = 0000 1101



-----------------



A&B = 0000 1000



A|B = 0011 1101



A^B = 0011 0001



~A  = 1100 0011



Show Examples



There are following Bitwise operators supported by C language



Operator	Description	Example

&	Binary AND Operator copies a bit to the result if it exists in both operands.	(A & B) will give 12 which is 0000 1100

|	Binary OR Operator copies a bit if it exists in eather operand.	(A | B) will give 61 which is 0011 1101

^	Binary XOR Operator copies the bit if it is set in one operand but not both.	(A ^ B) will give 49 which is 0011 0001

~	Binary Ones Complement Operator is unary and has the efect of 'flipping' bits.	(~A ) will give -60 which is 1100 0011

<<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.	A << 2 will give 240 which is 1111 0000

>>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	A >> 2 will give 15 which is 0000 1111

The shift operators perform appropriate shift by operator on the right to the operator on the left. The right operator must be positive. The vacated bits are filled with zero.

Resources

Read or watch:



Google

Youtube

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:



General

Look for the right source of information without too much help

How to manipulate bits and use bitwise operators

Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.

You are not allowed to publish any content of this project.

Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements

General

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden

You are allowed to use _putchar

You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

Don’t forget to push your header file

All your header files should be include guarded
