import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while (true) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      if (x == 0 && y == 0) {
        return;
      }

      System.out.println(Math.min(x, y) + " " + Math.max(x, y));
    }
  }
}
