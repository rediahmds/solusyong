#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int integerNumber;
    long longNumber;
    char aChar;
    float floatNumber;
    double doubleNumber;
    scanf("%d %ld %c %f %lf", &integerNumber, &longNumber, &aChar, &floatNumber, &doubleNumber);
    
    printf("%d \n%ld \n%c \n%f \n%lf", integerNumber, longNumber, aChar, floatNumber, doubleNumber);
    
    
    return 0;
}
