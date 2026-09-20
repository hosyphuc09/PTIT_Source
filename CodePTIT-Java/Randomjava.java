import java.util.Random;

public class Randomjava {
    public static void main(String[] args) {
        Random rd=new Random();
        int ngaunhien=rd.nextInt(-50,50);
        int ngaunhien2=rd.nextInt(50);
        double ngaunhien3=rd.nextDouble(-100,100);
        System.out.println("so ngaunhien1 la: "+ngaunhien);
        System.out.println("ngaunhien2 la: "+ngaunhien2);
        System.out.println("ngaunhien3 la: "+ngaunhien3);
    }
}
