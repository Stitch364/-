#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"
void change_medicine(Linklist* head) {
	Linklist* p, * q;
	q = head;
	int m;
	printf("������Ҫ�޸ĵ�ҩƷ��Ϣ��\n");
	printf("ҩƷ��ţ�");
	scanf("%s", &n);
	while (q->next != NULL) {
		if (strcmp(q->next->id, n) == 0) {
			p = q->next;
			printf("�Ѳ��ҵ���ҩƷ��Ϣ��\n");
			printf( "ҩƷ���:%s  ����:%s  ʣ����:%d  �۸�:%d  ��������:%s  ������:%s\n", p->id
				, p->name, p->sum, p->price, p->production, p->time);
			printf("----------------------------------");
			printf("��ѡ����Ҫ���ĵ�ѡ�\n");
			printf("(1) ҩƷ���\n");
			printf("(2) ҩƷ����\n");
			printf("(3) ʣ����\n");
			printf("(4) �۸�\n");
			printf("(5) ��������\n");
			printf("(6) ������\n");
			printf("(7) ȫ��\n");
			printf("(0) ����\n");
			scanf("%d", &m);
			while (m > 7 || m < 0) {
				printf("�������������\n���������룺");
				scanf("%d", &m);
			}

			switch (m)
			{
			case 1:
				printf("\n��������ĺ��ҩƷ��ţ�");
				scanf("%s", p->id);
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 2:
				printf("��������ĺ��ҩƷ���֣�");
				scanf("%s", p->name);
				printf("\n");
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 3:
				printf("��������ĺ��ҩƷʣ������");
				scanf("%d", &p->sum);
				printf("\n");
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 4:
				printf("��������ĺ��ҩƷ�۸�");
				scanf("%d", &p->price);
				printf("\n");
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 5:
				printf("��������ĺ��ҩƷ�������ڣ�");
				scanf("%s", p->production);
				printf("\n");
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 6:
				printf("��������ĺ��ҩƷ�����ڣ�");
				scanf("%s", p->time);
				printf("\n");
				printf("��Ϣ�޸ĳɹ���\n");
				break;
			case 7:
				printf("��������ĺ��ҩƷȫ����Ϣ��\n");
				printf("ҩƷ��ţ�");
				scanf("%s", p->id);
				printf("\n");
				printf("ҩƷ���֣�");
				scanf("%s", p->name);
				printf("\n");
				printf("ҩƷ������");
				scanf("%d", &p->sum);
				printf("\n");
				printf("ҩƷ�۸�");
				scanf("%d", &p->price);
				printf("\n");
				printf("ҩƷ�������ڣ�");
				scanf("%s", p->production);
				printf("\n");
				printf("ҩƷ�����ڣ�");
				scanf("%s", p->time);
				printf("\n");
				printf("ҩƷ��ȫ����Ϣ���޸ģ�\n");
				break;
			case 0:
				printf("�����˳���");
				Sleep(2000);
				system("cls");
				return;
			default:
				break;
			}
			return;
		}
		//ָ�����
		q = q->next;
	}

	//û�ҵ�ҩƷ��Ϣ��
	if (q->next == NULL) {
		printf("û�д�ҩƷ����Ϣ!\n");
	}
	return;
}