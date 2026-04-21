package J002;

import java.util.Scanner;

class J002 {
    public static void main(String[] args) {
        J002 ps = new J002();
        ps.j002();
    }

    void j002() {
        double c_degree;
        double f_degree;
        Scanner sc = new Scanner(System.in);
        c_degree = sc.nextDouble();
        f_degree = c_degree * 1.8 + 32;
        System.out.println("Fahrenheit = " + f_degree);
    }
}