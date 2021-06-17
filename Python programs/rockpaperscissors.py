# Write your code here
import random
name = input("Enter your name: ")
print("Hello, {}".format(name))
rating_file = open('rating.txt','r+')
rating = 0
for line in rating_file:
    player, score = line.split()
    if name == player:
        rating = score
rating_file.close()
st = ['rock', 'paper', 'scissors']
rel = {'paper' : 'scissors', 'rock' : 'paper', 'scissors': 'rock'}
while(1):
    hand = input()
    if hand == "!exit":
        print("Bye!")
        break
    if hand == "!rating":
        print("Your rating: {}".format(rating))
        continue
    elif hand not in st:
        print("Invalid input")
        continue
    comp = random.choice(st)
    if hand == comp:
        print("There is a draw {}".format(hand))
        rating += 50
    else:
        if comp == rel[hand]:
            print("Sorry but computer chose {}".format(comp))
        else:
            print("Well done. Computer chose {} and failed".format(comp))
            rating += 100
