
import java.util.*;

public class vansh1 {
    public static void main(String[] args){
        int[] arr = {1, 2, 3, 1, 5, 6 ,7 ,8 ,1 ,2 ,8};
        int c = 1, maxsub=0;
        // List<Integer> ans = new ArrayList<>();
        for(int i=0;i<arr.length-1;i++){
            if(arr[i+1]>arr[i]){
                c++;
            } else {
                if(maxsub < c){
                    maxsub = c;
                }
                c = 1;
            }
        }
        System.out.println(maxsub);
    }
}