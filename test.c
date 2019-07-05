#include "trashcan.h"
int main(int argc, char **argv)
{
	t_rash_can my_trashcan;
	new_trash_bag(&my_trashcan);
	char *str = (char *)malloc(20 * sizeof(char));
	mom(&my_trashcan, T_CHAR, str);
	garbage_day(&my_trashcan);
	return(0);
}
