import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int month = scanner.nextInt();
            int day = scanner.nextInt();
            int[] daysInMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int day_count = 0;
            for (int i = 1; i < month; i++) {
                day_count += daysInMonth[i];
            }
            day_count += day;
            System.out.println(day_count);
        }
    }
}
