#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void my_continue()
{
	int j, flag = 1;
	printf("�������������� 1  \n�˳�������  0\n");

	while(flag){
		scanf("%d", &j);
		switch (j) {
		case 1:
			system("cls");
			control();
			flag = 0;
			break;
		case 0:
			exit(1);
			flag = 0;
			break;
		default:
			printf("��������Ч�����֣�\n");
			break;
		}
	}

}