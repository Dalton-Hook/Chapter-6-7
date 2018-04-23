	#include <iostream>
	#include <time.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <random>
	int main()
	{
		int numberChoice;
		int secret;
		int count = 0;
	int easyLevel1;
	int mediumLevel2;
	int hardLevel3;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	//easy
	switch (easyLevel1)
	{
	case 1:

		break;
		easyLevel1;

		do{
			std::cout << "Please pick a number between 1 - 10" << std::endl;
			std::cin >> numberChoice;
			if (numberChoice > secret)
			{
				std::cout << "The number you chose is to high" << std::endl;
				count = count + 1;

			}
			else if (numberChoice < secret)
			{
				std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
				count = count + 1;
			}
		} while (numberChoice != secret);
		std::cout << "Congrats! " << std::endl;
		std::cout << "It took you " << count << " tries to get it correct." << std::endl;
	}
	switch (mediumLevel2)
	{
	case 2:

		break;
		mediumLevel2;

		do{
			std::cout << "Please pick a number between 1 - 10" << std::endl;
			std::cin >> numberChoice;
			if (numberChoice > secret)
			{
				std::cout << "The number you chose is to high" << std::endl;
				count = count + 1;

			}
			else if (numberChoice < secret)
			{
				std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
				count = count + 1;
			}
		} while (numberChoice != secret);
		std::cout << "Congrats! " << std::endl;
		std::cout << "It took you " << count << " tries to get it correct." << std::endl;
	}
	switch (hardLevel3)
	{
	case 3:

		break;
		hardLevel3;

		do{
			std::cout << "Please pick a number between 1 - 10" << std::endl;
			std::cin >> numberChoice;
			if (numberChoice > secret)
			{
				std::cout << "The number you chose is to high" << std::endl;
				count = count + 1;

			}
			else if (numberChoice < secret)
			{
				std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
				count = count + 1;
			}
		} while (numberChoice != secret);
		std::cout << "Congrats! " << std::endl;
		std::cout << "It took you " << count << " tries to get it correct." << std::endl;
	}
	system("pause");
	return 0;
}