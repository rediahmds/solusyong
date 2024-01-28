#!/bin/python3

def even_or_odd(n: int):
    
    if (n % 2 != 0) or (6 <= n <= 20):
        return 'Weird'
    elif (2 <= n <= 5) or n > 20:
        return 'Not Weird'


if __name__ == '__main__':
    n = int(input().strip())
    
    result = even_or_odd(n)
    print(result)
