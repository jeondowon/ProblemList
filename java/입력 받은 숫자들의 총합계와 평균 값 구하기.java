import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int count = scanner.nextInt();
            int totalSum = 0;
            for (int i = 0; i < count; i++) {
                totalSum += scanner.nextInt();
            }
            double average = (double) totalSum / count;
            System.out.printf("%d %.1f\n", totalSum, average);
        }
    }
}
