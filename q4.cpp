#include <iostream>
using namespace std;

int main()
{
	unsigned int o,i,j,n;
	cout << "Tamaño del triangulo: ";
	cin >> o;
	n = o + 1;
	for (i = 1; i < n+1; i++)
	{
		for (j = 0; j < i-1; j++)
		{
			cout << "T";
		}
		cout << " " << endl;
	}
	for (i = 1; i < n+1; i++)
	{
		for (j = n-i; j > 0; j--)
		{
			cout << "T";
		}
		cout << " " << endl;
	}
	return 0;
}
