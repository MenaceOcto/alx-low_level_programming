#include <stdio.h>

/**
 * main - Entry point
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

printf("size of a char: %lu byte(s)\n", (unsigned long)sizedof(d));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizedof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizedof(b));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizedof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizedof(f));
return (0);
}
