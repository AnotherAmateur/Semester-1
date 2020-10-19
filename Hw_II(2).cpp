
//Вывести все кратные 3 числа из отрезка от а до 100

#include <iostream>
using namespace std;

int main()
{
	short a,i; 
	const short N = 100;
	cout << "Enter a (a < 100): ";
	cin >> a;
	for (; a < N; ++a)
		if (a % 3 == 0)
			cout << a << endl;
}