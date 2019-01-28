
Count = int(input("Among how many numbers you want find the maximum number:"))
print('To print the maximum of {0} numbers:'.format(Count), end = "")
Numbers = []
for Counter in range(Count):
  number = int(input('Enter the number:'))
  Numbers.append(number)
print("The 10 numbers are ", end = "")
for Counter in range (Count):
  print("",Numbers[Counter], end = "")
print(".")
Counter = 0
MaximumNumber = Numbers[Counter]
for Counter in range(1, Count, 1):
  if(MaximumNumber < Numbers[Counter]):
    MaximumNumber = Numbers[Counter]
print('The maximum number among these 10 nubers is {0}'.format(MaximumNumber), end = "")
print(".\n")