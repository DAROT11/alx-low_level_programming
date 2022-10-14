#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Description: if all condition are meet else return
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ldigit > 5)
{
		printf("last digit of %d is %d and is greater than 5\n", n, ldigit);
}
	else if (ldigit < 6 && ldigit != 0)
{
		printf("last digit of %d is %d and is less 6 and not 0\n", n, ldigit);
}
	else if (ldigit == 0)
{
		printf("last digit of %d is %d and is 0\n", n, ldigit);
}
	return (0);

}
