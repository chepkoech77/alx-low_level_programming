#include "main.h"
#include <stdio.h>
/**
 * times_table - print times table
 * Return: 0
 *
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			printf("%2d, ", res);
		}
		printf("\n");
	}
}
