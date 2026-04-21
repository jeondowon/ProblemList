import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] names = {"James", "David", "Simon", "Peter", "Jason"};
        int[][] sheet = new int[5][10];
        int[] answer = {1, 2, 3, 4, 1, 2, 3, 4, 3, 2};
        int[] grade = new int[5];
        
        for (int i = 0; i < 5; i++) {
            int correct = 0;
            for (int j = 0; j < 10; j++) {
                if (!scanner.hasNextInt()) return;
                sheet[i][j] = scanner.nextInt();
                if (sheet[i][j] == answer[j]) {
                    correct++;
                }
            }
            if (correct >= 9) grade[i] = 1;
            else if (correct >= 7) grade[i] = 2;
            else grade[i] = 3;
        }
        
        int count1 = 0, count2 = 0, count3 = 0;
        StringBuilder s1 = new StringBuilder();
        StringBuilder s2 = new StringBuilder();
        StringBuilder s3 = new StringBuilder();
        
        for (int i = 0; i < 5; i++) {
            if (grade[i] == 1) { count1++; s1.append(" ").append(names[i]); }
            else if (grade[i] == 2) { count2++; s2.append(" ").append(names[i]); }
            else { count3++; s3.append(" ").append(names[i]); }
        }
        
        System.out.println("1st :" + s1.toString() + " (" + count1 + ")");
        System.out.println("2nd :" + s2.toString() + " (" + count2 + ")");
        System.out.println("Fail :" + s3.toString() + " (" + count3 + ")");
    }
}
