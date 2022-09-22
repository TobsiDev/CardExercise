#pragma once

#include <iostream>
#include <string>

struct Hand
{
	int points;
	std::string hand[10];
};

// Card resetting functions
void fillDeck();
void handReset(Hand *array);

std::string convertNumber(); // Converts numbers to their correct letters (1=A 11=J ...)

void displayCards(/*std::string Player or Opponent*/);

void StartGame(); // Sets up the game variables
void game();	  // This will contain the game loop

// TEST FUNCTION
void testFunc();
