double = lambda n: n * 2
print(double(3))
print(double(4))
print(double(5))


def addition(a):
	return lambda b: a + b

addition_result = addition(3)
result2 = addition_result(4)
print(result2)

simpler_way = addition(3)(4)
print(simpler_way)