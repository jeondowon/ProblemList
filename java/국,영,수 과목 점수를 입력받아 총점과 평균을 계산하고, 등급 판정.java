import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int kor = scanner.nextInt();
            int eng = scanner.nextInt();
            int math = scanner.nextInt();
            int total = kor + eng + math;
            double average = total / 3.0;
            System.out.printf("%d %.1f\n", total, average);
            System.out.println("Korean - " + (kor >= 70 ? "Pass" : "Fail"));
            System.out.println("English - " + (eng >= 70 ? "Pass" : "Fail"));
            System.out.println("Math - " + (math >= 70 ? "Pass" : "Fail"));
        }
    }
}
