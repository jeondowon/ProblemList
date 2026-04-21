import java.util.Scanner;
public class J030 {
    public static void main(String[] args){
        String[] names = {"James", "David", "Simon", "Peter", "Jason"};
        int[][] sheet = new int[5][10];   //학생별 답안 내용
        int[] answer = {1,2,3,4,1,2,3,4,3,2};
        int[] grade = new int[5];
        //int[] correct = new int[5];

        String first = "";
        String second = "";
        String fail = "";
        Scanner sc = new Scanner(System.in);
        int firstcount = 0;
        int secondcount = 0;
        int failcount = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 10; j++) {
                sheet[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < 5; i++){
            for(int j = 0; j < 10; j++){
                if(sheet[i][j] == answer[j]){
                    grade[i]++;
                }
            }
            if(grade[i] >= 9){
                first += names[i] + " ";
                firstcount++;
            }
            else if(grade[i] >= 7){
                second += names[i] + " ";
                secondcount++;
            }
            else{
                fail += names[i] + " ";
                failcount++;
            }
        }
        System.out.println("1st : " + first + "(" + firstcount + ")");
        System.out.println("2nd : " + second + "(" + secondcount + ")");
        System.out.println("Fail : " + fail + "(" + failcount + ")");
    }
}
