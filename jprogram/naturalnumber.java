import java.io.*;
import java.util.*;
class Main {
  public static void main(String[] args) {
   int Count, Counter;
    Scanner object = new Scanner(System.in);
    System.out.print("Enter the number to print natural numbers till the given number:");
    Count = object.nextInt();
    System.out.print("The first " + Count +" natural numbers are");
    for(Counter = 1; Counter <= Count; Counter++){
     System.out.print(" " + Counter);
    }
    System.out.print(".");
  }
}