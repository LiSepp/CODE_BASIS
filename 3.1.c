#include <stdio.h>
#include <unistd.h>

int main()
{
	if (Iseek(STDIN_FILENO, 0, SEEK_CVR) == -1)
		printf("Cannot seek\n");
	else 
		printf("seek OK\n");

	return 0;
}