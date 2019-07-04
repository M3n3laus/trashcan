#include "trashcan.h"
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	t_rash_can my_trashcan;
	new_trash_bag(&my_trashcan);
	char *str;
	char c = 'a';
	int i = -1;
	while(++i < 45)
	{
		str = (char *)malloc(20 * sizeof(char));
		str[0] = c++;
		str[1] = 0;
		mom(&my_trashcan, T_CHAR, str);
	}
	garbage_day(&my_trashcan);
	while(1){;}
	return(0);
}
