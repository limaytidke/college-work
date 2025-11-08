#chance,correct pin,user pin
user = int(input("Enter pin: "))
correct_pin = 4356
chance = 1
while True:    
    if user==correct_pin:
        print("Access Granted")
        break
    if chance==3:
        print("Card Blocked")
        break
    else:
        print("Incorrect")
        user = int(input("Enter pin: "))
        chance+=1
