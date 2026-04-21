package J036;
import java.util.Scanner;
public class J036 {
    public static void main(String[] args){
        J036 ps = new J036();
        ps.j036();
    }
    void j036(){
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        String palin = "";
        for(int i = 0; i < str.length(); i++){
            if(Character.isLetter(str.charAt(i))){
                palin += Character.toLowerCase(str.charAt(i));
            }
        }
        //System.out.println(palin);
        int left = 0;
        int right = palin.length()-1;
        while(left < right){
            if(palin.charAt(left) != palin.charAt(right)){
                System.out.println("No");
                break;
            }
            left++;
            right--;
        }
        if(left >= right){
            System.out.println("Yes");
        }
    }
}
