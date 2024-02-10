import java.util.*;


public class fiftyfour {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i=1;
        while(true){ 
            // System.out.println(Integer.bitCount(i));
            if(check(String.valueOf(Integer.toBinaryString(i)))){
                n--;
            }
            if(n==0){
                System.out.println(i);
                break;
            }
            i++;
        }
        
    }
    static boolean check(String x){
        int i=0, j=x.length()-1;
        while(i < j){
            if(x.charAt(i) != x.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
