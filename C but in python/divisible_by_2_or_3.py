num = int(input("Enter number: "))
if (num%2==0) or (num%3==0):
	if num%2==0:
		print("It is divisible by 2")
	if num%3==0:
		print("It is divisible by 3")
else:
	print("It is neither divisible by 2 or 3")

