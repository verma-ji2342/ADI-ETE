interface Shape {
    double getArea();
}

class Rectangle implements Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double getArea() {
        return length * width;
    }
}

class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double getArea() {
        return Math.PI * radius * radius;
    }
}

public class Area {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5, 10);
        Circle circle = new Circle(7);

        System.out.println("Area of rectangle: " + (int)rect.getArea());
        System.out.println("Area of circle: "+String.format("%.2f",circle.getArea()));
    }
}

