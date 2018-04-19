//Date: 4/19/2018

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int numChoice;
	int secret;
	int count = 0;

	srand(time(NULL));

	secret = rand() % 100 + 1;

	do{
		std::cout << "please pick a number between 1- 100" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "the number you have chose is too high" << std::endl;
		}

		else if (numChoice < secret)

		{

			std::cout << "the number you chose is too low" << std::endl;
		}

	} while (numChoice != secret);

	std::cout << "Congradulations" << "it took you" << count << "tries" << std::endl;

	system("pause");
	return 0;

}