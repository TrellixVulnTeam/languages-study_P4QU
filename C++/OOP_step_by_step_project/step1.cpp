#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct account
{
	int num;
	char name[16];
	int remain;
}acnt;

void menu()
{
	cout << "-----Menu-----\n";
	cout << "1.���� ����\n";
	cout << "2.�Ա�\n";
	cout << "3.���\n";
	cout << "4.�������� ��ü ���\n";
	cout << "5.���α׷� ����\n";
}
int createacnt(int now, acnt *ptrarr)
{
	cout << "[���� ����]\n";
	(ptrarr+now) = (acnt*)malloc(sizeof(acnt));
	cin >> (ptrarr + now)->num >> (ptrarr + now)->name >> (ptrarr + now)->remain;
	return now;
}
void deposit(int max, acnt *ptrarr)
{
	int inputnum;
	char inputmoney;
	cout << "[�Ա�]\n";
	cout << "����ID:";
	cin >> inputnum;
	cout << "�Աݾ�\n";
	cin >> inputmoney;
	for (int i = 0; i<max; i++)
	{
		((ptrarr + i)->num == inputnum);
		(ptrarr + i)->remain += inputmoney;
	}
	cout << "�ԱݿϷ�\n";
}
void withdrawl(int max, acnt *ptrarr)
{
	int inputnum;
	char inputmoney;
	cout << "[���]\n";
	cout << "����ID:";
	cin >> inputnum;
	cout << "��ݾ�\n";
	cin >> inputmoney;
	for (int i = 0; i<max; i++)
	{
		((ptrarr + i)->num == inputnum);
		(ptrarr + i)->remain -= inputmoney;
	}
	cout << "��ݿϷ�\n";
}
void printacnt(int max, acnt *ptrarr)
{
	for (int i = 0; i <= max; i++)
	{
		cout << "����ID:" << (ptrarr + i)->num;
		cout << "�̸�:" << (ptrarr + i)->name;
		cout << "�ܾ�:" << (ptrarr + i)->remain;
	}
}
int main(void)
{
	int input;
	acnt *arr = (acnt*)malloc(sizeof(acnt));
	int max;
	for (int i = 0; ; i++)
	{
		menu();
		cin >> input;
		if (input == 5) break;
		switch (input)
		{
		case 1:
			max = createacnt(i, arr);	break;
		case 2:
			deposit(max, arr);		break;
		case 3:
			withdrawl(max, arr);		break;
		case 4:
			printacnt(max, arr);		break;
		}
	}
}
