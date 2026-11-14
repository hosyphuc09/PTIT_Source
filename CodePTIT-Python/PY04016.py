from datetime import datetime
class HoaDon:
    def __init__(self,ma,ten,soPhong,ngayNhan,ngaTra,tienSinh):
        if ma<10:
            self.ma="KH0"+str(ma)
        else: self.ma="KH"+str(ma)
        self.ten=ten
        self.soPhong=soPhong
        self.ngayNhan=ngayNhan
        self.ngayTra=ngaTra
        self.tienSinh=tienSinh
    def SoNgay(self):
        a=datetime.strptime(self.ngayNhan,"%d/%m/%Y")
        b=datetime.strptime(self.ngayTra,"%d/%m/%Y")
        soNgay=(b-a).days+1
        return soNgay
    def Tien(self):
        c=str(self.soPhong)[0]
        if c=='1': return 25*self.SoNgay()+self.tienSinh
        elif c=='2': return 34*self.SoNgay()+self.tienSinh
        elif c=='3': return 50*self.SoNgay()+self.tienSinh
        else: return 80*self.SoNgay()+self.tienSinh
    def __str__(self):
        return f"{self.ma} {self.ten} {self.soPhong} {self.SoNgay()} {self.Tien()}"
t=int(input())
dem=0
a=[]
while t>0:
    t-=1
    dem+=1
    ten=input().strip()
    soPhong=input().strip()
    ngayNhan=input().strip()
    ngayDi=input().strip()
    tienSinh=int(input())
    hd=HoaDon(dem,ten,soPhong,ngayNhan,ngayDi,tienSinh)
    a.append(hd)
a.sort(key=lambda x:x.Tien(),reverse=True)
for x in a:
    print(x)