#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "\ntWelcome to Numberguess game!"
		 << endl;
	cout << "Guess a number between 1 and 100. "
		 << endl;

	while (true)
	{

		srand(time(0));
		int random = 1 + ((rand()) / 2 % 100);
		int i = 0;

		for (i = 0; i <= 100 && i != 999; i++)
		{

			cout << "\n\nEnter the number: ";
			cin >> num;

			if (num == random)
			{
				cout << "congrats You won, "
					 << num
					 << " is the secret number" << endl;
				i = 999;
			}
			else
			{
				cout << num
					 << " is not the right number\n";
				if (num > random)
				{
					cout << "The secret number is smaller than the number"
							" you have entered "
						 << endl;
				}
				else
				{
					cout << "The secret number is greater than the number "
							" you have entered "
						 << endl;
				}
			}
		}
	}
	return 0;
}
