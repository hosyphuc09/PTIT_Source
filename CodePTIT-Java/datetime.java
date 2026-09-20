import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
public class datetime {

    public static void main(String[] args) {
        Calendar cal=Calendar.getInstance();
        System.out.println(cal);
        int nam=cal.get(Calendar.YEAR);
        int thang=cal.get(Calendar.MONTH);
        int ngay=cal.get(Calendar.DAY_OF_MONTH);
         System.out.println(ngay+" "+thang+"  "+nam);
        
        cal.set(Calendar.YEAR,2006);
        cal.set(Calendar.MONTH,0);
        cal.set(Calendar.DAY_OF_MONTH,9);
        int namsinh=cal.get(Calendar.YEAR);
        int thangsinh=cal.get(Calendar.MONTH)+1;
        int ngaysinh =cal.get(Calendar.DAY_OF_MONTH);
        System.out.println("ngay thang nam sinh cua ban la: "+ngaysinh+"/"+thangsinh+"/"+namsinh);
        //tạo 1 doi tuong date de get time trong doi tuong cal
         SimpleDateFormat dinhDang =new SimpleDateFormat("dd/MM/yyyy hh:mm:ss ");
         Date d=cal.getTime();
         String s=dinhDang.format(d);
         System.out.print(s);
    }
}