package J012;

import java.util.Scanner;

public class J012 {
    void main(String[] args){
        J012 ps = new J012();
        ps.j012();
    }
    void j012(){
        double m2_area;
        double pyung_area;

        Scanner sc = new Scanner(System.in);
        m2_area = sc.nextDouble();
        pyung_area = (m2_area / 3.305);

        System.out.printf("%.1f \n", pyung_area);

        if(pyung_area < 15){
            System.out.println("small");
        }
        else if(pyung_area <= 30){
            System.out.println("normal");
        }
        else if(pyung_area <= 50){
            System.out.println("large");
        }
        else{
            System.out.println("huge");
        }
    }
}
