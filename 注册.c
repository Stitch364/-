#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include "medicine.h"


//ע��
void zhuce() {

	char Name[25];//�û���
	char password1[25];//����
	char password2[25];
	FILE* Fname;	//������ļ�
	struct user a;
	int i = 0, flag;
	char ch;
	while (1) {
		printf("     �û�ע��    \n");
		printf("������Ҫע����û�����\n");
		scanf("%s", &Name[0]);

		//�ж��û�������û����Ƿ����Ҫ��
		while (strlen(Name) > 20) {
			printf("������û������������������룡\n");
			//����������������
			scanf("%s", &Name[0]);
		}

		//�򿪴����û���Ϣ���ļ�
		Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");

		//����ļ������ڣ��򴴽�
		if (Fname == NULL) {
			//дģʽ������ļ��������򴴽��ļ�
			Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "w");
			fclose(Fname);
			//��ģʽ���ļ�
			Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "r");
		}
		flag = 0;
		while (!feof(Fname)) {
			//��ʽ�����뺯��
			fscanf(Fname, "%s %s\n", a.username, a.usermima);
			//������ע����û������Ѿ�ע���û����Ƚ�
			//�����û����Ƿ��ظ�
			if (strcmp(a.username, Name) == 0) {
				flag = 1;
				break;
			}

		}
		fclose(Fname);
		if (flag) {
			printf("���û����Ѵ��ڣ�\n");
			//˯��1��
			Sleep(2000);
			//����
			system("cls");
			//���»ص���ʼ����
			first();
		}
		else {
			while (1) {
				//��ʽ��ȡ�ַ�
				i = 0;
				printf("������Ҫ���õ����룺\n");
				while ((password1[i] = _getch()) != '\r') {
					if (password1[i] == '\b' && i > 0) {
						printf("\b \b");
						i--;
					}
					else {
						printf("*");
						i++;
					}
				}
				password1[i] = '\0';
				i = 0;
				printf("\n���ٴ���������:\n");
				while ((password2[i] = _getch()) != '\r') {
					if (password2[i] == '\b' && i > 0) {
						printf("\b \b");
						i--;
					}
					else {
						printf("*");
						i++;
					}
				}
				password2[i] = '\0';
				i = 0;
				//������������������ж������Ƿ�����һ��
				if (strcmp(password1, password2) == 0) {
					Fname = fopen("C:\\Users\\13961\\Desktop\\Name.txt", "a");
					fprintf(Fname, "%s %s\n", Name, password1);
					fclose(Fname);
					break;
				}
				else {
					printf("\n�������벻һ�£��������������롣\n");
				}
			}

		}
		printf("\nע��ɹ�!\n");
		printf("����������ҳ��\n");
		Sleep(3000);
		break;
	}
	system("cls");
	//����������
	first();
}
