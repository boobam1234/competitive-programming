import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int count = 0;
    Scanner sc = new Scanner(System.in);
    while (true) {
      int x = sc.nextInt();
      if (x == 0) return;
      count++;
      System.out.println("Case " + count + ": " + x);
    }
  }
}
