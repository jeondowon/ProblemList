import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int people = scanner.nextInt();
            int count = 0;
            for (int i = 0; i < people; i++) {
                int height = scanner.nextInt();
                int weight = scanner.nextInt();
                double height_m = height * 0.01;
                double bmi = weight / (height_m * height_m);
                if (bmi >= 25) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
