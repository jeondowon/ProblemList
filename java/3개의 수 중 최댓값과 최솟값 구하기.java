import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int num1 = scanner.nextInt();
            int num2 = scanner.nextInt();
            int num3 = scanner.nextInt();
            int max_num = Math.max(num1, Math.max(num2, num3));
            int min_num = Math.min(num1, Math.min(num2, num3));
            System.out.println(max_num + " " + min_num);
        }
    }
}
