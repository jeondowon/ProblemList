import java.util.Scanner;
public class J028 {
    public static void main(String[] args){
        J028 ps = new J028();
        ps.j028();
    }
    void j028(){
        //학생 5명 국어 영어 수학 점수 입력받고 저장
        // 각 과목별 총점과 평균점수
        // 각 학생별 총점과 평균점수, 그에 따른 등급
        int[][] jumsu = new int[5][3];
        int[] sum_student = new int[5];     //학생별 총점
        double[] average_student = new double[5];   //학생별 평균
        char[] grade = new char[5];     //등급
        int[] sum_class = new int[3];
        double[] average_class = new double[3];

        Scanner sc = new Scanner(System.in);
        int i;
        for( i = 0; i < 5; i++){
            jumsu[i][0] = sc.nextInt();     //국어
            jumsu[i][1] = sc.nextInt();     //영어
            jumsu[i][2] = sc.nextInt();     //수학

            sum_student[i] = jumsu[i][0] + jumsu[i][1] + jumsu[i][2];
            average_student[i] = (sum_student[i] / 3.0);

            for(int j = 0; j < 3; j++){
                sum_class[j] += jumsu[i][j];
            }

            if(average_student[i] >= 90){
                grade[i] = 'A';
            }
            else if(average_student[i] >= 80){
                grade[i] = 'B';
            }
            else if(average_student[i] >= 70){
                grade[i] = 'C';
            }
            else if(average_student[i] >= 60){
                grade[i] = 'D';
            }
            else{
                grade[i] = 'F';
            }
        }
        for(i = 0; i < 3; i++){
            average_class[i] = sum_class[i] / 5.0;
            if(i == 0){
                System.out.print("Korean");
            }
            else if(i == 1){
                System.out.print("English");
            }
            else{
                System.out.print("Math");
            }
            System.out.println(" - Sum " + sum_class[i]
                    + ", Average " + average_class[i]);
        }
        for(i = 0; i < 5; i++){
            System.out.printf("#%d Student - Sum %d, Average %.1f, Grade %c\n",
                    i+1, sum_student[i], average_student[i], grade[i]);
        }
    }
}
