import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] height = new int[10];
        int[] weight = new int[10];
        double[] bmi = new double[10];
        int count = 0;
        
        for (int i = 0; i < 10; i++) {
            if (!scanner.hasNextInt()) break;
            height[i] = scanner.nextInt();
            weight[i] = scanner.nextInt();
            double h = height[i] * 0.01;
            bmi[i] = weight[i] / (h * h);
        }
        
        System.out.print("Overweight person -");
        for (int i = 0; i < 10; i++) {
            if (bmi[i] >= 25) {
                System.out.print(" " + (i + 1));
                count++;
            }
        }
        System.out.println("\nTotal - " + count);
    }
}
