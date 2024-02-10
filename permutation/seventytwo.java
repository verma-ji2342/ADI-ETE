import java.util.*;

public class seventytwo {
    public static int search(String[] names,String target){
        for(int i =0 ; i<names.length;i++){
            if(names[i].equals(target)){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String [] name = new String[n];
        String [] phonenumber = new String[n];
        String [] email = new String[n];

        for(int i = 0 ; i< n;i++){
            name[i]=sc.next();
            phonenumber[i]=sc.next();
            email[i]=sc.next();
        }

        String res = sc.next();
        int result = search(name, res);

        if(result!=-1){
            System.out.println(name[result]);
            System.out.println(phonenumber[result]);
            System.out.println(email[result]);
        }

        else{
            System.out.println("-1");
        }
    }
}