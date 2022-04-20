#include "Point.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1.0, 1.0);
	Point b(1.0, 1.0);
	cout << a++ << endl;
	cout << a-- << endl;
	cout << ++a << endl;
	cout << --a << endl;

	Point x;
	cout << "Input point  " << endl;
	cin >> x;
	cout << " ������ ����������: " << x.Angle() << endl;
	cout << " ³������ �� ������� ���������: " << x.Origin() << endl;
	Point y;
	cout << "Input point  " << endl;
	cin >> y;
	cout << " ������ ����������: " << y.Angle() << endl;
	cout << " ³������ �� ������� ���������: " << y.Origin() << endl;

	if (x == y)
	{
		cout << "��� ����� � ���\n";
	}
	if (x != y)
	{
		cout << "��� ����� �� � ���\n";
	}


	cin.get();
	return 0;
}
