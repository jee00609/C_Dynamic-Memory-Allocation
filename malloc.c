#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int *pi=NULL;

	if((pi=(int*)malloc(sizeof(int)))==NULL)
	{
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ社��.\n");
		exit(1);
	}

	*pi=3;

	printf("*pi=%d\n",*pi);
	printf("pi=%d\n",pi);

	free(pi);

	return 0;

}