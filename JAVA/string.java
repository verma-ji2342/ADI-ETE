import java.util.*;
public class string {
    public static String findLargestCommonPrefix(String str1, String str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        int minLength = Math.min(len1, len2);
        
        StringBuilder prefix = new StringBuilder();
        
        for (int i = 0; i < minLength; i++) {
            char ch1 = str1.charAt(i);
            char ch2 = str2.charAt(i);
            
            if (ch1 == ch2) {
                prefix.append(ch1);
            } else {
                break;
            }
        }
        
        return prefix.toString();
    }
    public static void main(String []arg){
        // String str = "Esports Chitkara Event - 3May23 : 305,259";
        // System.out.println("3rd index  "+str.charAt(3));
        // System.out.print("Reverse of String : ");
        // for(int i=str.length()-1;i>=0;i--){
        //     System.out.print(str.charAt(i));
        // }
        String str1 = "Pranjal Verma";
        String str2 = "Pranjal";
        String str3 = new String("Pranjal");
        System.out.println(str1 == str3);
        System.out.println(str1.contains(str2));
        int com = str1.compareTo(str2);
        if(com == 0) System.out.println("Same");
        if(com > 1) System.out.println("S1 is greater");
        if(com < 1) System.out.println("s1 is smaller");
        System.out.println(findLargestCommonPrefix("banana", "banapana"));
    }
}