# resources
* <a href="https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm">C - Pointer to Pointer<a/>
* <a href="https://beginnersbook.com/2014/01/c-pointer-to-pointer/">C – Pointer to Pointer with example<a/>
* <a href="https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm">Multi-dimensional Arrays in C<a/>
* <a href="https://beginnersbook.com/2014/01/2d-arrays-in-c-example/">Two dimensional (2D) arrays in C programming with example<a/>

0x07-pointers Arrays Strings 0. memset Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
memcpy Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n); The _memcpy() function copies n bytes from memory area src to memory area dest Returns a pointer to dest

strchr Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c); Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

strspn Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept); Returns the number of bytes in the initial segment of s which consist only of bytes from accept

strpbrk Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept); The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

strstr Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle); The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

Chess is mental torture Write a function that prints the chessboard.

The line of life is a ragged diagonal between duty and desire Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size); Format: see example You are allowed to use the standard library

Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

Double pointer, double fun Write a function that sets the value of a pointer to a char.my 0x07-pointers_arrays_strings task readme
