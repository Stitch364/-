#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
//���ļ������浽������
Linklist* open_medicine() {
	//����ͷָ��͸���ָ��
	Linklist* p, * q, * head;
	head = (Linklist*)malloc(sizeof(Linklist));
	if (head == NULL ) {
		printf("��������ˣ�");
		return NULL;
	}

	//�����ļ�ָ��
	FILE* fp;
	//��ģʽ���ļ�
	fp = fopen("C:\\Users\\13961\\Desktop\\medicine.txt", "r");
	//�ж��ļ��Ƿ�ɹ���
	//��ʧ�����˳�
	if (fp == NULL) {
		printf("��ȡ�ļ�������������˳���");
		exit(1);
	}
	//�򿪳ɹ�
	if (fp != NULL) {

		//�����������ļ��е�ҩƷ��Ϣд��������
		head->next = NULL;
		q = head;
		while (!feof(fp))
		{
			p = (Linklist*)malloc(sizeof(Linklist));
			if (p == NULL) {
				printf("��������ˣ�");
				return NULL;
			}


			fscanf(fp, "ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
				, p->name, &p->sum, &p->price, p->production, p->time);
			q->next = p;
			q = p;
		}
		q->next = NULL;
		//�ر��ļ�
		fclose(fp);
		printf("\n�ļ���Ϣ�Ѷ���\n");
	}
	//���������ͷָ��
	return head;
}