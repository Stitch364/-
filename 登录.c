#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"

//����˼·ͬע��
void denglu() {
	FILE* Fname;
	int i = 0;
	char ch;
	struct user a;
	char password[20];
	char name[20];
	int	flag = 0;

	printf("     �û���¼    \n");
	do {
		Fname= fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");
		printf("\n�������û�����\n");

		scanf("%s", &name[0]);
		//�ж��û�������û����Ƿ����Ҫ��
		while (strlen(name) > 20) {
			printf("������û������������������룡\n");
			//����������������
			scanf("%s", &name[0]);
		}
		printf("\n���������룺\n");
		//��ʽ��������
		i = 0;
		while ((password[i] = _getch()) != '\r') {
			if (password[i] == '\b' && i > 0) {
				printf("\b \b");
				i--;
			}
			else {
				printf("*");
				i++;
			}
		}
		password[i] = '\0';
		while (!feof(Fname)) {
			fscanf(Fname, "%s %s\n", a.username, a.usermima);
			if (strcmp(name, a.username) == 0 && strcmp(password, a.username) == 0) {
				//�û��������붼��ȷ
				flag = 1;
				break;
			}
		}
		fclose(Fname);
		if (flag) {
			system("cls");
			printf("��¼�ɹ���\n");
			Sleep(3000);
			system("cls");
			//��ת����ҳ��

			break;
		}
		else {
			printf("�������\n\n");
			printf("�����½���ѡ��\n");
			Sleep(2000);
			system("cls");
			first();
		}
	} while (0);

}