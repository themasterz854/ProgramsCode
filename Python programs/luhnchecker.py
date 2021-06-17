card = list(input("Enter your card number\n"))
cardcheck = [int(x) for x in card]
cardcheck.reverse()  
sumc = 0
for i in range(1,len(cardcheck)):
    if i % 2 != 0:
        cardcheck[i] *= 2
    if cardcheck[i] > 9:
        cardcheck[i] -= 9
    sumc += cardcheck[i]
sumc += int(card[-1])
if sumc % 10 == 0:
    print("CARD IS VALID")
else:
    print("CARD IS INVALID")
