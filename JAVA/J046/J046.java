package J046;

import java.util.Scanner;

public class J046 {
    public static void main(String[] args){
        J046 ps = new J046();
        ps.j046();
    }
    void j046(){
        Scanner sc = new Scanner(System.in);
        String s1, s2;
        s1 = sc.nextLine();
        s2 = sc.nextLine();
        if (MyString.whichFrist(s1, s2) == 1){
            System.out.print(1 + " " + s1);
        }
        else if(MyString.whichFrist(s1, s2) == 2){
            System.out.print(2 + " " + s2);
        }
        else{
            System.out.print("same word");
        }
    }
}
