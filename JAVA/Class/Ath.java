import java.util.*;

class Athlete {
    String name;
    int[] arr = new int[6];
    int maxi;

    Athlete(String n, int[] a, int m) {
        name = n;
        arr = a;
        maxi = m;
    }
}

public class Ath {
    public static void main(String[] args) {
        ArrayList<Athlete> a = new ArrayList<Athlete>();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        while (n > 0) {
            String N = sc.next();
            int[] aa = new int[6];
            int m = -1;
            for (int i = 0; i < 6; i++) {
                aa[i] = sc.nextInt();
                if(aa[i] > m){
                    m = aa[i];
                }
            }
            Athlete temp = new Athlete(N, aa, m);
            a.add(temp);
            n--;
        }
        Collections.reverse(a);
        for(Athlete ele : a){
            System.out.println(ele.name + " " + ele.maxi);
        }
    }

    void ranking(ArrayList<Athlete> r) {
        for (int i = 0; i < r.size() - 1; i++) {
            for (int j = 0; j < r.size() - i - 1; j++) {
                if (r.get(j).maxi > r.get(j + 1).maxi) {
                    Collections.swap(r, j, j + 1);
                }
            }
        }
    }
}
