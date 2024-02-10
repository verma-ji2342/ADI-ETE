import java.util.*;


public class longestPalindrome {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String ans = longestPalindrome(s);
        System.out.println(ans);
    }
    
    public static String longestPalindrome(String s) {
        if(s == null) return s;
        char []sc = s.toCharArray();
        int n = sc.length;
        if(n < 2) return s;
        
        int begin = 0;
        int maxLen = 1;
        int i=0;
        while(i < n){
            int l = i-1;
            int r = i;
            while (++r < n && sc[r] == sc[i]);
            i = r;
            while(l>=0 && r<n && sc[l] == sc[r]){
                l--;
                r++;
            }
            final int len = r - ++l;
            if (len > maxLen) {
                maxLen = len;
                begin = l;
            }
        }
        // Construct and return the longest palindromic substring
        return new String(sc, begin, maxLen);
    }
}