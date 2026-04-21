package J035;
import java.util.Scanner;
public class J035 {
    public static void main(String[] args){
        J035 ps = new J035();
        ps.j035();
    }
    void j035(){
        String strBirth;
        Scanner sc = new Scanner(System.in);
        strBirth = sc.nextLine();
        int intBirth = Integer.parseInt(strBirth);
        int year, month, day;
        year = intBirth / 10000;
        month = intBirth % 10000 / 100;
        day = intBirth % 100;

        /*
        System.out.println(intBirth);
        System.out.println(year);
        System.out.println(month);
        System.out.println(day);
        */

        int sum = (year / 1000) + (year % 1000 / 100) +
                (year % 100 / 10) + (year % 10) + month + day;

        System.out.println(sum);

    }
}
