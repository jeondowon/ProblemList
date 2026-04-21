package J041;

import java.util.Random;

class Lotto{
    int[] numbers;
    Random rand;
    public Lotto(){
        numbers = new int[6];
        rand = new Random();
        remakeAuto();
    }
    public boolean isEqual(int num, int size){
        for (int i = 0; i < size; i++){
            if(numbers[i] == num){
                return true;
            }
        }
        return false;
    }
    public void printNumbers(){
        sort();
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
                if (!isEqual(num, i)) {
                    break;
                }
            }
            numbers[i] = num;
        }
    }
    public void sort(){
        int temp;
        for (int i = 0; i < 5; i++){
            for(int j = i + 1; j < 5; j++){
                if(numbers[i] > numbers[j]){
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }
}
