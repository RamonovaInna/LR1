#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void f();

double x, result;

void main()
{
	x = 5;
	f();
	cout << "Result 1 = " << result << "\n";
	cout << "Inserts X" << "\n";
	cin >> x;
	f();
	cout << "Result 2 =  " << result;
}
