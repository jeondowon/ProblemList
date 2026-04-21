import java.util.Scanner;
public class J026 {
    public static void main(String[] args){
        J026 ps = new J026();
        ps.j026();
    }
    void j026(){
        int count;
        int number;
        int max_num = -1, min_num = 101;
        Scanner sc = new Scanner(System.in);

        count = sc.nextInt();
        for (int i = 0; i < count; i++){
            number = sc.nextInt();
            if(number < 0 || number > 100){
                break;
            }
            if(number > max_num){
                max_num = number;
            }
            if(number < min_num){
                min_num = number;
            }
        }
        System.out.println("가장 큰 수: " + max_num);
        System.out.println("가장 작은 수: " + min_num);

    }
}
