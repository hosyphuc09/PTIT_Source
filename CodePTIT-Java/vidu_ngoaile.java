public class vidu_ngoaile {
    public static void main(String[] args) {
        SinhVien sv=new SinhVien();
        double[] thu={8.5,12.0};
        for(double d: thu){
            try{
                sv.setDiem(d);
                System.out.println("Da gan diem: "+sv.getDiem());
            }catch (DiemKhongHopLeException e){
                System.out.println("Bi tu choi: "+ sv.getMessage());
            }
        }
    }
}
