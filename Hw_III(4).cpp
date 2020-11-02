#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double fun(double m1, double m2, double r) // фун-ия возвращает радиус окружности в квадрате
{
	const double G = 6.67e-11;
	double F;
	F = G * m1 * m2 / (r * r);
	return F;
}

int main()
{
	double m1, m2, m3, r1, r2, r3, F1, F2, F3;
	cout << "m1, m2, m3 (kg) : \n";
	cin >> m1 >> m2 >> m3;
	cout << "r1(m1m2), r2(m2m3), r3(m1m3) (metrs) : \n";
	cin >> r1 >> r2 >> r3;
	F1 = fun(m1, m2, r1);
	F2 = fun(m2, m3, r2);
	F3 = fun(m1, m3, r3);
	if (F1 < F2) swap(F1, F2);
	if (F1 < F3) swap(F1, F3);
	if (F2 < F3) swap(F2, F3);
	cout << "F1 = " << F1 << endl << "F2 = " << F2;
}