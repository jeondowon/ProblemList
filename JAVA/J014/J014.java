// 누진세 적용까지 해볼것
package J014;

import java.util.Scanner;

public class J014 {
    public static void main(String[] args){
        J014 ps = new J014();
        ps.j014();
    }
    void j014(){
        int income;
        double tax;

        Scanner sc = new Scanner(System.in);
        income = sc.nextInt();

        if (income < 10000000){
            tax = income * 0.095;
        }
        else if (income < 40000000){
            tax = income * 0.19;
        }
        else if (income < 80000000){
            tax = income * 0.28;
        }
        else {
            tax = income * 0.37;
        }

        System.out.println((int)tax);
        sc.close();
    }
}
