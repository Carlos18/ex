#include <iostream>
using namespace std;

long int producto(long int a, long int b)
{
	return (a * b);
}
long int division(long int a, long int b)
{
	return (a / b);
}
long int residuo(long int a, long int b)
{
	return (a % b);
}

int main()
{
	long int x, y;
	cout << "Primer numero: ";
	cin >> x;
	cout << "Segundo numero: ";
	cin >> y;
	cout << "El producto es: " << producto(x,y) << endl;
	cout << "La division entera es: " << division(x,y) << endl;
	cout << "El residuo es: " << residuo(x,y) << endl;
	return 0;
}

