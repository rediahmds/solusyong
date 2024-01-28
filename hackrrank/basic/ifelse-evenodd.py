#!/bin/python3

def even_or_odd(n: int):
    result = ''
    
    if (n % 2 != 0):
        result = 'Weird'
    elif 2 <= n <= 5:
        result = 'Not Weird'
    elif 6 <= n <= 20:
        result = 'Weird'
    else:
        result = 'Not Weird'
                
    return result


if __name__ == '__main__':
    n = int(input().strip())
    
    result = even_or_odd(n)
    print(result)
