import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int height = scanner.nextInt();
            int weight = scanner.nextInt();
            double height_m = height * 0.01;
            double bmi = weight / (height_m * height_m);
            System.out.printf("%.1f\n", bmi);
        }
    }
}
