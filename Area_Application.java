
// This Application creates using all pillars of object oriented.
import java.util.Scanner;

// This is my Parent class
abstract class Model {
    float area;

    abstract void accept_input();

    abstract void compute();

    public void dis() {
        System.out.println("The area is :" + area);
    }

}

// This is Square class, which calculate Area of Square.
class Square extends Model {
    private float length;

    @Override
    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the lenth of Square: ");
        length = scan.nextFloat();
    }

    @Override
    public void compute() {
        area = length * length;
    }

}

// This is Rectangle class, which calculate Area of rectangle.
class Rectangle extends Model {
    private float length;
    private float breadth;

    @Override
    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the lenth of rectangle: ");
        length = scan.nextFloat();
        System.out.println("Enter the breadth of rectangle: ");
        breadth = scan.nextFloat();
    }

    @Override
    public void compute() {
        area = length * breadth;
    }

}

// This is Circular class, which calculate Area of Circle
class Circle extends Model {
    private float radius;

    public void accept_input() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the radius of circle: ");
        radius = scan.nextFloat();
    }

    @Override
    public void compute() {
        area = 3.14f * radius * radius;
    }
}

// it's class gives me a loose coupling envoirement
class Geometry {
    public void permit(Model ref) {
        ref.accept_input();
        ref.compute();
        ref.dis();
    }
}

// This is my main method Where program is start
public class Area_Application {
    public static void main(String[] args) {

        Model s = new Square();
        Model r = new Rectangle();
        Model c = new Circle();

        Geometry g = new Geometry();

        g.permit(s);
        g.permit(r);
        g.permit(c);

    }
}