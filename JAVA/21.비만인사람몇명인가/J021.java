package J021;

import java.util.Scanner;

public class J021 {
    public static void main(String[] args){
        J021 ps = new J021();
        ps.j021();
    }
    void j021(){
        Scanner sc = new Scanner(System.in);
        int count;
        count = sc.nextInt();
        int[] height = new int[count];
        int[] weight = new int[count];
        double bmi;
        int people = 0; //비만인 사람의 수

        for (int i = 0; i < count; i++){
            height[i] = sc.nextInt();
            weight[i] = sc.nextInt();
            bmi = weight[i] / ((height[i]*0.01) * (height[i]*0.01));
            if (bmi >= 25){
                people++;
            }
        }
        System.out.println(people);
    }
}
