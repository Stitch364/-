#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

void print_medicine(Linklist* head) {
	Linklist* p;
		printf("----------------------------------------\n");
	for (p = head->next; p != NULL; p = p->next) {

		printf("ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
			, p->name, p->sum, p->price, p->production, p->time);
		printf("----------------------------------------\n");
	}
}