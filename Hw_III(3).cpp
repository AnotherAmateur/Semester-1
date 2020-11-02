#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double square(double P) // фун-ия возвращает квадрат стороны квадрата
{
	return (P / 4) * (P / 4);
}

double circle(double S) // фун-ия возвращает радиус окружности в квадрате
{
	return S / M_PI;
}

int main()
{
	double S, P, eps{ 1e-6 };
	cout << "Enter S(circle), P(square) : \n";
	cin >> S >> P;
	if (S > eps && P > eps)
		if (circle(S) == square(P))
			cout << "diametr = side";
		else
			cout << (circle(S) > square(P) ? "diametr > side" : "side > diametr");
	else cout << "incorrect values";
}