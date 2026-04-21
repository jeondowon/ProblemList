import java.util.Scanner;
public class J029 {
    public static void main(String[] args){
        J029 ps = new J029();
        ps.j029();
    }
    void j029(){
        int[] number = new int[10];     //입력한 숫자 10개
        int count;                      //현재까지 입력된 숫자의 개수 (0~10)

        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 10; i++){
            System.out.printf("Enter #%d number > ", i+1);
            number[i] = sc.nextInt();
            for(int j = 0; j < i; j++){
                if(number[i] == number[j]){
                    System.out.println("Duplicated! Retry.");
                    i--;
                }
            }
        }
        System.out.print("Numbers - ");
        for (int i = 0; i < 10; i++){
            System.out.print(number[i] + " ");
        }
    }
}
