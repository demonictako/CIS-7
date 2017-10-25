#include <iostream>

using namespace std;

int Exhaustion(double);

int main()
{
	double num;
	double guess;

	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Now guess how many prime numbers are between 0 and " << num << endl;
	cin >> guess;

	if (Exhaustion(num) == guess)
	{
		cout << "You are correct" << endl;
	}
	else
	{
		cout << "You are incorrect" << endl;
	}
	
	return 0; 
}

int Exhaustion(double num)
{
	bool isPrime;
	int primes = 0;
	for (int i = 1; i <= num; i++)
	{
		//isPrime = true;

		if (i == 1 || i == 2 || i == 3)
		{
			cout << i << " ";
			isPrime = true;
		}
		for (int j = 2; (j*j) <= i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
			else if ((j+ 1) > sqrt(i))	
			{
				cout << i << " ";
				isPrime = true;
			}

		}
		if (isPrime)
		{
			primes ++;
		}
	}
	cout << "\n" << primes << " numbers are prime" << endl;
	return primes;
}