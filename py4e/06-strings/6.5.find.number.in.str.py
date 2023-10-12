"""
6.5 Write code using find() and string slicing (see section 6.10) to extract the number at the end of the line below. 
Convert the extracted value to a floating point number and print it out.
"""

convert_str_to_float = lambda num_str: float(num_str[num_str.find(":")+1:].lstrip())

text = "X-DSPAM-Confidence:    0.8475"
num_float = convert_str_to_float(text)
print(num_float)


