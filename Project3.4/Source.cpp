// Lab_03_4.cpp
// Тхої Ольги Северинівни
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.28
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= R && y >= -x && y>=0) ||
		(y >= -R && y<= x && y<=0) ||
		(y*y <= R*R - x*x && -y >= -x && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}