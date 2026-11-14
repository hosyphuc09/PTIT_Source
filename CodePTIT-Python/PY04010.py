
class ThiSinh:
    def __init__(self,ten,ngaySinh,diem1,diem2,diem3):
        self.ten=ten
        self.ngaySinh=ngaySinh
        self.diem1=diem1
        self.diem2=diem2
        self.diem3=diem3
    def tong(self):
        sum=self.diem1+self.diem2+self.diem3
        return f"{sum:.1f}"
    def hienThi(self):
        print(f"{self.ten} {self.ngaySinh} {self.tong()}")
ten=input().strip()
ngaySinh=input().strip()
diem1=float(input())
diem2=float(input())
diem3=float(input())
ts=ThiSinh(ten,ngaySinh,diem1,diem2,diem3)
ts.hienThi()