package J042;

public class J042 {
    public static void main(String[] args){
        J042 ps = new J042();
        ps.j042();
    }
    void j042(){
        Lotto lotto = new Lotto();
        lotto.printNumbers();
        lotto.remake();
        lotto.printNumbers();
    }
}
