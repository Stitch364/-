#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//��ʼ������
void first()
{
	printf(" ___________________________________________________________\n");
	printf("|                 ��ӭʹ��ҩ�����ϵͳ                      |\n");
	printf("|                        1-��¼                             |\n");
	printf("|                        2-ע��                             |\n");
	printf("|                        0-�˳�                             |\n");
	printf("|___________________________________________________________|\n");
	printf("��ѡ������� ");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		system("cls");
		//��¼���ڵ�¼��������ת�������
		denglu();
		system("cls");
		break;
	case 2:
		system("cls");
		//ע���ص�������
		zhuce();
		break;
	case 0:
		//�˳�
		exit(1);
	default:
		system("cls");
		printf("��������Ч�����֣�");
		Sleep(3000);
		system("cls");
		first();
	}
}


int main() 
{
	//��ʼ��
	first();
	return 0;
}