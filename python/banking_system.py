balance=0
print("\nOPTIONS:\n1.Check balance\n2.Deposit money\n3.Withdraw money\n4.Exit")
choice = input("\n :").lower()
while choice!="4":
    amount=0
    if choice=="1" or choice=="check balance":
        print("Balance: %.2f"%balance)
        choice = input("\n :").lower()
    elif choice=="2" or choice=="deposit":
        amount=float(input("Enter amount to deposit: "))
        balance+=amount
        print("balance: %.2f"%balance)
        choice = input("\n :").lower()
    elif choice=="3" or choice=="withdraw":
        amount=float(input("Enter amount to deposit: "))
        if amount>balance:
            print("Insufficient balance\nAvailable balance: %.2f"%balance)
        else:
            balance-=amount
            print("balance: %.2f"%balance)
            choice = input("\n :").lower()
    else:
        print("Invalid option")
        choice = input("\n :").lower()
