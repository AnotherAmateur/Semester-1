
//Вывести номер первого отрицательного из n введенных чисел

#include <iostream>
using namespace std;

int main()
{
	double a;
	int n;
	cout << "Enter n: ";
	cin >> n; 
	cout << "numbers:\n";
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		if (a < 0)
		{
			printf(" i =  %d", i); break;
		}
	}
}