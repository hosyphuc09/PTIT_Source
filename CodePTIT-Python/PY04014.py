import sys
from decimal import Decimal,ROUND_HALF_UP
class BangDiem:
    def __init__(self,ma,ten,toan,viet,anh,ly,hoa,sinh,su,dia,giaoDuc,congNghe):
        if(ma<10):
            self.ma="HS0"+str(ma)
        else: self.ma="HS"+str(ma)
        self.ten=ten
        self.toan=toan
        self.viet=viet
        self.anh=anh
        self.ly=ly
        self.hoa=hoa
        self.sinh=sinh
        self.su=su
        self.dia=dia
        self.giaoDuc=giaoDuc
        self.congNghe=congNghe
    def DiemTB(self):
        tong=self.toan*2+self.viet*2+self.anh+self.ly+self.hoa+self.sinh+self.su+self.dia+self.giaoDuc+self.congNghe
        diem=tong/Decimal(12)
        return diem.quantize(Decimal("0.1"),rounding=ROUND_HALF_UP)
    def XepLoai(self):
        diem=self.DiemTB()
        if diem>=9: return "XUAT SAC"
        elif diem>=8 and diem<9: return "GIOI"
        elif diem>=7 and diem<8: return "KHA"
        elif diem>=5 and diem<7: return "TB"
        else: return "YEU"
    def HienThi(self):
        print(f"{self.ma} {self.ten} {self.DiemTB()} {self.XepLoai()}")
t=int(input())
dem=0
ds=[]
while t>0:
    t-=1
    dem+=1
    ten=input().strip()
    toan,viet,anh,ly,hoa,sinh,su,dia,giaoDuc,congNghe=map(Decimal,input().split())
    hs=BangDiem(dem,ten,toan,viet,anh,ly,hoa,sinh,su,dia,giaoDuc,congNghe)
    ds.append(hs)
ds.sort(key=lambda x:(-x.DiemTB(),x.ma))
for x in ds:
    x.HienThi()