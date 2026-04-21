package J043;

public class J043 {
    public static void main(String[] args){
        J043 ps = new J043();
        ps.j043();
    }
    void j043(){
        Lotto lotto = new Lotto();
        lotto.printNumbers();
        lotto.remake();
        lotto.printNumbers();

        int win = lotto.checkLotto(lotto.numbers);
        System.out.println("일치개수: " + win);
    }
}
