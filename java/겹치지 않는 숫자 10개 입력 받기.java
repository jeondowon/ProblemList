import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] number = new int[10];
        int count = 0;
        
        while (count < 10) {
            System.out.print("Enter #" + (count + 1) + " number > ");
            if (!scanner.hasNextInt()) break;
            int num = scanner.nextInt();
            boolean dup = false;
            for (int i = 0; i < count; i++) {
                if (number[i] == num) {
                    dup = true;
                    break;
                }
            }
            if (dup) {
                System.out.println("Duplicated! Retry.");
            } else {
                number[count++] = num;
            }
        }
        
        System.out.print("Numbers -");
        for (int i = 0; i < 10; i++) {
            System.out.print(" " + number[i]);
        }
        System.out.println();
    }
}
