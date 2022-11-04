// Lab_04_1.cpp
// Зборовська Вікторія
// Лабораторна робота № 4.1
// Цикли
// Варіант 9
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double i, S;

	S = 0;
	i = 1;

	while (i <= 15)
	{
		S += ((sin(10 * i) + cos(10/i))/sqrt(i)) ;
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;

	do {
		S += ((sin(10 * i) + cos(10 / i)) / sqrt(i));
		i++;
	} while (i <=  15);
	cout << S << endl;

	S = 0;
	for (i = 1; i <= 15; i++)
	{
		S += ((sin(10 * i) + cos(10 / i)) / sqrt(i));
	}
	cout << S << endl;

	S = 0;
	for (i = 15; i >= 1; i--)
	{
		S += ((sin(10 * i) + cos(10 / i)) / sqrt(i));
	}
	cout << S << endl;
	return 0;

}

