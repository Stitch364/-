//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
//
//#include<stdio.h>
//int main() {
//	//�򿪣�д�룬��ȡ���رգ���λ
//
//	//���ļ�
//	// �����ļ�ָ��
//	//�������ļ���ַ����ģʽ
//	//r ����w д�������д����a+ ׷��
//	FILE* fp;
//
//	fp = fopen("C:\\Users\\13961\\Desktop\\test.txt","a+");
//	if (fp == NULL) {
//		printf("���ļ�ʧ��\n");
//		return 0;
//	}
//
//	////����
//	////fgetc()  ��ȡһ���ַ�
//	////û�ر�֮ǰ���λ�ò���
//	//char ch = fgetc(fp);
//	//printf("%c\n", ch);
//	//ch = fgetc(fp);
//	//printf("%c\n", ch);
//	//ch = fgetc(fp);
//	//printf("%c\n", ch);
//
//	////fgets()��һ��
//	////�ļ�ָ���ƶ�����һ�У����ȡ��ĩ���з�
//	char p[200] ;	//����
//	////fgets(p, 200, fp);
//	////printf("%s", p);
//	////fgets(p, 200, fp);
//	////printf("%s\n", p);
//
//	//while (fgets(p, 200, fp)) {
//	//	printf("%s", p);
//	//}
//
//
//
//	////fread()����
//	//int n = fread(p, 1, 20, fp);//���ض�ȡ���ַ���
//	//p[n] = '\0';	//���������
//	//printf("%s", p);
//
//
//
//	////д��һ���ַ�
//	//fputc('A', fp);
//
//	////д���ַ���
//	//char* str = "hello world!\n";
//	////fputs(str, fp);
//
//
//	////fwrite����
//	//int num = 12345;
//	//fwrite(&num, sizeof(num), 1, fp);
//	////fwrite(str, 1, strlen(str), fp);
//
//
//	
//
//
//	//�ļ���궨λ
//	rewind(fp);//�ļ�ָ�����õ��ļ���ͷ
//
//	fseek(fp, 10, SEEK_SET);
//	//��ͷ��10���ֽ�λ�ÿ�ʼ
//	//����ռ2���ֽ�
//	// ������ǰ����������
//	//SEEK_CUR��ǰλ��
//	//SEEK_ENDĩβ
//	
//
//	//��ȡ�ļ����һ��
//	fseek(fp, 0, SEEK_END);
//
//	
//
//
//	//�ر��ļ�
//	fclose(fp);
//
//	return 0;
//}