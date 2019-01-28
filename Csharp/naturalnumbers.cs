using System;

class MainClass {
  public static void Main (string[] args) {
    int Counter;
    Console.Write("How many natural numbers do you want to print?");
    int Count = Convert.ToInt32(Console.ReadLine());
    Console.Write("The first {0} natural numbers are", Count);
    for (Counter = 1; Counter <= Count; Counter = Counter + 1) {
      Console.Write(" {0}",Counter);
    }
    Console.Write(".\n");
  }
}