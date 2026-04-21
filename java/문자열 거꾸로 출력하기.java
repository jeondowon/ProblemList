import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextLine()) {
            String str = scanner.nextLine();
            String reverse = new StringBuilder(str).reverse().toString();
            System.out.println(reverse);
        }
    }
}
