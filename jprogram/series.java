import java.io.*;
import java.util.*;
class Main {
  public static void main(String[] args) {
    int TermCounter, Counter, Count, Term;
    Scanner sc = new Scanner(System.in);
    System.out.print("How many terms you want to print in the series like (1, 4, 27...)?");
    Count = sc.nextInt();
    System.out.print("The terms in the above series upto " + Count + " are ");
    for(TermCounter = 1; TermCounter <= Count; ) {
    Counter = 1;
    Term = TermCounter;
    for(; TermCounter > Counter; ){
      Term = Term * TermCounter;
      Counter = Counter + 1;
    }
    if(Term <= Count){
    System.out.print(" "+ Term);
    TermCounter = TermCounter + 1;
  }
  else{
    break;
  }
   }
   System.out.print(".");
  }
}
