// II (1) - Вывести числа от суммы цифр введенного двузначного числа до произведения его цифр

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int x, sum, mul, M;
	cin >> x;
	sum = abs(x / 10 + x % 10);
	mul = (x / 10) * (x % 10);
	 
	if (mul < sum) 
	{
		M = mul; 
		mul = sum;
	}
		else M = sum;

	while (M <= mul) 
	{
		cout << M << endl;
		++M;
	}
	cout << "end";
}