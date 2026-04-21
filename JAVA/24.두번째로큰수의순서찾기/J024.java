package J024;
import java.util.Scanner;
public class J024 {
    public static void main(String[] args){
        J024 ps = new J024();
        ps.j024();
    }
    void j024(){
        int[] numbers = new int[10];
        int first;
        int second;
        int second_max_index = 0;

        Scanner sc = new Scanner(System.in);
        int i;
        for (i = 0; i < 10; i++){
            numbers[i] = sc.nextInt();
        }
        first = numbers[0];
        second = numbers[0];
        for (i = 0; i < 10; i++){
            if(first < numbers[i]){
                second = first;
                second_max_index = i;
                first = numbers[i];
            }
            else if(numbers[i] < first && numbers[i] > second){
                second = numbers[i];
                second_max_index = i;
            }
        }
        System.out.println("[" + second_max_index + "] " + second);
    }
}
