import java.util.Scanner;

class Point{
    private double x;
    private double y;
    public Point(){
        x=0;
        y=0;
    }
    public Point(double x,double y){
        this.x=x;
        this.y=y;
    }
    public Point(Point p){
        this.x=p.x;
        this.y=p.y;
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public double distance(Point secondPoint){
        return Math.sqrt(
            Math.pow(secondPoint.x-this.x,2)
            +Math.pow(secondPoint.y-this.y,2)
        );
    }
    public static double distance(Point p1,Point p2){
        return p1.distance(p2);
    }
    @Override 
    public String toString(){
        return "("+x+","+y+")";
    }
}
public class J04008{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            double x1=sc.nextDouble();
            double y1=sc.nextDouble();
            double x2=sc.nextDouble();
            double y2=sc.nextDouble();
            double x3=sc.nextDouble();
            double y3=sc.nextDouble();
            Point p1=new Point(x1,y1);
            Point p2=new Point(x2,y2);
            Point p3=new Point(x3,y3);
            double a=p1.distance(p2);
            double b=p1.distance(p3);
            double c=p2.distance(p3);
            if(a+b<=c||a+c<=b||b+c<=a){
                System.out.println("INVALID");
            }else{
                double cv=a+b+c;
                System.out.printf("%.3f%n",cv);
            }
        }
    }
}
