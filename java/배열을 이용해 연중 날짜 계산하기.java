import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int month = scanner.nextInt();
            int day = scanner.nextInt();
            int[] monthdays = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            
            if (month < 1 || month > 12 || day < 1 || day > monthdays[month]) {
                System.out.println("Wrong date!");
            } else {
                int dayCount = 0;
                for (int i = 1; i < month; i++) {
                    dayCount += monthdays[i];
                }
                dayCount += day;
                System.out.println(dayCount);
            }
        }
    }
}
