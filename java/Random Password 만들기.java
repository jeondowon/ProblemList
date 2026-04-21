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
}

class Main {
    public static void main(String[] args) {
        MakePW pwMaker = new MakePW();
        pwMaker.make(8);
    }
}
