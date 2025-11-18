#include "rpsChecker.h"

const char* rpsChecker(const char* Player1, const char* Player2) {
	int Player1Input = (strcmp(Player1, "Rock") == 0) || ((strcmp(Player1, "Paper") == 0)) || ((strcmp(Player1, "Scissors") == 0));
	int Player2Input = (strcmp(Player2, "Rock") == 0) || ((strcmp(Player2, "Paper") == 0)) || ((strcmp(Player2, "Scissors") == 0));

	if (Player1Input == 0 || Player2Input == 0) return "Invalid";

	if (strcmp(Player1, Player2) == 0)
	{
		return "Draw";
	}
	else
	{
		if ((strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) || (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0) || (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0))
		{
			return "Player1";
		}
		return "Player2";
	}
	
}
