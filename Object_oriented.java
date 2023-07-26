
// This Application creates without using all pillars of object oriented.
import java.util.Scanner;

class Square {
    float length;
    float area;

    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the lenth of Square: ");
        length = scan.nextFloat();
    }

    public void compute() {
        area = length * length;
    }

    public void dispaly()
    {
        System.out.println("Area of square is: "+ area);
    }

}

class Rectangle {
    float length;
    float breadth;
    float area;

    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the lenth of rectangle: ");
        length = scan.nextFloat();
        System.out.println("Enter the breadth of rectangle: ");
        breadth = scan.nextFloat();
    }

    public void compute() {
        area = length * breadth;
    }

    public void dispaly()
    {
        System.out.println("Area of rectangle is: "+ area);
    }

}

  
class Circle {
    float radius;
    float area;

    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the radius of circle: ");
        radius = scan.nextFloat();
    }

    public void compute() {
       area = 3.14f * radius* radius;
    }

    public void dispaly()
    {
        System.out.println("Area of rectangle is: "+ area);
    }

}


public class Object_oriented {
    public static void main(String[] args) {

       Square s = new Square();
       Rectangle r = new Rectangle();
       Circle c = new Circle();

       s.accept_input();
       s.compute();
       s.dispaly();

       r.accept_input();
       r.compute();
       r.dispaly();

       c.accept_input();
       c.compute();
       c.dispaly();

    }
}