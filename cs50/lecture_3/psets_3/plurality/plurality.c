#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
void merge(int leftside_index, int middle_index, int rightside_index);
void merge_sort(int leftside_index, int rightside_index);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    // check if candidiate exists
    // if exist, increment and return true
    // else return false

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].name == name)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    // sort votes larger-smaller (bubble sort)
    // if n-first element having same amount of votes, take and print em all
    merge_sort(0, candidate_count - 1);

    // Checks for duplicate
    int duplicate = 0;
    for (int i = 0; i < candidate_count - 1; i++)
    {
        if (candidates[i].votes == candidates[i + 1].votes)
        {
            duplicate++;
        }
    }

    if (duplicate)
    {
        for (int i = 0; i < duplicate; i++)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    else
    {
        printf("%s\n", candidates[0].name);
    }

    return;
}

void merge(int leftside_index, int middle_index, int rightside_index)
{
    int i, j, k;
    int sizeof_firsthalf = middle_index - leftside_index + 1; // why "+ 1"? Let's see explanation below!
    /*
        it is easier to explain if i give an example:
        Suppose there is an array `arr[6]`. We can conclude that:
        - Size of arr  is 6
        - first index  is 0
        - last index   is 5 = size - 1 = 6 - 1 = 5
        - middle index is 2 = (size / 2) - 1 = (6 / 2) - 1 = 2

        We know that middle index is 2 according to array concept,
        but, according to size and aritmathic rules, it should be 3.
        So, we add "+1" to determine the size.
    */

    int sizeof_secondhalf = rightside_index - middle_index;

    // temp arrays
    candidate LEFT[sizeof_firsthalf], RIGHT[sizeof_secondhalf];

    // Copy elements to temp arrays
    for (i = 0; i < sizeof_firsthalf; i++)
    {
        LEFT[i] = candidates[leftside_index + i];
    }
    for (j = 0; j < sizeof_secondhalf; j++)
    {
        RIGHT[j] = candidates[(middle_index + 1) + j];
    }

    i = 0;
    j = 0;
    k = leftside_index;

    // Merge temp array
    while (i < sizeof_firsthalf && j < sizeof_secondhalf)
    {
        if (LEFT[i].votes >= RIGHT[j].votes)
        {
            candidates[k] = LEFT[i];
            i++;
        }
        else
        {
            candidates[k] = RIGHT[j];
            j++;
        }
        k++;
    }
}

void merge_sort(int leftside_index, int rightside_index)
{
    if (leftside_index < rightside_index)
    {
        int middle_index = leftside_index + (rightside_index - 1) / 2;

        merge_sort(leftside_index, middle_index);
        merge_sort(middle_index + 1, rightside_index);

        merge(leftside_index, middle_index, rightside_index);
    }
}
