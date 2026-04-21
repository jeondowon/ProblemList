import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        for (int i = 0; i < 10; i++) {
            if (!scanner.hasNextDouble()) break;
            double area = scanner.nextDouble();
            double pyung = area / 3.305;
            if (pyung < 15) count1++;
            else if (pyung < 30) count2++;
            else if (pyung < 50) count3++;
            else count4++;
        }
        System.out.println("small - " + count1);
        System.out.println("normal - " + count2);
        System.out.println("large - " + count3);
        System.out.println("huge - " + count4);
    }
}
