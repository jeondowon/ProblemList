import java.util.Scanner;
public class Quiz2 {
    public static void main(String[] args){
        Quiz2 ps = new Quiz2();
        ps.quiz2();
    }

    int indexOf(String a, String b){
        int b_length = b.length();
        for (int i = 0; i < a.length() - b_length + 1; i++){
            String temp = a.substring(i, i+b_length);
            if(temp.equals(b)){
                return i;
            }
        }
        return -1;
    }
    void quiz2(){
        Scanner sc = new Scanner(System.in);
        String a, b;
        a = sc.nextLine();
        b = sc.nextLine();
        int index = indexOf(a, b);

        System.out.println(index);
    }
}
