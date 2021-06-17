def multiples(a, n):
    i = 1
    while i <= n:
        yield a*i
        i += 1


# This is a generator.
multiples_of_three = multiples(3,5)
 
# It produces the first 5 multiples of 3 one by one:
print(next(multiples_of_three))
# 3
print(next(multiples_of_three))
# 6
print(next(multiples_of_three))
# 9
print(next(multiples_of_three))
# 12
print(next(multiples_of_three))
# 15

#generator expressions
numbers = [1, 2, 3]
 
my_generator = (n ** 2 for n in numbers)


def fibonacci(n):
    n1 = 0
    n2 = 1
    for i in range(0, n):
        if i < 2:
            yield i
        else:
            r = n1 + n2
            n1 = n2
            n2 = r
            yield r

n = int(input())


def even():
    i = 0
    while i < n:
        yield (2 * i)
        i = i + 1
x = even()

for j in range(0,n):
    print(next(x))
