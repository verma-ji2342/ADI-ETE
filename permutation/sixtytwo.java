import java.util.*;

public class sixtytwo {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        char[] keys = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
                        // D    B    A    B    C    A    E    E    A    D
        int n = sc.nextInt();
        int []ans = new int[n];
        for(int i=0 ; i<n ; i++){
            int check=0;
            for(int j=0 ; j<10 ; j++){
                String m = sc.next();
                if(keys[j] == m.charAt(0)) check++;
            }
            ans[i] = check;
        }
        for(int x : ans){
            System.out.println(x);
        }
    }
}