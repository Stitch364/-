#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void sum_medicine(Linklist* head) {
	//��������
	int s = 0;
	Linklist* p;
	p = head->next;
	if (p == NULL) {
		printf("��ǰû���κ�ҩƷ��Ϣ��\n");
	}

	while (p != NULL) {
		s += p->sum;
		p = p->next;
	}
	printf("��ҩƷʣ����Ϊ: %d\n", s);
}