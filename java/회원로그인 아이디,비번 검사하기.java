import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] usernames = {"kim", "lee", "park", "hong", "choi"};
        String[] passwords = {"1111", "1234", "3456", "3535", "7777"};
        if (scanner.hasNext()) {
            String id = scanner.next();
            String pw = scanner.next();
            int idx = -1;
            for (int i = 0; i < usernames.length; i++) {
                if (usernames[i].equals(id)) {
                    idx = i;
                    break;
                }
            }
            if (idx == -1) System.out.println("No user!");
            else if (passwords[idx].equals(pw)) System.out.println("Login OK!");
            else System.out.println("Incorrect password!");
        }
    }
}
