import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextLine()) {
            String id = scanner.nextLine();
            String pw = scanner.nextLine();
            String name = scanner.nextLine();
            if (pw.length() < 3) {
                System.out.println("Error! password is too short.");
            } else {
                System.out.println("User Id: " + id);
                System.out.print("Password: " + pw.substring(0, 2));
                for (int i = 2; i < pw.length(); i++) {
                    System.out.print("*");
                }
                System.out.println("\nUser Name: " + name);
            }
        }
    }
}
