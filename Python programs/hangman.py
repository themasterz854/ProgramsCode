# Write your code here
import random
print("H A N G M A N")
print("The game will be available soon.")
answers = ['java','noob','warm','python','cold']
random.shuffle(answers)
x = random.choice(answers)
s = set()
y = []
for i in range(0,len(x)):
    y.append("-")
i = 0
print("-"*len(x))
while i < 8:
    flag = 0
    if "-" not in y:
        break
    letter = input("Input a letter: ")
    for let in x:
        if letter == let:
            print(letter,end="")
            flag = 1
            s.add(letter)
            y.remove("-")
        elif let in s:
            print(let,end="")
        else:
            print("-",end="")
    if not(flag):
        print("No such letter in the word")
    print()
    i+=1
print("Thanks for playing!")
print("We'll see how well you did in the next stage")   