package J031;
import java.util.Scanner;
public class J031 {
    public static void main(String[] args){
        J031 ps = new J031();
        ps.j031();
    }
    void j031(){
        String userid;  //ㅇㅣㅂ력받은 Id
        String password;
        String name;

        Scanner sc = new Scanner(System.in);
        userid = sc.nextLine();
        password = sc.nextLine();
        name = sc.nextLine();

        if(password.length() < 3){
            System.out.println("Error! password is too short\n");
        }
        else{
            System.out.println("User ID: " + userid);
            System.out.print("Password ");
            for (int i = 0; i < password.length(); i++){
                if(i > 1){
                    System.out.print('*');
                }
                else{
                    System.out.print(password.substring(i, i+1));
                }
            }
            System.out.print('\n');
            System.out.println("User name: " + name);
        }
    }
}
