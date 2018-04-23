
#include <iostream>
#include <string>
int main()
{

		int Game = 0;
		double Easy, Medium, Hard;
		std::string bookOwner;
		std::cout << "PLease neter what level you wish to play Easy, Medium or Hard" << std::endl;
		std::cin >> Game;

		switch (Game)
		{
		case Easy:
			Game();
			break;
		}
		if (bookOwner == "Invalid")
		{
			std::cout << "Invalid";
		}

		else std::cout << bookOwner << std::endl;
		std::cout << bookOwner;

	system("pause");
	return 0;
}