#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

Linklist* delet_medicine(Linklist* head) {
	Linklist* q, * p;
	q = head;
	printf("������Ҫɾ����ҩƷ��Ϣ��\n");
	printf("ҩƷ��ţ�");
	scanf("%s", &n);
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			q->next = p->next;
			free(p);
			printf("ҩƷ��Ϣɾ���ɹ���\n");
			break;
		}
		q = q->next;
	} 

	if (q->next == NULL) {
		printf("û�е�ǰҩƷ��Ϣ��\n");
	}
	return head;
}