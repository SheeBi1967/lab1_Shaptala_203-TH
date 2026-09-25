#include <iostream>
#include <Windows.h>
#include "MetodCost.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MetodCost a;
	a.Read();
	a.Display();
	cout << "Вартість товару: " << a.cost() << " грн." << endl;
	return 0;
}
