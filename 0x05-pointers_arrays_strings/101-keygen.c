#include <stdio.h>
#include <time.h>

/**
* main -  enter program cerit pass word progeam
*
* Description: password and new pass word
*
* Return: zero
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2654)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 – sum);
	return (0);

}

