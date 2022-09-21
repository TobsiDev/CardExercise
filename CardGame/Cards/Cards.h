#pragma once

#include <iostream>
#include <string>

void fillDeck();
std::string convertNumber(); // Converts numbers to their correct letters (1=A 11=J ...)

// TEST FUNCTION
void testFunc();

struct Hand
{
	int points;
	std::string hand[10];
};
