#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *pi=NULL;

	if((pi=(int*)malloc(sizeof(int)))==NULL)
	{
		printf("메모리 할당에 문제가 있습니당ㅎㅎ.\n");
		exit(1);
	}

	*pi=3;

	printf("*pi=%d\n",*pi);
	printf("pi=%d\n",pi);

	free(pi);

	return 0;

}