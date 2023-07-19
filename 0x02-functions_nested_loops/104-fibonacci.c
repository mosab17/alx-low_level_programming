#include "main.h"

/**
 *  numLength - enter point
 *
 * @num: Operand number
 *
 * Return: number ofdigits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - enter point
 *
 * Description: Print frist 98 number fibonacci numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, max = 10000000, f1o = 0, f2o = 0, sumo = 0;
	/*unsigned long sum;*/

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(max) - 1 - numLength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		

		printf("%lu", f1);

		/*sum = (f1 + f2) % max;*/
		sumo = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sumo;
		}
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

