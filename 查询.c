#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void find(Linklist* head) {
	int f;
	int flag = 1;

	do{
			printf("������Ҫ���ҵķ�ʽ:  (1) ���    ��2������\n������ ��0���˳�\n");
			scanf("%d", &f);
			while (f < 0 || f>2) {
				printf("��������Ч�����֣�\n");
				scanf("%d", &f);
			}
			switch (f) {
			case 0:
				printf("�����˳���");
				Sleep(2000);
				system("cls");
				return;
			case 1:
				findnum_medicine(head);
				break;
			case 2:
				findname_medicine(head);
				break;
			}
			printf("\n������ѯ������  1  \n�˳�������  0\n");
			scanf("%d", &flag);
			Sleep(2000);
			system("cls");
	} while (flag);
	return;
}

void findnum_medicine(Linklist* head) {
	Linklist* p,*q;
	printf("������Ҫ���ҵ�ҩƷ���: ");
	scanf("%s", n);
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			printf("���Ϊ%s��ҩƷ��Ϣ���£�\n",n);
			printf("ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			return;
		}
		q = q->next;
	}

	if (q->next == NULL) {
		printf("δ�ҵ���ҩƷ��Ϣ��\n");
	}
	return;
}


void findname_medicine(Linklist* head) {
	Linklist* p,*q;
	printf("������Ҫ���ҵ�ҩƷ����: ");
	scanf("%s", na);
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->name, n) == 0) {
			p = q->next;
			printf("���Ϊ%s��ҩƷ��Ϣ���£�\n",na);
			printf("ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			return;
		}
		q = q->next;
	}

	if (q->next == NULL) {
		printf("δ�ҵ���ҩƷ��Ϣ��\n");
	}
	return;
}