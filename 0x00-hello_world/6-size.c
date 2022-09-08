#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int li;
long long int lli;
char c;
float f;

printf("size of a char: %ld byte(s)\n", sizedof(c));
printf("size of an int: %ld byte(s)\n", sizedof(i));
printf("size of a long int: %ld byte(s)\n", sizedof(li));
printf("size of a long long int: %ld byte(s)\n", sizedof(lli));
printf("size of a float: %ld byte(s)\n", sizedof(f));
return (0);
}
