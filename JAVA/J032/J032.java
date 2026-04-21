package J032;
import java.util.Scanner;
public class J032 {
    public static void main(String[] args){
        J032 ps = new J032();
        ps.j032();
    }
    void j032(){
        String str = "";
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        System.out.println(str);
        String reverse = "";
        for (int i = str.length()-1; i >= 0; i--){
            reverse = reverse + str.substring(i, i+1);
        }
        System.out.println(reverse);
    }
}
