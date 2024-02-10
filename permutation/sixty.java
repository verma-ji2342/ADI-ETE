import java.util.*;

public class sixty {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        int i=1;
        while(n != 0){
            if((3*i+2)%4 != 0 ){
                arr.add((3*i+2));
                n--;
            }
            i++;
        }
        for(int x : arr){
            System.out.println(x);
        }
        
    }
}
