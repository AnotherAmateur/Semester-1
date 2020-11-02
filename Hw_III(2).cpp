
#include <iostream>
using namespace std;

bool func(float a, float b, float c) // фун-ия определяет, можно ли построить треугольник из принимаемых параметров
{
	if (a + b >= c && a + c >= b && b + c >= a) 
		return 1;
	else return 0;
}

int main()
{
	float a, b, c;
	cout << "Enter a,b,c: \n";
	cin >> a >> b >> c;
	cout << (func(a, b, c) ? "true" : "false");
}
// a = 3 b = 4 c = 5 - true
// a = 2 b = 4 c = 8 - false