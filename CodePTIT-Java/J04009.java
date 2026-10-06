import java.util.Scanner;

class Point {
    private double x;
    private double y;

    public Point() {
        x = 0;
        y = 0;
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distance(Point secondPoint) {
        return Math.sqrt(
            Math.pow(secondPoint.x - this.x, 2)
            + Math.pow(secondPoint.y - this.y, 2)
        );
    }

    public static double distance(Point p1, Point p2) {
        return p1.distance(p2);
    }

    @Override
    public String toString() {
        return "(" + x + "," + y + ")";
    }
}

public class J04009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            Point p1 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p2 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p3 = new Point(sc.nextDouble(), sc.nextDouble());

            double a = p1.distance(p2);
            double b = p2.distance(p3);
            double c = p3.distance(p1);

            if (a + b <= c || a + c <= b || b + c <= a) {
                System.out.println("INVALID");
            } else {
                double x = (a + b + c)
                         * (a + b - c)
                         * (a + c - b)
                         * (b + c - a);

                double area = Math.sqrt(x) / 4;

                System.out.printf("%.2f%n", area);
            }
        }

        sc.close();
    }
}