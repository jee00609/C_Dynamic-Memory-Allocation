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


	printf("구조체 크기 = %d \n\n",sizeof(list));
	printf("첫번째 구조체:");
	printf("\t자료의 주소값(first)=%u\n",first);
	printf("\t자료값(first->n)=%d\n",first->n);
	printf("\t자료값(first->next)=%d\n",first->next);
	printf("\t자료값(first->next->n)=%d\n",first->next->n);
	
	printf("\n\n");
	printf("두번째 구조체:");
	printf("\t자료의 주소값(second)=%u\n",second);
	printf("\t자료값(second->n)=%d\n",second->n);
	printf("\t자료값(second->next)=%d\n",second->next);
	printf("\t자료값(second->next->n)=%d\n",second->next->n);

	printf("\n\n");
	printf("세번째 구조체:");
	printf("\t자료의 주소값(third)=%u\n",third);
	printf("\t자료값(third->n)=%d\n",third->n);
	printf("\t자료값(third->next->n)=%d\n",third->next);
	printf("\n\n");
	free(first);
	free(second);
	free(third);


	return 0;

}
