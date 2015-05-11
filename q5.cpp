#include <iostream>
using namespace std;

long int  superpower(long int a, long int b)
{
	int c,d;
	d = a;
	while (b>1)
	{
		a = a * d;
		b--;
	}
	return a;
}

int main()
{
	int x,y;
	cout << "Numero: ";
	cin >> x;
	cout << "Potencia: ";
	cin >> y;
	cout << "Resultado: " << superpower(x,y) << endl;
	return 0;
}
