#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* add_medicine(Linklist* head) {
	printf("������ҩƷ��Ϣ:  \n");
	printf("ҩƷ���: ");
	scanf("%s", n);
	Linklist* q;
	q = head;
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			printf("��ҩƷ�Ѵ��ڣ���������ӡ�\n");
			break;
		}
		q = q->next;
	}
	if (q->next == NULL) {
		Linklist *q = (Linklist*)malloc(sizeof(Linklist));
		if (q == NULL) {
			printf("error\n");
			return;
		}
	}
}