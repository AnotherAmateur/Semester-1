#include <iostream>
using namespace std;

int main()
{
	double x, min1 = 0, min2 = 0, a = 1, b;
	while (cin >> x)
		if (x > 0) {
			if (!min1)
				min1 = x;
			else if (!min2) {
				min2 = x;
				if (min1 > min2) swap(min1, min2);
			}
			if (min1 > x) {
				min2 = min1;
				min1 = x;
			}
			else if (min2 > x)
				min2 = x;
		}
	
	if (min1 == 0) cout << "There aren't positive numbers";
	else if (min1 == min2)cout << "min1 = min2: " << min2;
	else if (min2 == 0) cout << "There is only one positive number: " << min1;
		else cout << "min2: " << min2;
}
