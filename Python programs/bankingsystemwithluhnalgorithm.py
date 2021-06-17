# Write your code here
import random
cardlist = []
pinlist = []


while(1):
    sumc = 0
    checksum = 0
    cardgen = []
    pingen = []
    print("1. Create an account\n2. Log into account\n0. Exit")
    choice = int(input())
    if choice == 0:
        break
    elif choice == 1:
        print("Your card has been created")
        for i in range(0,4):
            pingen.append(random.randint(0,9))
        PIN = "{}{}{}{}".format(*pingen)
        pinlist.append(PIN)
        cardgen = list("400000")
        for i in range(0,9):
            cardgen.append(random.randint(0,9))
        for i in range(0,len(cardgen)):
            cardgen[i] = int(cardgen[i])
        cardcheck = [x for x in cardgen]
        for i in range(0,len(cardcheck)):
            if i % 2 == 0:
                cardcheck[i] *= 2
            if cardcheck[i] > 9:
                cardcheck[i] -= 9
            sumc += cardcheck[i]
        cardcheck = []
        if sumc % 10 == 0:
            checksum = 0
        else:
            checksum = 10 - (sumc % 10)
        cardgen.append(checksum)
        card_number = ("{}"*16).format(*cardgen)
        cardlist.append(card_number)
        print("Your card number: ")
        print(card_number)
        print("Your card PIN: ")
        print(PIN)
    else:
        card_input = input("Enter your card number\n")
        PIN_input = input("Enter your PIN\n")
        if ((card_input not in cardlist) or (PIN_input not in pinlist)):
            print("Wrong card number or PIN!")
        else:
            print("You have successfully logged in!")
            while(1):
                print("1. Balance\n2. Log out\n0. Exit")
                choice1 = int(input())
                if choice1 == 0 or choice1 == 2:
                    print("You have successfully logged out!")
                    break
                elif choice1 == 1:
                    print("Balance: 0")
            if choice1 == 0:
                break             
print(cardlist)
                
            
        
        