#include <stdio.h>

int main(void) {
 int Count, TermCounter, Counter, Term;
  printf("Enter the number to print the series till the given number:");
  scanf("%d", &Count);
  printf("The series till %d is", Count);
  for(TermCounter = 1; ; )
  {
    Counter = 1;
    Term = TermCounter;
    for(; TermCounter > Counter; )
    {
      Term = Term * TermCounter;
      Counter = Counter + 1;
    }
    if(Term <= Count)
    {
      printf(" %d", Term);
    }
    else
    {
      break;
    }
    TermCounter = TermCounter + 1;
   }
   printf(".");
  return 0;
}