package J041;

public class J041 {
    public static void main(String[] args){
        J041 ps = new J041();
        ps.j041();
    }
    void j041(){
        Lotto lotto = new Lotto();
        lotto.printNumbers();
        lotto.remakeAuto();
        lotto.printNumbers();
    }
}
