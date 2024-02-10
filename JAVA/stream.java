import java.util.*;
import java.io.*;


public class stream {
    public static void main(String []args){
        int arr[] = {1,2,3,4,54,6,5};

        int sum=Arrays.stream(arr).sum();
        System.out.println(sum);

	 
        int max=Arrays.stream(arr).max().getAsInt();
        
        System.out.println(max);
    }
}
