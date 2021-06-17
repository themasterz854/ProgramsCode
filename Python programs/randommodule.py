import random
random.seed()
print(random.random())

random.uniform(a, b) – #returns a pseudo-random float number in the range between a and b:
print(random.uniform(3, 100))
 
# 35.94079523197162
random.randint(a, b) – #returns a pseudo-random integer number in the range between a and b:
print(random.randint(35, 53))
 
# 52
random.choice(seq)– #returns pseudo-random element from non-empty sequences:
print(random.choice('Voldemort'))
 
# m
random.randrange(a, b, c) – #returns a pseudo-random number from a range between a and b with a step c:
print(random.randrange(3, 100, 5))
 
# 18
random.shuffle(seq, [random]) – #shuffles a sequence. Attention: it doesn’t work with immutable datatypes!
tiny_list = ['a', 'apple', 'b', 'banana', 'c', 'cat']
random.shuffle(tiny_list)
print(tiny_list)
 
# ['apple', 'banana', 'a', 'cat', 'b', 'c']
random.sample(population, k)– #returns a pseudo-random k length list from a population sequence. This function is used for random sampling without replacement:
print(random.sample(range(100), 3))
 
# [24, 33, 91]
