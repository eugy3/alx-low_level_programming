#include <stdio.h>
/**
<<<<<<< HEAD
 *  * main - Prints out the sizes of various data types on the computer
 *   * this program is compiled on.
 *    * Return: 0 if success.    
=======
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
>>>>>>> 2dabc7968c4f277fd68e26c3b7d54b0fead88a76
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

<<<<<<< HEAD
							printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
								printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
					printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
			 	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
											printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
												return (0);
=======
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
>>>>>>> 2dabc7968c4f277fd68e26c3b7d54b0fead88a76
}
