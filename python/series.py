Count = int(input('Enter the number to print the series like(1,4,27....) till the given number:'))
print("The series till {0} is".format(Count), end = "")
for TermCounter in range(1, Count+1,1):
   Counter = 1
   Term = TermCounter
   while TermCounter > Counter:
      Term = Term * TermCounter
      Counter = Counter + 1
   if Term <= Count :
     print("",Term,end = "")
   else:
     break;
print('.\n')