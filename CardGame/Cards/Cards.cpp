#include "Cards.h"

// TODO:
//		[ ] Convert the 11, 12 and 13 to J, Q and K when displayed to the user

std::string deck[52];
std::string playerArr[5];
std::string opponentArr[5];

// Populates the deck array
void fillDeck(){
	int offset = 0;
	for (int i = 1; i < 5; i++)
	{
		for (int n = 1; n < 14; n++)
		{
			deck[(offset + n)-1] = std::to_string(n); // Number
			/// Maybe store the symbol data in here and make the converter 
			/// do the work. Example:
			/// 126 = 12 6 = Q♠
			/// The last character will always be the card symbol, 
			/// so I should be able to just check the length and
			/// cut it right before the last number.
			 
			/// https://ss64.com/ascii.html

			//deck[(offset + n)-1] += i+0x02; // Character
		}
		offset += 13;
	}
}

std::string convertNumber() {
	return "Cunny";
}

void testFunc() {
	std::cout << "from Cards :wave:" << std::endl;
	fillDeck();

	std::cout << "Deck: \n";
	for (int i = 0; i < 52; i++)
	{
		std::cout << deck[i] << std::endl;
	}
	
	Hand Player;

	Player.points = 2;
	std::cout << Player.points << std::endl;
	std::cout << convertNumber() << std::endl;
}
