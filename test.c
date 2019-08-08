#include "trashcan.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str_array[20];
	int *num = malloc(1 * sizeof(int));
	mom(num);
	while (i < 20)
	{
		str_array[i] = malloc(1 * sizeof(char));
		printf("array_pointer:	%p\n", str_array[i]);
		mom(str_array[i]);
		printf("g_can:		%p\n\n", g_can.can[g_can.top]);
		++i;
	}
	garbage_day();
	return(0);
}
