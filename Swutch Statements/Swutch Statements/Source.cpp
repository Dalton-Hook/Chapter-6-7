//Switch statements
//Author: Dalton Hook
//Date:4/19/2018

#include <iostream>
#include <string>
int main()
{
	int bookScanID = 0;
	std::string bookOwner;
	std::cout << "Book ID Number pleae enter here" <<
		std::endl;
	std::cin >> bookScanID;

	switch (bookScanID)
	{
	case 1:
		bookOwner = "Dalton";
		break;
	case 277346:
		bookOwner = "Brosuis";
		break;
	case 277343:
		bookOwner = "Aaron";
		break;
	case 277362:
		bookOwner = "Shawn";
		break;
	case 277357:
		bookOwner = "KaNe";
		break;
	default:
		bookOwner = "Ivalid";
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