
#include <iostream>
using namespace std;

void multipl(double a, double b, double &p) // фун-я принимает три аргумента, перемножает два из них, значение присваивает третьему.
{
	p = a * b;
}

int main()
{
	double a, b, p = 0;
	cout << "Enter a,b: \n";
	cin >> a >> b;
	multipl(a, b, p);
	cout << p;
}