public class Main {
    public static void main(String[] args) {
        Circle circle1 = new Circle(5.0);
        System.out.println("Circle 1 area: " + circle1.getArea());

        Circle circle2 = new Circle(3, 5);
        System.out.println("Circle 2 area: " + circle2.getArea());
    }
}

class Circle {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public Circle(int x, int y) {
        this.radius = Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
    }
    public double getArea() {
        return 3.14 * radius * radius;
    }
}
