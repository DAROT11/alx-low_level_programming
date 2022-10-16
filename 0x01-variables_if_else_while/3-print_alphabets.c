#include <stdio.h>
/**
*main-program entry point.
*Return:0 no error, non zero if error.
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar("%c", i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar("%c", i);
	}
		putchar('\n');

		return (0);
}
