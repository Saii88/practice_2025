#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, x, y;
	setlocale(LC_ALL, "");
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	a = ((pow(x, 2) * pow(y, 2)) / 10) * (pow(x + y, 2) / ((x - y) * 10));
	b = ((x + 25 * y) * sin(pow(x, 2))) / 10 + sqrt((10 - pow(x, 2)) * (y + 5));
	c = sin(pow(x + 10, 2)) + exp(x / (x - 5));
	cout << "Результат: \t a = " << a << endl;
	cout << "Результат: \t b = " << b << endl;
	cout << "Результат: \t c = " << c << endl;
}
