package J013;

import java.util.Scanner;

public class J013 {
    void main(String[] args){
        J013 ps = new J013();
        ps.j013();
    }

    void j013(){
        int kor, eng, math;
        int total;
        double average;

        Scanner sc = new Scanner(System.in);

        kor = sc.nextInt();
        eng = sc.nextInt();
        math = sc.nextInt();
        total = kor + eng + math;
        average = total / 3.0;
        System.out.printf("%d %.1f\n", total, average);

        if (kor >= 70){
            System.out.println("Korean - Pass");
        }
        else{
            System.out.println("Korean - Fail");
        }
        if (eng >= 70){
            System.out.println("English - Pass");
        }
        else{
            System.out.println("English - Fail");
        }
        if (math >= 70){
            System.out.println("Math - Pass");
        }
        else{
            System.out.println("Math - Fail");
        }
        sc.close();
    }
}
