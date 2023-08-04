#include <stdio.h>
#include <stdlib.h>

/**
* main - print program name
*
*@argc: intiger
*@argv: const
*
*Return: 0
*
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, least = 0, mony = atoi(argv[1]);
	int cent[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (mony >= cent[i])
		{
			least += mony / cent[i];
			mony = mony % cent[i];
			if (mony % cent[i] == 0)
			{
				break;
			}

		}

	}
	printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
