#include <iostream>
using namespace std;
int main()
{
	int h1,m1,s1,h2,s2,m2,h3,m3,s3,prom;
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите начальный промежуток времени " << endl;
	cin >>h1>>m1>>s1;
	cout << "¬ведите конечный промежуток времени " << endl;
	cin >> h2 >> s2 >> m2;
	prom = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
	h3 =prom/3600 ;
	s3 =(prom-(h3*3600))/60;
	m3 =prom -(h3*3600)- (s3*60);
	cout << h3<<":" << m3<<":" << s3;
}