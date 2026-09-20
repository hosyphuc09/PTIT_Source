class DemSinhVien{
    static int soLuong=0;
    static int vangMat=0;
    String hoTen;
    DemSinhVien(String hoTen){
        this.hoTen=hoTen;
        soLuong++;
    }
    static int soLuong(){
        return soLuong;
    }
}
public class demSV{
    public static void main(String[] arge){
        new DemSinhVien("phuc");
        new DemSinhVien("Tra");
        System.out.println("so sv la: "+DemSinhVien.soLuong);
    }
}