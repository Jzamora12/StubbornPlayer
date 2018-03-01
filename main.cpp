#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int games;
  int wins=0;
  cout<< "How many games do you want to play?\n";
  cin>> games;
  for ( int i=0; i<games; i++) 
  {
    game.newGame(); 
    game.guessDoorC();
     if ( game.isWinner() == true )
        {
          wins++;
        }   
  }
  cout<<"You won "<<wins;
  cout<<" games.\n";
  return 0;
}
