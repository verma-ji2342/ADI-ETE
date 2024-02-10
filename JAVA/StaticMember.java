import java.util.*;

class School {
    String name;
    int ID;
    static int TotalStudent = 0;

    School(String name){
        this.name = name;
        ID = ++TotalStudent;
    }

    void getDetail(){
        System.out.println("ID : " + ID);
        System.out.println("Name : "+ name);
    }
}

public class StaticMember {
    public static void main(String []args){
        School s1 = new School("Pranjal");
        School s2 = new School("Raj");

        s1.getDetail();
        s2.getDetail();
        System.out.println(School.TotalStudent);
    }
}
