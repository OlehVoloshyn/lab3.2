// Lab_03_2.cpp
// < ������� ���� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 3
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// ����� 1: ������������ � ���������� ����
	if (a < 0 && c != 0)
		F = (a * (x * x) + b + x + c);
	if (a > 0 && c == 0)
		F = (-(a) / (x + c));
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = a * (x + c);
	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ������ ����
	if (a < 0 && c != 0)
		F = (a * (x * x) + b + x + c);
	else
		if (a > 0 && c == 0)
			F = (-(a) / (x + c));
		else
			(!(x < 0 && b != 0) && !(x > 0 && b == 0));
	cout << "2) F = " << F << endl;

	cin.get();
	return 0;




}