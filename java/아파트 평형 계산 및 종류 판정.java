import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextDouble()) {
            double m2_area = scanner.nextDouble();
            double pyung_area = m2_area / 3.305;
            System.out.printf("%.1f\n", pyung_area);
            if (pyung_area < 15) {
                System.out.println("small");
            } else if (pyung_area < 30) {
                System.out.println("normal");
            } else if (pyung_area < 50) {
                System.out.println("large");
            } else {
                System.out.println("huge");
            }
        }
    }
}
