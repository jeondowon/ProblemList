import java.util.Scanner;
public class J027 {
    public static void main(String[] args){
        J027 ps = new J027();
        ps.j027();
    }
    void j027(){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        int[] height = new int[num];
        int[] weight = new int[num];
        double[] bmi = new double[num];

        int count = 0;
        int i;
        for (i = 0; i < num; i++){
            height[i] =  sc.nextInt();
            weight[i] = sc.nextInt();
            bmi[i] = weight[i] / ((height[i]*0.01)*(height[i]*0.01));
            //System.out.println(bmi[i]);
            if(bmi[i] >= 25){
                count++;
            }
        }
        System.out.print("Overweight person - ");
        for(i = 0; i < num; i++){
            if(bmi[i] >= 25){
                System.out.print((i+1) + " ");
            }
        }
        System.out.print("\n");
        System.out.println("Total - " + count);
    }
}
