#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void sort(Linklist* head)//���� 
{
	int f;
	int flag = 1;

	do {
		printf("��ѡ������ķ�ʽ:  (1) ���۸���������    ��2����ҩƷʣ������������\n������ ��0���˳�\n");
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
			price_medicine(head);
			break;
		case 2:
			number_medicine(head);
			break;
		}
		printf("\n��������������  1  \n�˳�������  0\n");
		scanf("%d", &flag);
		Sleep(2000);
		system("cls");
	} while (flag);
}


void price_medicine(Linklist* head)//���۸�����ѡ�� 
{
	Linklist* h, * p, * q, * c;
	h = head->next;
	if (h == NULL)
	{
		printf("û���κ�ҩƷ��Ϣ");
	}
	while (h != NULL)
	{
		p = h;
		q = h->next;
		Linklist* t;  //�ݴ�ڵ� 
		t = (Linklist*)malloc(sizeof(Linklist));
		if (t == NULL) {
			return;
		}
		while (q != NULL)
		{
			if (q->price < p->price)
			{
				strcpy(t->id, q->id);  //�ȸ���q�����Ϣ��t 
				strcpy(t->name, q->name);
				t->sum = q->sum;
				t->price = q->price;

				strcpy(q->id, p->id);  //����p�����Ϣ��q
				strcpy(q->name, p->name);
				q->sum = p->sum;
				q->price = p->price;

				strcpy(p->id, t->id);  //�����ݴ�����Ϣ��p
				strcpy(p->name, t->name);
				p->sum = t->sum;
				p->price = t->price;
			}
			q = q->next;
		}
		h = h->next;
	}
	printf("������ҩƷ��ϢΪ��\n");
	c = head->next;
	while (c != NULL)
	{
		printf("ҩƷ���:%s ����:%s ʣ����:%d �۸�%d\n",
			c->id, c->name, c->sum, c->price);
		c = c->next;
	}
}


void number_medicine(Linklist* head)//��ҩƷʣ��������ѡ�� 
{
	Linklist* h, * p, * q, * c;
	h = head->next;
	if (h == NULL)
	{
		printf("û���κ�ҩƷ��Ϣ");
	}
	while (h != NULL)
	{
		p = h;
		q = h->next;
		Linklist* t;  //�ݴ�ڵ� 
		t = (Linklist*)malloc(sizeof(Linklist));
		if (t == NULL) {
			return;
		}
		while (q != NULL)
		{
			if (q->sum > p->sum)
			{
				strcpy(t->id, q->id);  //�ȸ���q�����Ϣ��t 
				strcpy(t->name, q->name);
				t->sum = q->sum;
				t->price = q->price;

				strcpy(q->id, p->id);  //����p�����Ϣ��q
				strcpy(q->name, p->name);
				q->sum = p->sum;
				q->price = p->price;

				strcpy(p->id, t->id);  //�����ݴ�����Ϣ��p
				strcpy(p->name, t->name);
				p->sum = t->sum;
				p->price = t->price;
			}
			q = q->next;
		}
		h = h->next;
	}
	printf("������ҩƷ��ϢΪ��\n");
	c = head->next;
	while (c != NULL)
	{
		printf("ҩƷ���:%s ����:%s ʣ����:%d �۸�%d\n",
			c->id, c->name, c->sum, c->price);
		c = c->next;
	}
}
