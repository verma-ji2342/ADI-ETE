import java.util.*;


public class sixtysix {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int temp = n;
        int ans = 0;
        int digit=0;
        ArrayList<Integer> arr = new ArrayList<>();
        while(temp != 0){
            int rem = temp%10;
            arr.add(rem);
            temp /= 10;
            digit++;
        }
        for(int x : arr){
            ans += Math.pow(x,digit);
        }
        System.out.println(ans == n);
    }
}
