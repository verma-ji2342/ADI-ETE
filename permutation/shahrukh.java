import java.util.*;

public class shahrukh {
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        String text = sc.next();
        String str = sc.next();
        // helper(str, text);
        System.out.print(helper(str, text));
    }

    static Boolean helper(String str, String text){
        int n = str.length();
        int m = text.length();
        HashMap<Character, String> map = new HashMap<>();
        int i=0, j=0;
        for( ; i<n ; i++){
            String temp="";
            char c = text.charAt(i);
            while(j<m && str.charAt(j) != ' '){
                temp += str.charAt(j);
                j++;
            }
            j++;
            System.out.print(temp + " "+i);
            if(map.containsValue(c) == false){
                map.put(c, temp);
            }else if(map.get(c) != temp){
                return false;
            }
        }
        return true;
    }
}