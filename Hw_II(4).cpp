
//4) Считать числа, пока не встретится квадрат первого введенного, затем вычислить среднее арифметическое этих чисел

#include <iostream>
using namespace std;

int main()
{
    float a1, a, average;
    int i = 1;
    cout << "Enter numbers:\n";
    cin >> a;
    float sum = a, mult = a*a;

    while (a != mult)
    {
        cin >> a;
        sum += a;
        ++i;
    }
    average = sum / i;
    printf("The arithmetic mean = %f", average);
}

//5 34 26 3 6 25 = 16.5
//9 3 0 -125 81 = -6.4
