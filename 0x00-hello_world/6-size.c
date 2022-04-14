<<<<<<< HEAD
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
=======
#include <stdio.hi>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %d bytes(s)\n", sizeof(char));
printf("Size of int: %d bytes(s)\n", sizeof(int));
printf("Size of long int: %d bytes(s)\n", sizeof(long int));
printf("Size of long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
>>>>>>> 6bdeb4352ea5bdcb1b458a3fe11875c169f79246
return (0);
}
