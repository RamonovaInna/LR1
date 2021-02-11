#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


double f(double x) {
	return (sqrt((x + 3) / (x - 3)));
}
void main()
{
	double x;
	x = 5;
	cout << "Result 1 = " << f(x) << "\n";
	cout << "Inserts X" << "\n";
	cin >> x;
	cout << "Result 2 =  " << f(x);
}