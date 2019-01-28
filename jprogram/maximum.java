import java.io.*;
import java.util.*;
class Main {
  public static void main(String[] args) {
    int Counter = 0, Maximum, Count;
    
    int[] Numbers = new int[50];
    Scanner sc = new Scanner(System.in);
    System.out.print("Among how many numbers do you want to find the maximum number?");
    Count = sc.nextInt();
    System.out.print("To Find the maximum among the " + Count +" numbers, enter the first number:");
    Numbers[Counter] = sc.nextInt();
    for(Counter = 1; Counter < Count; Counter++)
   {
     System.out.print("Enter the next number:");
     Numbers[Counter] = sc.nextInt();
    }
   System.out.print("The " + Count + " numbers are");
   for(Counter = 0; Counter < Count; Counter++)
   {
    System.out.print(" " + Numbers[Counter]);
   }
   System.out.print(".");
   System.out.println("");
   
   Counter = 0;
   Maximum = Numbers[Counter];
   for(Counter = 1; Counter < Count; Counter++)
   {
    if(Maximum < Numbers[Counter])
    {
      Maximum = Numbers[Counter];
    }
   }
   System.out.print("The maximum number among these " + Count +" numbers is " + Maximum + "." ); 
   }
}