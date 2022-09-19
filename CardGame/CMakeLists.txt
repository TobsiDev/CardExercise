# CMakeList.txt : CMake project for CardGame, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CardGame "CardGame.cpp" "CardGame.h" "Cards/Cards.cpp" "Cards/Cards.h")

# TODO: Add tests and install targets if needed.
