package J022;

import java.util.Scanner;

public class J022 {
    public static void main(String[] args){
        J022 ps = new J022();
        ps.j022();
    }
    void j022(){
        double[] m2_area = new double[10];
        double[] pyung_area = new double[10];

        String[] apartment_size = {"small", "normal", "large", "huge"};

        int count1 = 0;     //small
        int count2 = 0;     //normal
        int count3 = 0;     //large
        int count4 = 0;     //huge 개수

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 10; i++){
            m2_area[i] = sc.nextDouble();
            pyung_area[i] = m2_area[i] / 3.305;
            if(pyung_area[i] < 15){
                count1++;
            }
            else if(pyung_area[i] < 30){
                count2++;
            }
            else if(pyung_area[i] < 50){
                count3++;
            }
            else{
                count4++;
            }
        }
        for (int i = 0; i < 4; i++){
            if (i == 0){
                System.out.println(apartment_size[i] + " - " + count1);
            }
            else if(i == 1){
                System.out.println(apartment_size[i] + " - " + count2);
            }
            else if(i == 2){
                System.out.println(apartment_size[i] + " - " + count3);
            }
            else{
                System.out.println(apartment_size[i] + " - " + count4);
            }
        }
    }
}
