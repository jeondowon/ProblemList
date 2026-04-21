package J042;

import java.util.Random;
import java.util.Scanner;

class Lotto{
    Scanner sc = new Scanner(System.in);
    int[] numbers;
    Random rand;
    public Lotto(){
        numbers = new int[6];
        rand = new Random();
        remakeAuto();
    }
    public boolean isValid(int num, int size){
        if(num > 45 || num < 1){
            return false;
        }
        for (int i = 0; i < size; i++){
            if(numbers[i] == num){
                return false;
            }
        }
        return true;
    }
    public void printNumbers(){
        //sort();
        for (int i = 0; i < 6 ; i++){
            System.out.print(numbers[i] + " ");
        }
        System.out.println();
    }
    public void remakeAuto(){
        for (int i = 0; i < 6; i++){
            int num;
            while (true){
                num = rand.nextInt(45) + 1;
                if (isValid(num, i)) {
                    break;
                }
            }
            numbers[i] = num;
        }
    }
    public void remake(){
        while (true){
            boolean valid = true;
            for (int i = 0; i < 6; i++){
                int num = sc.nextInt();
                if(!isValid(num, i)){
                    System.out.println("Invalid input. Retry.");
                    for (int j = 0; j < 6; j++){
                        numbers[j] = 0;
                    }
                    valid = false;
                    break;
                }
                numbers[i] = num;
            }
            if(valid){
                break;
            }
        }
    }
    public void sort(){
        int temp;
        for (int i = 0; i < 6; i++){
            for(int j = i + 1; j < 6; j++){
                if(numbers[i] > numbers[j]){
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }
}
