package J001;

import java.util.Scanner;

class J001 {
    public static void main(String[] args) {
        J001 ps = new J001();
        ps.j001();
    }

    void j001() {
        int height, weight;
        double bmi;

        Scanner sc = new Scanner(System.in);

        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight / (height * 0.01 * height * 0.01);

        System.out.println("BMI = " + bmi);
    }
}