#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//����Ϣ���浽�ļ���
void keep_medicine(Linklist* head) {
	//���������ͷָ��
	Linklist* p;
	p = head->next;
	//����Ϊ��
	if (p == NULL) {
		printf("��ǰû���κ�ҩƷ��Ϣ��\n");
		return;
	}
	//ѭ���������е���Ϣ�������ļ���
	while (p != NULL) {
		//���ļ�
		FILE* medicine = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "a");
		fprintf(medicine, "ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n",p->id
		,p->name,p->sum,p->price,p->production,p->time);
		//����һ��ҩƷ��Ϣ�����ļ��ر��ļ�һ��
		// ����Ƚ��ȶ�
		//�ر��ļ�
		fclose(medicine);

		p = p->next;
	}
	//����  ����ɹ�
	printf("����ɹ���\n");
}