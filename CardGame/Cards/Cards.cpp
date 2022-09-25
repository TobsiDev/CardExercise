#include "Cards.h"

// TODO:
//		[ ] Convert the 11, 12 and 13 to J, Q and K when displayed to the user

// This should be in game()
// std::string deck[52];
GameInfo gameInfo;
std::string playerArr[5];
std::string opponentArr[5];

// Hands
Hand Player;
Hand Dealer;

// Populates the deck array
void fillDeck(GameInfo *gameInfo)
{
	int offset = 0;
	for (int i = 1; i < 5; i++)
	{
		for (int n = 1; n < 14; n++)
		{
			gameInfo->deck[(offset + n) - 1] = std::to_string(n); // Number
																  /// Maybe store the symbol data in here and make the converter
																  /// do the work. Example:
																  /// 126 = 12 6 = Q♠
																  /// The last character will always be the card symbol,
																  /// so I should be able to just check the length and
																  /// cut it right before the last number.

			/// https://ss64.com/ascii.html

			// deck[(offset + n)-1] += i+0x02; // Character
		}
		offset += 13;
	}
}

void handReset(Hand *array)
{
	int length = sizeof(array->hand) / sizeof(std::string); // TODO: Maybe turn this into a Template
															// This gets the length of the array
															// sizeof(string) gives us 32 bits
															// So a string is 32 bits (4 bytes)
															// sizeof(array) will give us the size of the array in bits
															// So if the array is 1 in length the array uses 32 bits of memory
															// but if the array is 2, it's 64 bits.

	for (int i = 0; i < length; i++)
	{
		array->hand[i] = std::to_string(0);
	}
}

void getCard(/*Hand *array, int arrayIndex,*/ GameInfo *gameInfo)
{
	// Random number.
	// if deckNumber == 0 try again.
	bool stop = false;

	int max = 51, min = 0; // The deck has 52 cards
	int randomCardIndex = 0;

	int lengthOfArray = sizeof(gameInfo->deck) / sizeof(std::string);

	while (!stop == true)
	{
		randomCardIndex = (rand() % (max - min + 1) + min);

		if (gameInfo->deck[randomCardIndex] != "0")
		{
			// TODO: Add the card to the player or the dealers hand
			gameInfo->deck[randomCardIndex] = "0";
			stop = true;
		}
		// std::cout << "Random number: " << (rand() % (max - min + 1) + min) << std::endl;
	}
}

std::string convertNumber()
{
	return "Cunny";
}

void displayCards()
{
}

void StartGame()
{
	fillDeck(&gameInfo);
	handReset(&Player);
	handReset(&Dealer);
}
void game()
{
}

void testFunc()
{
	std::cout << "from Cards :wave:" << std::endl;
	fillDeck(&gameInfo);

	std::cout << "Deck: \n";
	for (int i = 0; i < 52; i++)
	{
		std::cout << gameInfo.deck[i] << std::endl;
	}

	Player.points = 2;
	for (int i = 0; i < 10; i++)
	{
		Player.hand[i] = i * 2;
	}

	Dealer.points = 2;
	for (int i = 0; i < 10; i++)
	{
		Dealer.hand[i] = i * 2;
	}

	StartGame();

	getCard(&gameInfo);

	std::cout << Player.points << std::endl;
	std::cout << convertNumber() << std::endl;
}
