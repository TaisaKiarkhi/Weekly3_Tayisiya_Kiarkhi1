#include <iostream>
#include <ctime>
#include <algorithm>
 
void easy();
void middle();
void hard();
void menu();
int tries{};

int main() {
	menu();
	return 0;
}

void menu() {
	int level{};
	std::cout << "Hello! Choose the lever and guess a number! Type a number to choose." << std::endl;
	std::cout << "1. Easy (1-5)" << std::endl << "2. Middle (1-10)" << std::endl << "3. Hard (1-30)" << std::endl;
	std::cin >> level;
	switch (level) {
	case 1:
		easy();
		break;
	case 2:
		middle();
		break;
	case 3:
		hard();
		break;
	default:
		std::cout << "Wrong selected task, try again";
		std::cin >> level;
		break;
	}
}

void easy() {
	std::cout << "Please, write your number to guess!" << std::endl;	
	srand(time(0));
	int gnumb1 = 0;
	char answer{};
	int score{};
	
	int e = rand() % 5 + 1;
	do {
		int e = rand() % 5 + 1;
		tries++;
		    do {
				
				
        	std::cin >> gnumb1;
			if (gnumb1 == e) { tries++; break; }
			
			else if (gnumb1 < e) {
				std::cout << "Oops, your number is too low, try again!" << std::endl;
				
             }
			else if (gnumb1 > e) {
				std::cout << "Oops, your number is too high! Try again!" << std::endl;
				
			}
		
			
		}   while (gnumb1 != e);
		
		
		std::cout << "Congratulations! You guessed the number from " << tries << " tries!";
		std::cout << "Do you want to play again? Type A for continue and Q to exit the game.";
		std::cin >> answer;
	}      while (std::strchr("Q", answer) == nullptr);
	if (tries < score)  {
		std::cout << "You beated your score!";
	}
	tries++ == score;

}


void middle() {
	std::cout << "Please, write your number to guess!" << std::endl;
	
	
	srand(time(0));
	int gnumb2 = 0;
	char answer2{};
	int tries1{ 1 };
	do {
		int m = rand() % 10 + 1;
		do {

			std::cin >> gnumb2;
			

			if (gnumb2 == m) { tries++; break; }
			if (gnumb2 < m) {
				std::cout << "Oops, your number is too low, try again!" << std::endl;

			}
			else if (gnumb2 > m) {
				std::cout << "Oops, your number is too high! Try again!" << std::endl;

			}
		
		} while (gnumb2 != m);
		std::cout << "Congratulations! You guessed the number from " << tries1 << " tries!";
		std::cout << "Do you want to play again? Type any letter for continue and Q to exit the game.";
		std::cin >> answer2;

	}

     while (std::strchr("Q", answer2) == nullptr);
}
void hard() {

	std::cout << "Please, write your number to guess!" << std::endl;
	
	
	srand(time(0));
	int gnumb3 = 0;
	char answer3{};
	int tries3{ 1 };
	do {
		int h = rand() % 30 + 1;
		do {


			std::cin >> gnumb3;
			

			if (gnumb3 == h) { tries++; break; }
			else if (gnumb3 < h) {
				std::cout << "Oops, your number is too low, try again!" << std::endl;

			}
			else if (gnumb3 > h) {
				std::cout << "Oops, your number is too high! Try again!" << std::endl;

			}
			
		} while (gnumb3 != h);
		std::cout << "Congratulations! You guessed the number from " << tries3 << " tries!";
		std::cout << "Do you want to play again? Type letter for continue and Q to exit the game.";
		std::cin >> answer3;

	} while (std::strchr("Q", answer3) == nullptr);
}
