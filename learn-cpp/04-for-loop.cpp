#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int min_limit_a;
    cin >> min_limit_a;
    int max_limit_b;
    cin >> max_limit_b;

    const string english_word_number[] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    for (int counter_n = min_limit_a; counter_n <= max_limit_b; counter_n++) {
        if (counter_n >= 1 && counter_n <= 9) {
            cout << english_word_number[counter_n - 1] << endl;
        } else if (counter_n > 9 && counter_n % 2 == 0) {
            cout << "even" << endl;
        } else if (counter_n > 9) {
            cout << "odd" << endl;
        }
    }

    return 0;
}