import java.util.Scanner;
public class Exercise2{
  public static void main(String[] String) {
    double minutesInYear 60 * 24 * 365;
    Scanner input = new Scanner(System.in);
    System.out.print("Input the number of minutes:3456789");
    double min = input.nextDouble();
    long years = (long) (min/minutesInYear);
    int days = (int) (min/60/24)%365;
    System.out.println((int) min + "minutes is approx. " + years + " years and " + days + " days ");
  }
  
}
