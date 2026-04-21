package J023;
import java.util.Scanner;
public class J023 {
    public static void main(String[] args){
        J023 ps = new J023();
        ps.j023();
    }
    void j023(){
        int count;
        Scanner sc = new Scanner(System.in);
        count = sc.nextInt();

        int[] number = new int[count];
        int totalsum = 0;
        double average;

        for (int i = 0; i < count; i++){
            number[i] = sc.nextInt();
            totalsum += number[i];
        }
        average = (totalsum / (count * 1.0));

        System.out.println(totalsum + " " + average);
    }
}
