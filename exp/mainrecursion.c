#include <stdio.h>

int i = 0;

int main(int i)
{
	printf("i sell %d shit\n",i);
	main(i+1);
	return 0;
}
