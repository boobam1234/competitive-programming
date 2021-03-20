import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double r = sc.nextDouble();
    double radius = Math.PI * r * r;
    double circumference = 2 * Math.PI * r;
    System.out.println(String.format("%.5f", radius) + " " + String.format("%5f", circumference));
  }
}
