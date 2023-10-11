def countdown_loop(start: int):
    for i in range(start, -1, -1):
        print(i)

def countdown_recursive(start: int):
    if (start == 0):
        print(0)
        return
    print(start)
    start -= 1
    countdown_recursive(start)

countdown_loop(5)
countdown_loop(10)

print("")
print("")

countdown_recursive(5)
countdown_recursive(10)

