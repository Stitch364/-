#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//����Ϣ��ʽ��д���ļ���
void write_medicine(Linklist* head) {
	//���������ͷָ��
	Linklist* p;
	p = head->next;
	//����Ϊ��
	if (p == NULL) {
		printf("��ǰû���κ�ҩƷ��Ϣ��\n");
		return;
	}
	//����ļ�
	FILE* medicine = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "w");
	fclose(medicine);


	//ѭ���������е���Ϣ�������ļ���
	while (p != NULL) {
		//���ļ�

		medicine = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "a");
		fprintf(medicine, "ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
			, p->name, p->sum, p->price, p->production, p->time);
		//����һ��ҩƷ��Ϣ�����ļ��ر��ļ�һ��
		// ����Ƚ��ȶ�
		//�ر��ļ�
		fclose(medicine);

		p = p->next;
	}

}