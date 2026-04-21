package J011;

import java.util.Scanner;

class J011 {
    public static void main(String[] args){
        J011 ps = new J011();
        ps.j011();
    }
    void j011(){
        int height, weight;     //신장(cm), 체중(kg)
        double bmi;

        Scanner sc = new Scanner(System.in);
        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight / ((height*0.01)*(height*0.01));

        if (bmi >= 25){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
        sc.close();
    }
}
