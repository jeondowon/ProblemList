package J037;
import java.util.Scanner;
public class J037 {
    public static void main(String[] args){
        J037 ps = new J037();
        ps.j037();
    }
    void j037(){
        String temps1;
        String temps2;
        String s1 = "";
        String s2 = "";
        Scanner sc = new Scanner(System.in);
        temps1 = sc.nextLine();
        temps2 = sc.nextLine();

        for(int i = 0; i < temps1.length(); i++){
            if(Character.isLetter(temps1.charAt(i))){
                s1 += temps1.charAt(i);
            }
        }
        //System.out.println("s1: " + s1);
        for(int i = 0; i < temps2.length(); i++){
            if(Character.isLetter(temps2.charAt(i))){
                s2 += temps2.charAt(i);
            }
        }
        //System.out.println("s2: " + s2);
        if(s1.length() != s2.length()){
            System.out.println("No");
        }
        else{
            int count1;
            int count2;
            int i = 0;
            while(i < s1.length()){
                char c = s1.charAt(i);
                count1 = 0;
                count2 = 0;
                for (int j = 0; j < s1.length(); j++){
                    if(s1.charAt(j) == c){
                        count1++;
                    }
                }
                for(int k = 0; k < s2.length(); k++){
                    if(s2.charAt(k) == c){
                        count2++;
                    }
                }
                if(count1 != count2){
                    System.out.println("No");
                    return;
                }
                i++;
            }
            System.out.println("Yes");
        }
    }
}
