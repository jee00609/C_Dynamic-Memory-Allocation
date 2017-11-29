#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct contacts // 구조체 타입 정의
{ 	
	int num;
	char name[100];
	char mobile_phone[100];
	char h[100];
} CONTACTS;

int main(void) 
{
	CONTACTS *contacts; 	// 동적 메모리 공간을 가리키는 포인터
	int size, i;
	
	printf("주소의 개수: ");
	scanf("%d", &size);
	
	
	contacts = (CONTACTS *)malloc(sizeof(CONTACTS)* size); 	// 동적 메모리 할당
	
	if( contacts == NULL )
	{
		printf("동적 메모리 할당 오류");
		exit(1);
	}
	
	for(i=0; i<size ;i++) 
	{
		contacts[i].num=i+1;

		printf("이름을 입력하시오: ");
		fflush(stdin); 			// 입력 버퍼를 비운다.
		gets(contacts[i].name);
		printf("휴대폰 번호를 입력하시오: ");
		gets(contacts[i].mobile_phone);
		printf("아무말이나 입력하시오:");
		gets(contacts[i].h);
	
	}
	
	printf("========================\n");
	printf("이름 휴대폰 번호  아무말\n");
	printf("========================\n");
	
	for(i=0;i<size;i++)
		printf("%d %s %s %s\n",contacts[i].num ,contacts[i].name, contacts[i].mobile_phone,contacts[i].h);
		
	printf("\n========================\n");
	
	free(contacts); 				// 동적 메모리 공간 해제
	return 0;
}