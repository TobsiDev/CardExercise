#pragma once

#include <iostream>
#include <string>

struct Hand
{
	int points;
	std::string hand[10];
};

struct GameInfo // Stores the game data
{
	int gameNumber = 0;
	std::string deck[52];
};

/// Card resetting functions begins

void fillDeck(GameInfo *gameInfo); // Populates the deck

void handReset(Hand *array); // Sets the hands variables to 0 (clears the hand)

/// Card resetting functions ends

void getCard(/*Hand *array, int arrayIndex,*/ GameInfo *gameInfo); // The hit function.

std::string convertNumber(); // Converts numbers to their correct letters (1=A 11=J ...)

void displayCards(/*std::string Player or Opponent*/);

void StartGame(); // Sets up the game variables
void game();	  // This will contain the game loop

// TEST FUNCTION
void testFunc();
