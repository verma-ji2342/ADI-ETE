import java.util.*;



public class sixtyeight {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int c1 = sc.nextInt();
        int c2 = sc.nextInt();
        int c3 = sc.nextInt();
        int c4 = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int[] arr = new int[x];
        int[] brr = new int[y];
        for(int i = 0; i<x; i++){
            arr[i] = sc.nextInt();
        }
        for(int j = 0; j<y; j++){
            brr[j] = sc.nextInt();
        }

        int costrick = 0;
        for(int i = 0; i<x; i++){
            costrick += Math.min(arr[i] * c1, c2);
        }
        costrick = Math.min(costrick, c3);
        
        int costauto = 0;
        for(int i = 0; i<y; i++){
            costauto +=Math.min(brr[i] * c1, c2);
        }
        costauto = Math.min(costauto, c3);
        int totalcost = Math.min(costrick + costauto, c4);
        System.out.println(totalcost);
    }
}