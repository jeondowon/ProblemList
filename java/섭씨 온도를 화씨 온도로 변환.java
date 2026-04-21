import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextDouble()) {
            double c_degree = scanner.nextDouble();
            double f_degree = c_degree * 1.8 + 32;
            System.out.printf("%.1f\n", f_degree);
        }
    }
}
