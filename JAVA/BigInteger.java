import java.util.*;

public class BigInteger{
    static public void main(String arg[]){
        String str = new String("My name is Pranjal Verma");
        String s1 = null;
        System.out.print(s1); // line 2
        System.out.print(s1.toString()); // line 3

        System.out.println(str);
        String str1 = str.toUpperCase();
        System.out.println(str1);
        str = str1.toLowerCase();
        System.out.println(str);
    }
}