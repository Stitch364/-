#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//�����ҵ�����λ��
void insert_medicine(Linklist* head) {
	Linklist* p, * q;
	q = head;
	//�����½ڵ�
	p = (Linklist*)malloc(sizeof(Linklist));
	scanf("%s", n);
	while (q->next != NULL)
	{
		if (strcmp(q->id, n) == 0)
		{
			printf("������ҩƷ��Ϣ:\n");
			printf("ҩƷ��ţ�");
			scanf("%s", p->id);
			printf("ҩƷ����");
			scanf("%s", p->name);
			printf("ʣ������");
			scanf("%d", &num);
			p->sum = num;
			printf("ҩƷ�۸�");
			scanf("%d", &pc);
			p->price = pc;
			p->next = q->next;
			q->next = p;
			q = p;
			printf("����ҩƷ��Ϣ�ɹ�\n");
			break;
		}
		q = q->next;
	}
}