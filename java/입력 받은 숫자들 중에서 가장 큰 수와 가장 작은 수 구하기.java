import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int count = scanner.nextInt();
            if (count > 0) {
                int maxNum = scanner.nextInt();
                int minNum = maxNum;
                for (int i = 1; i < count; i++) {
                    int num = scanner.nextInt();
                    if (num > maxNum) maxNum = num;
                    if (num < minNum) minNum = num;
                }
                System.out.println("가장 큰 수 " + maxNum);
                System.out.println("가장 작은 수 " + minNum);
            }
        }
    }
}
