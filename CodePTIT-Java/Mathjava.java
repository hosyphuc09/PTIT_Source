public class Mathjava {

    public static void main(String[] args) {
        System.out.println("PI= "+ Math.PI);
        // tri tuyet doi
        int a=-16;
        System.out.println("tri tuyet doi cua a la: "+Math.abs(a));
        //max,min
        System.out.println("max la: "+Math.max(9, 10));
        System.out.println("min la: "+Math.min(9,10));
        // can bac 2
        System.out.println("can bac 2 cua 16 la: "+Math.sqrt(16));
        // luy thua
        System.out.println("luy thua 2 mu 5 la: "+Math.pow(2,5));
        int goc=90;
        double sin =Math.sin(Math.PI*goc/180);
        double cos=Math.cos(Math.PI*goc/180);
        double tan=Math.tan(Math.PI*goc/180);
        System.out.println("sin 90= "+sin);
        System.out.println("cos 90= "+cos);
        System.out.println("tan 90= "+tan);

    }
}