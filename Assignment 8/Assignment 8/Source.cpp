#include <iostream>

using namespace std;

int Exhaustion(int, int);

int main()
{
	int num;
	int guess;

	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Now guess how many prime numbers are between 0 and " << num << endl;
	cin >> guess;

	if (Exhaustion(num, guess) == guess)
	{
		cout << "You are correct" << endl;
	}
	else
	{
		cout << "You are incorrect" << endl;
	}
	
	return 0; 
}

int Exhaustion(int num, int guess)
{
	double count = 0;

	/*if (guess == 1)
	{
		return num;
	}
	else if (guess == 2)
	{
		return num;
	}
	*/
	while (count <= num)
	{
		int isPrime = 0;
		for (int i = 2; i <= sqrt(count); i += 2)
		{
			if (i % 2 == 0)
			{
				i++;
			}
			if ((int(count) % i) == 0)
			{
				isPrime = 1;
			}
		}
		if (isPrime == 1)
		{
			count++;
		}
	}
	return count;
}