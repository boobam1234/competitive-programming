import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    while (true) {
      int a = sc.nextInt();
      char op = sc.next().charAt(0);
      int b = sc.nextInt();
      if (op == '?') {
        return;
      }

      System.out.println(calc(op, a, b));
    }
  }

  private static int calc(char op, int a, int b) {
    switch (op) {
      case '+':
        return a + b;
      case '-':
        return a - b;
      case '*':
        return a * b;
      case '/':
      default:
        return a / b;
    }
  }
}
