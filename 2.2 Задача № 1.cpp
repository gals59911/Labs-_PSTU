#include <iostream>
using namespace std;
int main()
{
	float t;
	setlocale(LC_ALL, "Rus");
	cout << "������� ����������� � �������� �� ���������� " << endl;
	cin >> t;
	float c;
	c = 5.0 / 9.0 * (t - 32.0);
	cout << c;
}