import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextInt()) {
            int count = scanner.nextInt();
            scanner.nextLine();
            String longest = "", shortest = "";
            for (int i = 0; i < count; i++) {
                String name = scanner.nextLine();
                if (i == 0) {
                    longest = name;
                    shortest = name;
                } else {
                    if (name.length() > longest.length()) longest = name;
                    if (name.length() < shortest.length()) shortest = name;
                }
            }
            System.out.println("Longest: " + longest);
            System.out.println("Shortest: " + shortest);
        }
    }
}
