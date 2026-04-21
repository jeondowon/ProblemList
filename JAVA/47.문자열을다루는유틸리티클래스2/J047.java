package J047;
import java.util.Scanner;
public class J047 {
    public static void main(String[] args){
        J047 ps = new J047();
        ps.j047();
    }
    void j047(){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        str = MyString.removeSpaces(str);
        System.out.println(str);
    }
}
