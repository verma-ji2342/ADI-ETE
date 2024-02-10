import java.util.*;


public class six {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int day = sc.nextInt();
        int []a = new int[day];
        int []b = new int[day];
        for(int i=0 ; i<day ; i++){
            a[i] = sc.nextInt();
        }
        for(int i=0 ; i<day ; i++){
            b[i] = sc.nextInt();
        }


        int ans=0;
        for(int i=0 ; i<day ; i++){
            if(a[i]*2 <= b[i] || b[i]*2 <= a[i]) ans++;
        }
        System.out.println(ans);
    }
}
