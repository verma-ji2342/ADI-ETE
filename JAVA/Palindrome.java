public class Palindrome {
    public static void main(String []args){
        String s = "abaa";
        StringBuilder r = new StringBuilder(s);
        r.reverse();
        String sb = new String(r);
        if(sb.equals(s)){
            System.out.println("Yes");
        }
        else {
            System.out.println("NO");
        }
    }
}
