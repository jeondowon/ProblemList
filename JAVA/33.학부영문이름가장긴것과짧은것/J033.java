package J033;

import java.util.Scanner;
public class J033 {
    public static void main(String[] args){
        J033 ps = new J033();
        ps.j033();
    }
    void j033(){
        int count;
        String name;
        String longest;
        String shortest;
        Scanner sc = new Scanner(System.in);
        count = sc.nextInt();
        sc.nextLine();
        name = sc.nextLine();
        longest = name;
        shortest = name;

        for (int i = 0; i < count-1; i++){
            name = sc.nextLine();
            if(name.length() > longest.length()){
                longest = name;
            }
            if(name.length() < shortest.length()){
                shortest = name;
            }
        }
        System.out.println("Longest: " + longest);
        System.out.println("Shortest: " + shortest);
    }
}
