#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//�����Ҽ���
void findprice_medicine(Linklist* head){
	Linklist* p, * q;
	q = head;
	printf("������Ҫ��ѯ��ҩƷ��Ϣ:\n");
	printf("������ҩƷ��: ");
	scanf("%s", &na[0]);
	while (q->next != NULL) {
		if (strcmp(q->next->name, na) == 0) {
			p = q->next;
			printf("�۸�%d\n", p->price);
			return;
		}
		q = q->next;
	}
	if (q->next == NULL) {
		printf("\nû�е�ǰ��ҩƷ��Ϣ��\n");
	}
}