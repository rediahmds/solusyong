"""
Write a program that prompts for a file name, then opens that file and reads through the file, looking for lines of the form:
`X-DSPAM-Confidence:    0.8475`
Count these lines and extract the floating point values from each of the lines and compute the average of those 
values and produce an output as shown below. Do not use the sum() function or a variable named sum in your solution.
"""

def detect_float(str_line: str) -> float:
	"""

	Args:
			`str_line` (str): a line of text from a file

	Returns:
			`float`: float value from the line
	"""
	num_str = str_line[str_line.find(':')+1:].strip()
	return float(num_str)

def calculate_average(total_spam: float, total_line: int) -> float:
	return total_spam / total_line

filename = input('Enter file name: ')
file = open(f'{filename}', 'r')
total_spam = 0
total_line = 0

for line in file:
	if line.startswith('X-DSPAM-Confidence'):
		total_spam += detect_float(line)
		total_line += 1
	
print(f'Average spam confidence: {calculate_average(total_line=total_line, total_spam=total_spam)}')