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
	printf("5.����ҩƷ��Ϣ\n");
	printf("6.��ʾ����ҩƷ��Ϣ\n");
	printf("7.ͳ��ҩƷ����\n");
	printf("8.�����ѯ\n");
	printf("9.��ѯҩƷ�۸�\n");
	printf("0.�˳�\n");
	printf("-----------------------------\n");
	printf("\n����������0-9��\n");

	int i;
	scanf("%d", &i);

	while (i > 9 ||i < 0) {
		printf("�������������\n���������룺");
		scanf("%d", &i);
		printf("\n");
	}
	Linklist* head;
	//head = NULL;
	head = open_medicine();	//���ļ�,����Ϣ��������
		switch (i)
		{
		case 1:
			//����ҩƷ��Ϣ
			head = add_medicine(head);
			write_medicine(head);   //���½���Ϣд���ļ�
			my_continue();
			break;
		case 2:
			//��ѯҩƷ��Ϣ
			find(head);
			my_continue();
			break;
		case 3:
			//�޸�ҩƷ��Ϣ
			change_medicine(head);  //�޸�ָ������
			write_medicine(head);   //���½���Ϣд���ļ�
			my_continue();
			break;
		case 4:
			//ɾ��ҩƷ��Ϣ
			head = delet_medicine(head);//ɾ��ָ������
			write_medicine(head);   //���½���Ϣд���ļ�
			my_continue();
			break;
		case 5:
			//����ҩƷ��Ϣ
			insert_medicine(head);
			write_medicine(head);   //���½���Ϣд���ļ�
			my_continue();
			break;
		case 6:
			//��ʾ����ҩƷ��Ϣ
			print_medicine(head);
			my_continue();
			break;
		case 7:
			//ͳ��ҩƷ����
			sum_medicine(head);
			my_continue();
			break;
		case 8:
			//�����ѯ
			sort(head);
			my_continue();
			break;
		case 9:
			//��ѯҩƷ�۸�
			findprice_medicine(head);
			my_continue();
			break;
		case 0:
			//�˳�
			printf("�����˳���");
			Sleep(2000);
			break;
		default:
			break;
		}

}