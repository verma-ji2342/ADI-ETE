import java.util.*;

public class sixtyseven {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }

        String ans="";
        int j=0;
        for(int i=0 ; i<str.length() ; i++){
            if(j < arr.length && i == arr[j]){
                ans += "*";
                j++;
            }
            char t = str.charAt(i);
            ans += t;
        }
        System.out.println(ans);
    }
}