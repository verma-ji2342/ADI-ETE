import java.util.*;

class Data {
    String name;
    int ID;
    String sex;
    static int x = 0;

    Data() {
        name = "";
        ID = x++;
        sex = "F";
    }
};ihuvy

public class BubbleSort extends Data {
    public static void main(String[] args) {
        ArrayList<Data> arr = new ArrayList<Data>();
        int x = 0;
        while (x != -1) {
            Scanner sc = new Scanner(System.in);
            Data temp = new Data();
            System.out.println("Enter the Id of Student : ");
            int id = sc.nextInt();
            System.out.println("Enter the name of Student : ");
            String n = sc.next();
            System.out.println("Enter the sex of student : ");
            String s = sc.next();
            temp.name = n;
            temp.ID = id;
            temp.sex = s;
            arr.add(temp);
            System.out.println("Would you like to add more(any number) or not(-1)");
            x = sc.nextInt();
        }
        System.out.println();
        System.out.println("Random Students : ");
        System.out.println();

        for (Data ele : arr) {
            System.out.println(ele.ID + " " + ele.name + " " + ele.sex);
        }

        bubble(arr);
        System.out.println();
        System.out.println("Sorted Student : ");
        System.out.println();

        for (Data ele : arr) {
            System.out.println(ele.ID + " " + ele.name + " " + ele.sex);
        }
        return;
    }

    public static void bubble(ArrayList<Data> a) {
        for (int i = 0; i < a.size() - 1; i++) {
            for (int j = 0; j < a.size() - i - 1; j++) {
                if (a.get(j).ID > a.get(j + 1).ID) {
                    Collections.swap(a, j, j + 1);
                }
            }
        }
    }
}