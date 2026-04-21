import java.util.Random;

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
}

class Main {
    public static void main(String[] args) {
        Lotto lotto = new Lotto();
        lotto.printNumbers();
        lotto.remakeAuto();
        lotto.printNumbers();
    }
}
