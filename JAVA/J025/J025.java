package J025;
import java.util.Scanner;
public class J025 {
    public static void main(String[] args){
        J025 ps = new J025();
        ps.j025();
    }
    void j025(){
        int[] monthdays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month, day;     //입력 월,일
        int day_count = 0;      //1년중 날 수

        Scanner sc = new Scanner(System.in);
        month = sc.nextInt();
        day = sc.nextInt();
        if((month > 12 || month < 1) || (day > 31 || day < 1)){
            System.out.println("Wrong date!");
        }
        else if(monthdays[month-1] < day){
            System.out.println("Wrong date!");
        }
        else{
            for (int i = 0; i < month - 1; i++){
                day_count += monthdays[i];
            }
            day_count += day;
            System.out.println(day_count);
        }
    }
}
