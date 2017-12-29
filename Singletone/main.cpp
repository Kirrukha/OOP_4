#include "stdafx.h"
#include "Singleton.h"
#include <iostream>

class Class
{
public:
	Class() = default;

	void PrintCout()
	{
		std::cout << Singleton::Instance().GetCount() << std::endl;
	}
private:
};

int main()
{
	//�������� ���� ��������: ����� ����� �� ������� ��������� � �� �� ����������
	// � ��� ����� �������� �� ����� ����� ���������, ��� ���������� ����������

	//������ ���� count
	Singleton::Instance().SetCount(100);
	std::cout << Singleton::Instance().GetCount() << std::endl;
	//�������� � ������� ���� count
	Singleton::Instance().SetCount(76);
	std::cout << Singleton::Instance().GetCount() << std::endl;
	Class * cl = new Class();
	cl->PrintCout();

	return 0;
}