class HoaDon:
    def __init__(self,ma,ten,soLuong,donGia,chietKhau):
        self.ma=ma
        self.ten=ten
        self.soLuong=soLuong
        self.donGia=donGia
        self.chietKhau=chietKhau
    def TongTien(self):
        return self.soLuong*self.donGia
    def ThanhToan(self):
        return self.TongTien()-self.chietKhau
    def __str__(self):
        return f"{self.ma} {self.ten} {self.soLuong} {self.donGia} {self.chietKhau} {self.ThanhToan()}"
t=int(input())
a=[]
while t>0:
    t-=1
    ma=input().strip()
    ten=input().strip()
    soLuong=int(input())
    donGia=int(input())
    chietKhau=int(input())
    hd=HoaDon(ma,ten,soLuong,donGia,chietKhau)
    a.append(hd)
a.sort(key=lambda x:x.ThanhToan(),reverse=True)
for x in a:
    print(x)