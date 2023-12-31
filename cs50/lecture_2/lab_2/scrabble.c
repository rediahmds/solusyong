#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
void determine_winner(int score1, int score2);

int main(void)
{
	// Get input words from both players
	string word1 = get_string("Player 1: ");
	string word2 = get_string("Player 2: ");

	// Score both words
	int score1 = compute_score(word1);
	int score2 = compute_score(word2);

	// TODO: Print the winner
	determine_winner(score1, score2);
}

int compute_score(string word)
{
	// TODO: Compute and return score for string
	int score = 0;
	for (int index = 0, len = strlen(word); index < len; index++)
	{
		// Check if current char is an alphabet
		if (!isalpha(word[index]))
		{
			continue;
		}

		// Determine the char value based on the POINTS array
		if (isupper(word[index]))
		{
			score += POINTS[(word[index] - 'A')];
		}
		else
		{
			score += POINTS[(word[index] - 'a')];
		}
	}
	return score;
}

void determine_winner(int score1, int score2)
{
	if (score1 > score2)
	{
		printf("Player 1 wins!\n");
	}
	else if (score2 > score1)
	{
		printf("Player 2 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}
}
