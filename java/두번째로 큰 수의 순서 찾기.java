import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[10];
        int first_idx = -1, second_idx = -1;
        
        for (int i = 0; i < 10; i++) {
            if (!scanner.hasNextInt()) break;
            numbers[i] = scanner.nextInt();
            if (first_idx == -1 || numbers[i] > numbers[first_idx]) {
                second_idx = first_idx;
                first_idx = i;
            } else if (second_idx == -1 || (numbers[i] > numbers[second_idx] && numbers[i] < numbers[first_idx])) {
                second_idx = i;
            }
        }
        
        if (second_idx != -1) {
            System.out.println("[" + (second_idx + 1) + "] " + numbers[second_idx]);
        }
    }
}
