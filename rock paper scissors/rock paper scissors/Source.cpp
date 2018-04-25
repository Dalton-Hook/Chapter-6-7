//Dalton Hook
// 4/24/2018
// Rock Paper Scissors

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>

int main(){

	char ch;
	int win = 0;
	int tie = 0;
	int lose = 0;
	do{
		int choice;
		std::cout << "Lets play Rock, Paper, Scissors!" << std::endl;
		
		std::cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << std::endl;
		std::cin >> choice;
		int ai = rand() % 3 + 1;
		std::cout << "The computer chose: " << ai << std::endl;
		if (choice == 1 && ai == 1){
			std::cout << "Rock smashes Rock creating an inferno although for this game it's a tie!" << std::endl;
			tie++;
		}
		else if (choice == 1 && ai == 2){
			std::cout << "Rock is covered by Paper the computer wins!." << std::endl;
			lose++;
		}
		else if (choice == 1 && ai == 3){
			std::cout << "Rock grinds Scissors into dust you win!" << std::endl;
			win++;
		}
		else if (choice == 2 && ai == 1){
			std::cout << "Paper beats rock for some odd reason you win!" << std::endl;
			win++;
		}
		else if (choice == 2 && ai == 2){
			std::cout << "Paper hits Paper its a tie!" << std::endl;
			tie++;
		}
		else if (choice == 2 && ai == 3){
			std::cout << "Paper may cut you but it cant cut Scissors the computer wins!" << std::endl;
			lose++;
		}
		else if (choice == 3 && ai == 1){
			std::cout << "Scissors gets beaten by Rock computer wins!" << std::endl;
			lose++;
		}
		else if (choice == 3 && ai == 2){
			std::cout << "Scissors cuts Paper you win!" << std::endl;
			win++;
		}
		else if (choice == 3 && ai == 3){
			std::cout << "Scissors is Scissors its a tie!" << std::endl;
			tie++;
		}
		else{
			std::cout << "You didn't select 1, 2, or 3" << std::endl;
		}
		std::cout << "Wins: " << win << std::endl;
		std::cout << "Ties:" << tie << std::endl;
		std::cout << "Losses:" << lose << std::endl;
		std::cout << "do you want to play again? Y(yes) N (No)" << std::endl;
		std::cin >> ch;
		system("CLS");
	} while (ch == 'Y' || ch == 'y');

	system("pause");
	return 0;
}

