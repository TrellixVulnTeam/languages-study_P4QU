#include <iostream>
int main(void)
{
	int pay;
	while(1){
	std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
	std::cin>>pay;
	if(pay==-1)
	{
		std::cout<<"���α׷��� �����մϴ�.";
		break;
	}
	std::cout<<"�̹� �� �޿�:"<<50+pay*0.12<<"����\n";
	}
}
