total_classes = int(input("Enter total classes: "))
attended_classes = int(input("Enter attended classes: "))
eligible = (attended_classes*100)/total_classes
if eligible<75:
	print("You are NOT eligible for exam")
else:
	print("You are eligible for exam")
