package J005;

import java.util.Scanner;

class J005 {
    public static void main(String[] args) {
        J005 ps = new J005();
        ps.j005();
    }
    int calMonthDays(int month){
        int days = 0;
        switch (month){
            case 2: days = 28; break;
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30; break;
            default: days = 31; break;
        }
        return days;
    }
    void j005(){
        int month, day;
        int day_count;
        Scanner sc = new Scanner(System.in);
        month = sc.nextInt();
        day = sc.nextInt();
        day_count = 0;
        for (int i = 1; i<month; i++){
            day_count += calMonthDays(i);
        }
        day_count+=day;
        System.out.println("day count: " + day_count);
    }
}
