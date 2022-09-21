/**
 * _strcat - function that concatenates
 * 		two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source Input
 *
 * Return: pointer to resulting string @dest
 */



	Char * _strcat(char *dest, char *src)

{

	int c , c2;

	c = 0;

	/*find the size of dest array*/

	while (dest[c])

		c++;                                   I

			/* Iterate through each sec array value without the null byte*/

			for (c2 = 0; src[c2] ; c2++)

				/*append src[c2] to dest[c] while overwritting the null byte in dest*/

				dest[c++] = src[c2];

return (dest);
}
