import java.util.*;

public class sixtyfive {

    public static int countWays(int idx, int sum, int k, List<Integer> arr) {
        if (idx == arr.size()) {
            return k == sum ? 1 : 0;
        }
        int cnt = countWays(idx + 1, sum + arr.get(idx), k, arr);
        cnt += countWays(idx + 1, sum - arr.get(idx), k, arr);
        cnt += countWays(idx + 1, sum, k, arr);
        return cnt;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        while (tc-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            List<Integer> arr = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                int a = sc.nextInt();
                arr.add(a);
            }

            int result = countWays(0, 0, k, arr);
            System.out.println(result);
        }
    }
}