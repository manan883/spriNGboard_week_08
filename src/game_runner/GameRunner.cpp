#include <stdlib.h>
#include "Game.h"

static bool notAWinner;

int main(int argc, char** argv)
{
  if (argc == 1) {
    srand(time(NULL));
  }
  else {
    unsigned seed = stoi(argv[1]);
    srand(seed);
  }

	Game aGame;

	aGame.add("Chet");
	aGame.add("Pat");
	aGame.add("Sue");

	do
	{
    //this does a rand int from 0-4 + 1 which is 0-5
		aGame.roll(rand() % 5 + 1);

		if (rand() % 9 == 7)
		{
			notAWinner = aGame.wrongAnswer();
		}
		else
		{
			notAWinner = aGame.wasCorrectlyAnswered();
		}
	} while (notAWinner);

}
