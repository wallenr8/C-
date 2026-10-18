#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;



int main()
{
  int dice1;
  int dice2;
  int RollTotal;
  
  srand((time(0)));
  
  dice1 = 1 + rand() % 6;
  dice2 = 1 + rand() % 6;
  
  cout << "Player1 dice 1: " << dice1 << endl;
  cout << "Player2 dice 2: " << dice2 << endl;
    if (dice1 > dice2) {
        std::cout << "Player1 wins" << endl;
    }
    if (dice1 == dice2) {
        std::cout << " Drawn Game" << endl ;
    }
    if  (dice1 < dice2) {
        std::cout << "Player2 wins" << endl;
}
  RollTotal = dice1 + dice2;
  cout << "RollTotal: " << RollTotal << endl;
  

    return 0;
}
