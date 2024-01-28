def is_leap(year: int):
    leap = False
    
    # Write your logic here
    if (year % 4 == 0) and (year % 100 != 100) or (year % 400 == 0):
        leap = True
    
    return leap

year = int(input())
print(is_leap(year))

# TODO: Pass all test cases. Currently not satisfies some condition