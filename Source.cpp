#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S, M;
	int n, i;
	P = 1;
	n = 1;
	while (n <= 10)
	{
		S = 0;
		i = 1;
		while (i <= n)

		{
			S += i * i;
			i++;

		}
		M = 0;
		i = n;
		while (i <= 10)

		{
			M += i * i;
			i++;

		}
		P *= (S + M) / n;
		n++;
	}
	cout << P << endl;

	P = 1;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += i * i;
			i++;
		} while (i <= n);
		M = 0;
		i = n;
		while (i <= 10)

		{
			M += i * i;
			i++;

		}
		P *= (S + M) / n;
		n++;

	} while (n <= 10);

	cout << P << endl;
	P = 1;
	for (n = 1; n <= 10; n++)

	{
		S = 0;
		for (i = 1; i <= n; i++)
		{
			S += i * i;

		}
		M = 0;
		for (i = n; i <= 10; i++)
		{
			M += i * i;

		}
		P *= (S + M) / n;

	}
	cout << P << endl;
	P = 1;

	for (n = 10; n >= 1; n--)

	{
		S = 0;
		for (i = n; i >= 1; i--)
		{
			S += i * i;

		}
		M = 0;
		for (i = 10; i >= n; i--)

		{
			M += i * i;

		}
		P *= (S + M) / n;
	}
	cout << P << endl;
	return 0;
}