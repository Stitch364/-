#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void control() {
	printf("           �������\n");
	printf("-----------------------------\n");
	printf("1.����ҩƷ��Ϣ\n");
	printf("2.��ѯҩƷ��Ϣ\n");
	printf("3.�޸�ҩƷ��Ϣ\n");
	printf("4.ɾ��ҩƷ��Ϣ\n");
	printf("5.��ʾ����ҩƷ��Ϣ\n");
	printf("6.ͳ��ҩƷ����\n");
	printf("7.ҩ�����\n");
	printf("8.ҩƷ�۳�\n");
	printf("9.�˳�\n");
	printf("-----------------------------\n");
	printf("\n����������1-9��\n");

	int i;
	scanf("%d", &i);
	while (i > 9 ||i < 1) {
		printf("�������������\n���������룺");
		scanf("%d", &i);
		printf("\n");
	}

		switch (i)
		{
		case 1:


			break;
		case 2:


			break;
		case 3:


			break;
		case 4:


			break;
		case 5:


			break;
		case 6:


			break;
		case 7:

			break;
		case 8:


			break;
		case 9:
			printf("�����˳���");
			Sleep(2000);
			break;
		default:
			break;
		}

}