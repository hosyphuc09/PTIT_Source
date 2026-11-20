
class NhanVien:
    def __init__(self,ma,ten,diemLT,diemTH):
        self.ma=f"TS0{ma}"
        self.ten=ten
        self.diemLT=diemLT
        self.diemTH=diemTH

    def diemTB(self):
        tb=(self.diemTH+self.diemLT)/2
        return tb

    def Loai(self):
        tb=self.diemTB()
        if tb>9.5: return "XUAT SAC"
        elif tb>=8: return "DAT"
        elif tb>=5: return "CAN NHAC"
        else: return "TRUOT"

    def __str__(self):
        return f"{self.ma} {self.ten} {self.diemTB():.2f} {self.Loai()}"

def ChuanHoa(n):
    while n>10:
        n/=10
    return n

t=int(input())
a=[]
dem=0

while t>0:
    t-=1
    dem+=1
    ten=input().strip()
    diemLT=float(input())
    diemTH=float(input())
    nv=NhanVien(dem,ten,ChuanHoa(diemLT),ChuanHoa(diemTH))
    a.append(nv)

a.sort(key=lambda x:x.diemTB(),reverse=True)

for x in a:
    print(x)
