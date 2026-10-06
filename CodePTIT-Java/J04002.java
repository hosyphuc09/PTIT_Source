import java.util.Scanner;

class Rectange{
    private double width;
    private double height;
    private String color;
    public Rectange(){
        width=1;
        height=1;
        color="";
    }
    public Rectange(double width,double height, String color){
        this.width=width;
        this.height=height;
        this.color=color;
    }
    public double getWidth(){
        return width;
    }
    public void setWidth(double width){
        this.width=width;
    }
    public double getHeight(){
        return height;
    }
    public void setHeight(double height){
        this.height=height;
    }
    public String getColor(){
        return color;
    }
    public void setColor(String color){
        this.color=color;
    }
    public double findArea(){
        return width*height;
    }
    public double findPerimeter(){
        return (width+height)*2;
    }
}
public class J04002{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int width=sc.nextInt();
        int height=sc.nextInt();
        String color=sc.next();
        String color1=Character.toUpperCase(color.charAt(0))
                      +color.substring(1).toLowerCase();
        if(width<=0||height<=0) System.out.println("INVALID");
        else{
            Rectange hcn=new Rectange(width,height,color1);
            System.out.printf("%.0f %.0f %s",hcn.findPerimeter(),hcn.findArea(),hcn.getColor());
        }
    }
}