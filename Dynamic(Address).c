#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct contacts // ����ü Ÿ�� ����
{ 	
	int num;
	char name[100];
	char mobile_phone[100];
	char h[100];
} CONTACTS;

int main(void) 
{
	CONTACTS *contacts; 	// ���� �޸� ������ ����Ű�� ������
	int size, i;
	
	printf("�ּ��� ����: ");
	scanf("%d", &size);
	
	
	contacts = (CONTACTS *)malloc(sizeof(CONTACTS)* size); 	// ���� �޸� �Ҵ�
	
	if( contacts == NULL )
	{
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	
	for(i=0; i<size ;i++) 
	{
		contacts[i].num=i+1;

		printf("�̸��� �Է��Ͻÿ�: ");
		fflush(stdin); 			// �Է� ���۸� ����.
		gets(contacts[i].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		gets(contacts[i].mobile_phone);
		printf("�ƹ����̳� �Է��Ͻÿ�:");
		gets(contacts[i].h);
	
	}
	
	printf("========================\n");
	printf("�̸� �޴��� ��ȣ  �ƹ���\n");
	printf("========================\n");
	
	for(i=0;i<size;i++)
		printf("%d %s %s %s\n",contacts[i].num ,contacts[i].name, contacts[i].mobile_phone,contacts[i].h);
		
	printf("\n========================\n");
	
	free(contacts); 				// ���� �޸� ���� ����
	return 0;
}