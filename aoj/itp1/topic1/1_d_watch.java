import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int s = sc.nextInt();
    int hours = s / 3600;
    int minutes = s % 3600 / 60;
    int seconds = s % 60;
    System.out.println(hours + ":" + minutes + ":" + seconds);
  }
}
