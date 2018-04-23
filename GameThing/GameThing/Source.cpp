

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int tries = 0;

	

	bool error = false;

	enum statusTypes { NADA, HIGH, LOW, CORRECT };
	int status = NADA;

	int min = 0;
	int max = 101;

	int guess = rand() % 100 + 1;
	
	
	int toGuess;

	cout << "01010111 01100101 01101100 01100011 01101111 01101101 01100101 00100001\n";

	cout << "Welcome to Guess My Number\n";
	cout << "Computer vs Player Edition\n\n";

	cout << "Please enter your number (between 1 & 100): ";
	cin >> toGuess;

	cin.get();

	while (status != CORRECT)
	{
		++tries;

		cout << "Computer's Guess: " << guess << "\n";
		

		cout << "Press ENTER to continue..." << endl;
		cin.get();

		

		if (guess < toGuess)
		{
			status = LOW;
			
		}
		else if (guess > toGuess)
		{
			status = HIGH;
			
		}
		else if (guess == toGuess)
		{
			status = CORRECT;
			
		}
		else
		{
			error = true;
			cout << "Uh, something went wrong.\n";
			cout << "Here's the current values: \n";
			cout << "Status: " << status << endl;
			cout << "toGuess: " << toGuess << endl;
			cout << "guess: " << guess << endl;
			cout << "tries: " << tries << endl;
		}

		

		if (status == HIGH)
		{
			max = guess;

			

			do
			{
				guess = rand() % 100 + 1;

			} while (guess > max || guess < min);

		}
		else if (status == LOW)
		{
			min = guess;

			

			do
			{
				guess = rand() % 100 + 1;
			} while (guess > max || guess < min);

		}

		else if (status == CORRECT)
		{
			cout << "Computer Guessed It!\n";
			cout << "The guess was " << guess << "\n";
			cout << "And it took " << tries << " tries!\n";
			cout << "Thanks for playing!" << endl;
		}

		else
		{
			error = true;
			cout << "Uh, something went wrong.\n";
			cout << "Here's the current values: \n";
			cout << "Status: " << status << endl;
			cout << "toGuess: " << toGuess << endl;
			cout << "guess: " << guess << endl;
			cout << "tries: " << tries << endl;
		}


	}
	system("pause");
	return 0;
}