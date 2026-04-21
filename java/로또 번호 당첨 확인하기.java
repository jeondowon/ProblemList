import java.util.Random;
import java.util.Scanner;

class Lotto {
    int[] numbers;
    public Lotto() {
        numbers = new int[6];
        remakeAuto();
    }
    public void printNumbers() {
        for (int i = 0; i < 6; i++) {
            System.out.print(numbers[i] + " ");
        }
        System.out.println();
    }
    public void remakeAuto() {
        Random rand = new Random();
        for (int i = 0; i < 6; i++) {
            boolean dup;
            do {
                dup = false;
                numbers[i] = rand.nextInt(45) + 1;
                for (int j = 0; j < i; j++) {
                    if (numbers[i] == numbers[j]) dup = true;
                }
            } while (dup);
        }
    }
    public void remake() {
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 6; i++) {
            boolean invalid;
            do {
                invalid = false;
                if (!scanner.hasNextInt()) return;
                int num = scanner.nextInt();
                if (num < 1 || num > 45) {
                    invalid = true;
                } else {
                    for (int j = 0; j < i; j++) {
                        if (numbers[j] == num) invalid = true;
                    }
                }
                if (!invalid) numbers[i] = num;
            } while (invalid);
        }
    }
    public int checkLotto(int[] check) {
        int count = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (numbers[i] == check[j]) count++;
            }
        }
        return count;
    }
}

class Main {
    public static void main(String[] args) {
        Lotto lotto = new Lotto();
        lotto.printNumbers();
        lotto.remake();
        lotto.printNumbers();
        
        Scanner scanner = new Scanner(System.in);
        int[] draw = new int[6];
        for (int i = 0; i < 6; i++) {
            if (scanner.hasNextInt()) draw[i] = scanner.nextInt();
        }
        int matchCount = lotto.checkLotto(draw);
        System.out.println("Match: " + matchCount);
    }
}
