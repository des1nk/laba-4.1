// laba 4.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float A1, A2, B1, B2, C1, C2, x, y;
	cout << "A1=";
	cin >> A1;
	cout << "A2=";
	cin >> A2;
	cout << "B1=";
	cin >> B1;
	cout << "B2=";
	cin >> B2;
	cout << "C1=";
	cin >> C1;
	cout << "C2=";
	cin >> C2;
	y = (C1 * A2 - C2 * A1) / (B1 * A2 - B2 * A1);
	x = (C1 - B1 * y) / A1;
	cout << "-----\nx=" << x << "\n";
	cout << "y=" << y;
	cout << "\n";
	system("pause");
}
