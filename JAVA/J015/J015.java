package J015;

import java.util.Scanner;

public class J015 {
    void main(String[] args){
        J015 ps = new J015();
        ps.j015();
    }
    void j015(){
        int num1, num2, num3;
        int max_num, min_num;

        Scanner sc = new Scanner(System.in);
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        num3 = sc.nextInt();

        max_num = num1;
        min_num = num1;
        if (max_num < num2){
            max_num = num2;
        }
        if(max_num < num3){
            max_num = num3;
        }
        if (min_num > num2){
            min_num = num2;
        }
        if(min_num > num3){
            min_num = num3;
        }
        System.out.printf("%d %d\n", max_num, min_num);
        sc.close();
    }
}
