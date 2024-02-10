import java.util.*;


public class thirteen {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        int []a1 = new int[a];
        int []a2 = new int[b];
        int []a3 = new int[c];
        for(int i=0 ; i<a ; i++){
            a1[i] = sc.nextInt();
        }
        for(int i=0 ; i<b ; i++){
            a2[i] = sc.nextInt();
        }
        for(int i=0 ; i<c ; i++){
            a3[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        for(int i=0 ; i<a ; i++){
            for(int j=0 ; j<b ; j++){
                for(int k=0 ; k<c ; k++){
                    if(a1[i] + a2[j] + a3[k] == target){
                        System.out.println(a1[i] + " " + a2[j] + " " + a3[k]);
                        return ;
                    }
                }
            }
        }
    }
}
