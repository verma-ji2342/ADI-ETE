import java.util.*;


public class sixtynineA {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<String>arr = new ArrayList<>();
        for(int i=0 ; i<n ; i++){
            arr.add(sc.next());
        }
        Collections.sort(arr, new Comparator<String>(){
            @Override public int compare(String X, String Y)
            {
                String XY = X + Y;
                String YX = Y + X;
                return XY.compareTo(YX) > 0 ? -1 : 1;
            }
        });
        for(String x : arr){
            System.out.print(x);
        }
    }
}