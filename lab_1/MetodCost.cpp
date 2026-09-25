#include "MetodCost.h"
#include <iostream>
using namespace std;

void MetodCost::init(double f, double s)
{
	// чи є first додатнім та дробовим числом
	if (f <= 0 || f == static_cast<int>(f))
	{
		cout << endl << "Невірно введена ціна товару." << endl;
		this->first = 0;
		this->second = 0;
		return;
	}
	// чи є second додатнім та цілим числом
	if (s <= 0 || s != static_cast<int>(s))
	{
		cout << endl << "Невірно введена кількість одиниць товару." << endl;
		this->first = 0;
		this->second = 0;
		return;
	}
	// Збереження правильних значень
	this->first = f;
	this->second = s;
}

void MetodCost::Read()
{
	double f, s;
	bool yes = false;

	while (!yes)
	{
		cout << "Введіть ціну товару (додатнє дробове число): ";
		cin >> f;
		cout << "Введіть кількість одиниць товару (додатнє ціле число): ";
		cin >> s;
		this->init(f, s);
		if (this->first == 0 && this->second == 0)
		{
			cout << endl << "Спробуйте ще раз." << endl << endl;
		}
		else
		{
			yes = true;
		}

	}
}

void MetodCost::Display()
{
	cout << "Ціна товару: " << first << endl;
	cout << "Кількість товару: " << second << " шт." << endl;
}

double MetodCost::cost()
{
	return static_cast<double>(first) * second;
}
