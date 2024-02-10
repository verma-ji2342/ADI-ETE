import java.util.*;
public class StringProblem {
    public static void main(String []args){
        String s;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        int k = sc.nextInt();
        String temp = "";
        int j=s.length()-1;
        for(int i=1 ; i<=k ; i++){
            temp += s.charAt(j);
            j--;
        }
        String ans = "";
        for(int i=temp.length()-1 ; i>=0 ; i--){
            ans += temp.charAt(i);;
        }
        for(int i=0 ; i<s.length()-k ; i++){
            ans += s.charAt(i);
        }
        System.out.println(ans);
    } 
}

public class StringProblem {
    public static void main(String []args){
        String s;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        char r = sc.next().charAt(0);
        String ans="";
        for(int i=0 ; i<s.length() ; i++){
            if(s.charAt(i) != r){
                ans += s.charAt(i);
            }
        }
        System.out.println("Final result : "+ans);
    } 
}

public class StringProblem {
    public static void main(String []args){
        String s;
        // String should in lowercase character :-
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        int [] arr = new int[26];
        for(int i=0 ; i<s.length() ; i++){
            arr[s.charAt(i) - 'a']++;
        }
        int m = -2545;
        char ans = 'k';
        for(int i=0 ; i<26 ; i++){
            if(m < arr[i]){
                ans = (char)('a'+i);
                m = arr[i];
            }
        }
        System.out.println(ans);
    } 
}