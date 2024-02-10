import java.util.*;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.io.*;

class Student {
    int rollno;
    int marks;
    String name;

    Student(int rollno, int marks, String name) {
        this.rollno = rollno;
        this.marks = marks;
        this.name = name;
    }

    int getRoll() {
        return rollno;
    }

    int getMarks() {
        return marks;
    }

    String getName() {
        return name;
    }
}

public class streamCollectMethod {
    public static void main(String[] args) {
        Student arr[] = { new Student(101, 65, "Pranjal"),
                new Student(102, 35, "Ujjwal"),
                new Student(103, 45, "Rajni") };

        Map<Integer, String> m = Arrays.stream(arr).collect(Collectors.toMap(Student::getRoll, Student::getName));

        for (Map.Entry<Integer, String> ent : m.entrySet()) {
            System.out.println(ent.getKey() + " " + ent.getValue());
        }
        double res = Arrays.stream(arr)
                .mapToInt(x -> x.getMarks())
                .average()
                .getAsDouble();

        System.out.println(res);


        	 Stream.iterate(1, x -> x + 1)
	            .filter(x -> x.toString().contains("5"))
                .limit(10)
                .forEach(System.out::println);
    }
}
