import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNext()) {
            String date = scanner.next();
            int sum = 0;
            for (int i = 0; i < 4; i++) {
                sum += date.charAt(i) - '0';
            }
            sum += Integer.parseInt(date.substring(4, 6));
            sum += Integer.parseInt(date.substring(6, 8));
            System.out.println(sum);
        }
    }
}
