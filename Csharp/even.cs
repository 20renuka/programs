using System;


class MainClass {

  public static void Main (string[] args) {

    Console.Write("Enter the number to print even numbers upto the given number:");
   
 int Count = Convert.ToInt32(Console.ReadLine());

    Console.Write("The even numbers upto {0} are", Count);

    for(int Counter = 0; Counter <= Count; Counter++) {
    
  if(Counter % 2 == 0) {
  
      Console.Write(" {0}", Counter);
     
 }
    }
   
 Console.Write(".");
  
}
  }