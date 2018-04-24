//Dalton Hook
//4/24/2018

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int tries = 0;

	int toGuess;

	bool error = false;

	enum statusTypes { NADA, HIGH, LOW, CORRECT };
	int status = NADA;

	int min = 0;
	int max = 101;

	int guess = rand() % 100 + 1;




	cout << "Wlecome to my computer guesss game";
	cout << "Where the computer guesses the number the human put in!";

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
			cout << "OOPS SOmehing is wrong.\n";
			cout << "Here are the values: \n";
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
			cout << "Computer Figurd it out in!\n";
			cout << "The Number REALLY was " << guess << "\n";
			cout << "It took mark zuckerburg the robot " << tries << " tries!\n";
			cout << "Thank you  for playing!" << endl;
		}

		else
		{
			error = true;
			cout << "Something is wrong.\n";
			cout << "Here's are the values: \n";
			cout << "Status: " << status << endl;
			cout << "toGuess: " << toGuess << endl;
			cout << "guess: " << guess << endl;
			cout << "tries: " << tries << endl;
		}


	}
	system("pause");
	return 0;
}