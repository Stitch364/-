#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<windows.h> 
#include<conio.h> 
char n[5];   		//��� 
char na[20]; 	//���� 
int num;    	//ʣ���� 
int pc;     	//�۸� 
typedef struct Medicine {
	char id[5];					//ҩƷ���
	char name[20];			//ҩƷ����
	int sum;				//ʣ���� 
	int  price;				//�۸�
	struct Medicine* next;	//ָ���� 

}Linklist;

struct user
{
	char username[20];
	char usermima[20];
};


//���� 
void first();								   //��¼���� 
void zhuce();								   //ע�� 
void denglu();								   //��¼ 
void control();								   //�������
Linklist* add_medicine(Linklist* head);        //���ҩƷ��Ϣ 
Linklist* delet_medicine(Linklist* head);      //ɾ��ҩƷ��Ϣ 
void change_medicine(Linklist* head);          //�޸�ҩƷ��Ϣ 
void find(Linklist* head);                     //��ѯ 
void findnum_medicine(Linklist* head);         //����ҩƷ��Ϣ(���) 
void findname_medicine(Linklist* head);        //����ҩƷ��Ϣ(����)
void sort(Linklist* head);                     //����
void price_medicine(Linklist* head);           //����ҩƷ�۸��������� 
void number_medicine(Linklist* head);          //����ҩƷʣ�������򣨽��� 
void sum_medicine(Linklist* head);             //ͳ����ҩƷʣ���� 
void keep_medicine(Linklist* head);            //����Ϣ�������ļ��� 
void findprice_medicine(Linklist* head);       //��ѯҩƷ�۸� 
void insert_medicine(Linklist* head);          //����ҩƷ��Ϣ 
Linklist* open_medicine();                     //���ļ� 
void print_medicine(Linklist* head);           //���ҩƷ��Ϣ
