# 5.2 Write a program that repeatedly prompts a user for integer numbers until the user enters 'done'. 
# Once 'done' is entered, print out the largest and smallest of the numbers. 
# If the user enters anything other than a valid number catch it with a try/except and put out an appropriate message 
# and ignore the number. Enter 7, 2, bob, 10, and 4 and match the output below.

def get_numbers(message: str):
	user_inputs = []
	while True:
			user_value = input(f'{message}')
			if user_value == 'done':
				break
			
			try:
				user_value = int(user_value)
				user_inputs.append(user_value)
			except ValueError:
				print('Invalid input')
				continue
	
	min_value = min(user_inputs)
	max_value = max(user_inputs)
	
	return { "max": max_value, "min": min_value }

user_numbers = get_numbers("Number: ")
print(f"Maximum is {user_numbers['max']}")
print(f"Minimum is {user_numbers['min']}")


