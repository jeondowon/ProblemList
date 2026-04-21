import java.util.Random;

class MakePW {
    public MakePW() {}
    public void make(int length) {
        Random rand = new Random();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length; i++) {
            sb.append((char)(rand.nextInt(26) + 'a')); 
        }
        System.out.println(sb.toString());
    }
    public void makeCode(int length1, int length2) {
        Random rand = new Random();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length1; i++) {
            sb.append((char)(rand.nextInt(26) + 'A'));
        }
        sb.append('-');
        for (int i = 0; i < length2; i++) {
            if (i == 0) sb.append(rand.nextInt(9) + 1); 
            else sb.append(rand.nextInt(10)); 
        }
        System.out.println(sb.toString());
    }
}

class Main {
    public static void main(String[] args) {
        MakePW pwMaker = new MakePW();
        pwMaker.makeCode(3, 6); 
    }
}
