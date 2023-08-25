#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_sentences(string text);
int count_words(string text);
int ispunct_specific(char c);
double calculate_avgletters(int letterscount, int wordscount);
double calculate_avgsentences(int senctencescount, int wordscount);
int calculate_colemanliauindex(double avgletters, double avgsentences);
void print_grade(int index);

int main(void)
{
	const string text = get_string("Text: ");
	const int words = count_words(text);

	const int letters = count_letters(text);
	const double avgletters = calculate_avgletters(letters, words);

	const int sentences = count_sentences(text);
	const double avgsentences = calculate_avgsentences(sentences, words);

	const int index = calculate_colemanliauindex(avgletters, avgsentences);

	print_grade(index);

	// Determine index with these steps:
	// - calc avg letter per 100 words
	// - calc avg sentence per 100 words
	// - calc the index with coleman-liau formula
}

int count_letters(string text)
{
	int letters_count = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (isalpha(text[i]))
		{
			letters_count++;
		}
	}

	return letters_count;
}

int count_sentences(string text)
{
	int sentences_count = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (ispunct_specific(text[i]))
		{
			sentences_count++;
		}
	}

	return sentences_count;
}

int ispunct_specific(char c)
{
	// Only checks if the char is one of '!' or '?' or '.'
	if (c == '!' || c == '?' || c == '.')
	{
		return 20;
	}
	else
	{
		return 0;
	}
}

int count_words(string text)
{
	int words_count = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (isspace(text[i]))
		{
			words_count++;
		}
	}

	return words_count + 1; // TODO: Fix the "+ 1"
}

int calculate_colemanliauindex(double avgletters, double avgsentences)
{
	const double index = 0.0588 * avgletters - 0.296 * avgsentences - 15.8;
	return (int)round(index);
}

double calculate_avgletters(int letterscount, int wordscount)
{
	return (double)letterscount / wordscount * 100;
}

double calculate_avgsentences(int senctencescount, int wordscount)
{
	return (double)senctencescount / wordscount * 100;
}

void print_grade(int index)
{
	if (index >= 16)
	{
		printf("Grade 16+\n");
	}
	else if (index >= 1 && index < 16)
	{
		printf("Grade %i\n", index);
	}
	else if (index < 1)
	{
		printf("Before Grade 1\n");
	}
}