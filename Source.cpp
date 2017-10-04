#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	string b = " ";
	char c = ' ';

	while (c != 'q')
	{
		cout << "Enter an Integer or q to exit" << endl;

		cin >> b;
		c = b[0];
		if (c == 'q')
		{
			return 0;
		}
		else
		{
			a = stoi(b);
		}

		if (a % 2 == 0)
		{
			cout << "Even\n" << endl;
		}
		else
		{
			cout << "Odd\n" << endl;
		}
	}
	return 0;
}