import java.util.*;


public class fiftyone {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int i=1;
        while(true){
            if(i%n==0 && i%m==0) {
                System.out.println(i);
                break;
            }
            i++;
        }
    }
}
