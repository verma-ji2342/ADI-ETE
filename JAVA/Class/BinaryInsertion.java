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
}

public class BinaryInsertion extends Data {
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

        binaryInsertionSort(arr);
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

    public static void binaryInsertionSort(ArrayList<Data>arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            Data key = arr.get(i);
            int left = 0;
            int right = i - 1;

            // Perform binary search to find the correct position
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (arr.get(mid).ID > key.ID) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            // Shift elements to make space for the new element
            for (int j = i; j > left; j--) {
                Collections.swap(arr, j, j - 1);
                // arr.get(j).name = arr.get(j-1).name;
                // arr.get(j).ID = arr.get(j-1).ID;
                // arr.get(j).sex = arr.get(j-1).sex;
                
                // arr[j] = arr[j - 1];
            }

            // Insert the new element at the correct position
            arr.get(left).ID = key.ID;
            arr.get(left).name = key.name;
            arr.get(left).sex = key.sex;
            // arr[left] = key;
        }
    }
}