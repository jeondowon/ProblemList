package J003;

import java.util.Scanner;

class J003 {
    public static void main(String[] args) {
        J003 ps = new J003();
        ps.j003();
    }

    void j003() {
        double m2_area;
        double pyung_area;
        Scanner sc = new Scanner(System.in);
        m2_area = sc.nextDouble();
        pyung_area = m2_area /3.305;
        System.out.println("pyung: " + pyung_area);
    }
}