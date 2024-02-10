import java.util.*;


public class Ranvir {

    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int check = sc.nextInt();
        
        if(check == 1){
            double l = sc.nextDouble();
            double b = sc.nextDouble();
            rectangle(l,b);
        }
        else if(check == 2){
            double r = sc.nextDouble();
            circle(r);
        }else if(check == 3){
            System.out.println("Invalid User");
        }
    }

    static void rectangle(double l, double b){
        System.out.println("Area: "+ String.format("%.2f", l*b));
        System.out.println("Perimeter: "+ String.format("%.2f", 2*(l+b)));
    }

    static void circle(double r){
        System.out.println("Area: "+ String.format("%.2f", 3.14*(r*r)));
        System.out.println("Perimeter: "+ String.format("%.2f", 2*3.14*r));
    }
}