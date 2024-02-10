import java.util.*;

public class six {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int []arr = new int[n];
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        int ans = 0 ;
        for (int i = 0; i < arr.length; i++)
        for (int j = i; j < arr.length; j++){
            HashSet<Integer> s = new HashSet<>();
            for (int k = i; k <=j; k++)
                s.add(arr[k]);
            if(s.size() == target){
                ans++;
            }
        }

        System.out.println(ans);
    }
}
