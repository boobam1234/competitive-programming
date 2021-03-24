import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int min = 1000000;
    int max = -1000000;
    long sum = 0;
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      min = Math.min(min, a);
      max = Math.max(max, a);
      sum += a;
    }
    System.out.println(min + " " + max + " " + sum);
  }
}
