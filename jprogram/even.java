import java.io.*;

import java.util.*;

class Main {

  public static void main(String[] args) {
 
   int Counter, Number;
   
 Scanner object = new Scanner(System.in);
 
   System.out.print("Enter the number to print the even numbers upto the number:");

    Number = object.nextInt();
    
System.out.print("The even numbers upto " + Number + " are");

    for(Counter = 0; Counter <= Number; Counter++) {

      if(Counter % 2 == 0) {
  
      System.out.print(" " + Counter);
    
  }
  
  }
 
   System.out.print(".");

  }
}