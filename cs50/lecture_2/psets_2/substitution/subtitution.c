#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string decrypt_text(string key, string plaintext);
bool is_contain_nonalphabet(string key);
bool is_contain_duplicate(string key);

int main(int argc, string argv[])
{
	// Verify input count
	if (argc != 2)
	{
		printf("Usage: ./substitution key\n");
		return 1;
	}
	else if (strlen(argv[1]) != 26)
	{
		printf("Key must contain 26 characters.\n");
		return 1;
	}
	else if (is_contain_nonalphabet(argv[1]))
	{
		printf("Key must only contain alphabetic characters.\n");
		return 1;
	}
	else if (is_contain_duplicate(argv[1]))
	{
		printf("Key must not contain duplicate characters.\n");
		return 1;
	}

	string plaintext = get_string("plaintext: ");

	const string ciphertext = decrypt_text(argv[1], plaintext);
	printf("ciphertext: %s\n", ciphertext);
}

string decrypt_text(string key, string plaintext)
{
	string ciphertext = plaintext;
	for (int i = 0, len = strlen(plaintext); i < len; i++)
	{
		if (isupper(ciphertext[i]))
		{
			ciphertext[i] = toupper(key[ciphertext[i] - 'A']);
		}
		else if (islower(ciphertext[i]))
		{
			ciphertext[i] = tolower(key[ciphertext[i] - 'a']);
		}
	}

	return ciphertext;
}

bool is_contain_nonalphabet(string key)
{
	for (int i = 0, len = strlen(key); i < len; i++)
	{
		if (!isalpha(key[i]))
		{
			return true;
		}
	}

	return false;
}

bool is_contain_duplicate(string key)
{
	for (int current = 0, len = strlen(key); current < len; current++)
	{
		for (int next = current + 1; next < len - 1; next++)
		{
			if (tolower(key[current]) == tolower(key[next]))
			{
				return true;
			}
		}
	}

	return false;
}
