import java.util.*;
class Main {
  public static void main(String[] args) {
    int Number1, Number2, sum;
    Scanner object = new Scanner(System.in);
    System.out.print("To add Two numbers, enter first Number:");
    Number1 = object.nextInt();
    System.out.print("Enter Second Number:");
    Number2 = object.nextInt();
    sum = Number1 + Number2;
    System.out.print("Sum of " + Number1 + " and " + Number2 + " is "+ sum + ".\n");
  }
}