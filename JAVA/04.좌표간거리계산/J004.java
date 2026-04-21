package J004;

import java.util.Scanner;

class J004 {
    public static void main(String[] args) {
        J004 ps = new J004();
        ps.j004();
    }

    void j004() {
        double x1, y1;
        double x2, y2;
        double distance;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        distance = Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2));
        System.out.println("distance: " + distance);
    }
}