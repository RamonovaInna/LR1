#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double f(double x);

void main()
{
	double x = 5;
	cout << "Result 1 = " << f(x) << "\n";
	cout << "Inserts X" << "\n";
	cin >> x;
	cout << "Result 2 =  " << f(x);
}
double f(double x) {
	return (sqrt((x + 3) / (x - 3)));
}
