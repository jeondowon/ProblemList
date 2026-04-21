import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextLine()) {
            String line = scanner.nextLine();
            StringBuilder alpha = new StringBuilder();
            for (int i = 0; i < line.length(); i++) {
                char c = line.charAt(i);
                if (Character.isLetter(c)) {
                    alpha.append(Character.toLowerCase(c));
                }
            }
            String s = alpha.toString();
            String rev = alpha.reverse().toString();
            if (s.length() > 0 && s.equals(rev)) System.out.println("Yes");
            else System.out.println("No");
        }
    }
}
