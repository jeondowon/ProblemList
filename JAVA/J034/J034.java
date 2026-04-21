package J034;
import java.util.Scanner;
public class J034 {
    public static void main(String[] args){
        J034 ps = new J034();
        ps.j034();
    }
    void j034(){
        String[] usernames = {"kim", "lee", "park", "hong", "choi"};
        String[] passwords = {"1111", "1234", "3456", "3535", "7777"};

        String name;
        String password;

        Scanner sc = new Scanner(System.in);

        name = sc.nextLine();
        password = sc.nextLine();

        for(int i = 0; i < 5; i++){
            if(name.equals(usernames[i])){
                if(password.equals(passwords[i])){
                    System.out.println("Login OK!");
                    return;
                }
                else{
                    System.out.println("Incorrect password!");
                    return;
                }
            }
        }
        System.out.println("No user!");
    }
}
