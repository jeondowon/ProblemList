import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int income = scanner.nextInt();
            double tax = 0;
            if (income < 10000000) {
                tax = income * 0.095;
            } else if (income < 40000000) {
                tax = income * 0.19;
            } else if (income < 80000000) {
                tax = income * 0.28;
            } else {
                tax = income * 0.37;
            }
            System.out.println((int)tax);
        }
    }
}
