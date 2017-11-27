#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct selfref
{
	int n;
	struct selfref *next;
}list;


int main()
{
	list *first=NULL;
	list *second=NULL;
	list *third=NULL;

	first = (list*)malloc(sizeof(list));
	second = (list*)malloc(sizeof(list));
	third = (list*)malloc(sizeof(list));

	first->n=100;
	first->next=NULL;

	second->n=200;
	second->next=NULL;

	third->n=300;
	third->next=NULL;

	first->next=second;
	second->next=third;


	printf("����ü ũ�� = %d \n\n",sizeof(list));
	printf("ù��° ����ü:");
	printf("\t�ڷ��� �ּҰ�(first)=%u\n",first);
	printf("\t�ڷᰪ(first->n)=%d\n",first->n);
	printf("\t�ڷᰪ(first->next)=%d\n",first->next);
	printf("\t�ڷᰪ(first->next->n)=%d\n",first->next->n);
	
	printf("\n\n");
	printf("�ι�° ����ü:");
	printf("\t�ڷ��� �ּҰ�(second)=%u\n",second);
	printf("\t�ڷᰪ(second->n)=%d\n",second->n);
	printf("\t�ڷᰪ(second->next)=%d\n",second->next);
	printf("\t�ڷᰪ(second->next->n)=%d\n",second->next->n);

	printf("\n\n");
	printf("����° ����ü:");
	printf("\t�ڷ��� �ּҰ�(third)=%u\n",third);
	printf("\t�ڷᰪ(third->n)=%d\n",third->n);
	printf("\t�ڷᰪ(third->next)=%d\n",third->n);
	printf("\t�ڷᰪ(third->next->n)=%d\n",third->next);
	printf("\n\n");
	free(first);
	free(second);
	free(third);


	return 0;

}