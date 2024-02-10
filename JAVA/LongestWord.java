import java.util.*;

// public class LongestWord {
//     public static void main(String []args){
//         Scanner sc = new Scanner(System.in);
//         String s = sc.nextLine();
//         String l = "";
//         String[] words = s.split(" ");
//         for(String e:words){
//             if(e.length() > l.length()){
//                 l = e;
//             }
//         }

//         System.out.println(l);
//     }
// }

public class LongestWord {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String l = "";
        String[] words = s.split(" ");
        for(String e:words){
            l += capitalize(e);
        }
        
        System.out.println(l);
    }
}