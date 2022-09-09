#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	puutchar('\n');

	return (0);

}
