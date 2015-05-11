#include <iostream>
using namespace std;

float conv(float f)
{
	float c;
	c = 5*(f-32)/9;
	return c;
}

int main()
{
	int x, y;
	cout << "Temperatura: ";
	cin >> x;
	cout << "conversion: " << conv(x) << endl;
	y = conv(x);
	if (y <= 0)
	{
		cout << "El estado de agua es solido" << endl;
	} else if (0 < y && y < 100)
	{
		cout << "El estado del agua es liquido" << endl;
	} else if (y >= 100)
	{
		cout << "El estado del agua es gaseoso" << endl;
	}
	return 0;
}
