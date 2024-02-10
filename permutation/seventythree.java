import java.util.*;

public class seventythree{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String str[] = new String[n];
        for (int i = 0; i < n; i++) {
            str[i] = sc.next();
        }
        String target = sc.next();
        boolean found = false;
        Arrays.sort(str);
        for (int i = 0; i < n; i++) {
            if (str[i].equals(target)) {
                System.out.println(i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("-1");
        }
    }
}