#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string pal="";
	cout << "Escribir: ";
	getline(cin, pal);
	size_t position = pal.find(' ',0);
	while(position!= string::npos)
	{
		pal.erase(position,1);
		size_t newPos = position+1;
		position = pal.find(' ',newPos);
	}
	string newpal = pal;
	reverse (pal.begin(), pal.end());
	if(newpal.compare(pal) == 0)
	{
		cout << "True" << endl;
	} else
	{
		cout << "False" << endl;
	}
	return 0;
}

