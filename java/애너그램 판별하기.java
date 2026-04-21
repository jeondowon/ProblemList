import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (scanner.hasNextLine()) {
            String s1 = scanner.nextLine();
            if (!scanner.hasNextLine()) return;
            String s2 = scanner.nextLine();

            int[] counts = new int[26];
            for (char c : s1.toCharArray()) {
                if (Character.isLetter(c)) counts[Character.toLowerCase(c) - 'a']++;
            }
            for (char c : s2.toCharArray()) {
                if (Character.isLetter(c)) counts[Character.toLowerCase(c) - 'a']--;
            }
            boolean anagram = true;
            for (int i = 0; i < 26; i++) {
                if (counts[i] != 0) { anagram = false; break; }
            }
            System.out.println(anagram ? "Yes" : "No");
        }
    }
}
