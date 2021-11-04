#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите число галонов" << endl;
	int x;
	float  galon;
	float gal = 7.481;
	cin >> x;
	galon =x/gal;
	cout << galon << endl;
}