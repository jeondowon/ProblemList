import java.util.Scanner;
public class Quiz1 {
    public static void main(String[] args){
        Quiz1 ps = new Quiz1();
        ps.quiz1();
    }
    void quiz1(){
        // 12:00 ~ 11:59, 12:00 ~ 11:59
        // 12:03, 04:07
        //하루 중에 3이 있을 때만 한 번씩 카운트
        //총 몇번일까요?
        int count = 0;
        int hour = 12;
        int minute = 0;
        for(hour = 0; hour < 12; hour++){
            for(minute = 0; minute < 60; minute++){
                String hourStr = String.valueOf(hour);
                String minuteStr = String.valueOf(minute);
                if(hourStr.contains("3")){
                    if(minute < 10){

                    }
                    System.out.println(hour + ":" + minute);
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
