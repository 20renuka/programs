Number = input("Enter the number to print natural numbers till the given number:")
print('The first  {0} natural numbers are'.format(Number), end = "")
Counter = 1
while Counter <= int(Number):
  print("", Counter, end = "")
  Counter = Counter + 1
print(".\n")  