package J047;

public class MyString {
    public static int whichFrist(String str1, String str2) {
        StringBuilder s1, s2;
        s1= new StringBuilder();
        s2  = new StringBuilder();

        for(int i = 0; i < str1.length(); i++){
            s1.append(Character.toLowerCase(str1.charAt(i)));
        }
        for(int i = 0; i < str2.length(); i++){
            s2.append(Character.toLowerCase(str2.charAt(i)));
            if(s2.charAt(i) < s1.charAt(i)){        //값이 더 작은 경우 사전에서 먼저 나옴
                return 2;
            }
            else if(s2.charAt(i) > s1.charAt(i)){
                return 1;
            }
        }
        return 0;
    }
    public static String removeSpaces(String str){
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < str.length(); i++){
            if(!Character.isWhitespace(str.charAt(i))){
                sb.append(str.charAt(i));
            }
        }
        str = sb.toString();
        return str;
    }
}
