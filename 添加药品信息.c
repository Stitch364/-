#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* add_medicine(Linklist* head) {
	//���������ͷָ��
	printf("������ҩƷ��Ϣ:  \n");
	printf("ҩƷ���: ");
	scanf("%s", n);
	Linklist* q;
	q = head;
	//����ҩƷ����Ƿ��Ѿ�����
	while (q->next != NULL) {
		//�����в���
		//�ҵ��Ǹýڵ����һ��
		if (strcmp(q->next->id, n) == 0) {
			printf("��ҩƷ�Ѵ��ڣ���������ӡ�\n");
			break;
		}
		q = q->next;
	}

	//û�ҵ���������ָ��qָ�����һ�����
	if (q->next == NULL) {
		Linklist *p = (Linklist*)malloc(sizeof(Linklist));
		if (p == NULL) {
			printf("error\n");
			return NULL;
		}
		strcpy(p->id, n);

		printf("ҩƷ����");
		scanf("%s", p->name);

		printf("ʣ������");
		scanf("%d", &num);
		p->sum = num;

		printf("ҩƷ�۸�");
		scanf("%d", &pc);
		p->price = pc;

		printf("�������ڣ�");
		scanf("%s",p->production);

		printf("�����ڣ��죩��");
		scanf("%s", p->time);

		p->next = NULL;
		q->next = p;
		q = p;
	}
	return head;
}