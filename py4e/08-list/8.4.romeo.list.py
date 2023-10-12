"""
8.4 Open the file romeo.txt and read it line by line. For each line, split the line into a list of words 
using the split() method. The program should build a list of words. For each word on each line check 
to see if the word is already in the list and if not append it to the list. When the program completes, 
sort and print the resulting words in python sort() order as shown in the desired output.
"""

def splitandsort(text_lines=open('romeo.txt', 'r')) -> list[str]: 
	words = []

	for line in text_lines:
		words_in_line = line.split(' ')
		words_in_line[-1] = words_in_line[-1].replace('\n', '')
		for word in words_in_line:
			if word not in words:
				words.append(word)

	words.sort()
	return words


filename = input('Enter filename: ')
text_lines = open(f'{filename}', 'r')

words = splitandsort(text_lines)
print(words)
