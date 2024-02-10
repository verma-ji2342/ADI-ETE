import java.util.*;

public class nine {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String target = sc.next();
        ArrayList<Integer> ll = new ArrayList<>();
        for(int i=0 ; i<str.length()-target.length()+1 ; i++){
            String temp = str.substring(i, i+target.length());
            if(temp.contains(target)){
                ll.add(i);
            }
        }
        if(ll.size() == 0){
            System.out.println(-1);
            return ;
        }
        for(int x : ll){
            System.out.print(x +" ");
        }
    }    
}
