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
	//основная суть паттерна: класс живет от запуска программы и до ее завершения
	// и еще класс доступен из любой части программы, как глобальная переменная

	//меняем поле count
	Singleton::Instance().SetCount(100);
	std::cout << Singleton::Instance().GetCount() << std::endl;
	//получаем и выводим поле count
	Singleton::Instance().SetCount(76);
	std::cout << Singleton::Instance().GetCount() << std::endl;
	Class * cl = new Class();
	cl->PrintCout();

	return 0;
}