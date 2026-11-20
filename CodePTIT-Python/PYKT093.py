class Diem:
    def __init__(self,ma,ten,diem1,diem2,diem3):
        self.ma=f"SV{ma:02d}"
        self.ten=" ".join(ten.split()).title()
        self.diem1=diem1
        self.diem2=diem2
        self.diem3=diem3
    def DiemTB(self):
        return (self.diem1*3+self.diem2*3+self.diem3*2)/8
    def SetHang(self,hang):
        self.hang=hang
    def __str__(self):

        tb=int(self.DiemTB()*100+0.5)/100
        return f"{self.ma} {self.ten} {tb:.2f} {self.hang}"
t=int(input())
ds=[]
dem=0
while t>0:
    t-=1
    dem+=1
    ten=input()
    diem1=float(input())
    diem2=float(input())
    diem3=float(input())
    ts=Diem(dem,ten,diem1,diem2,diem3)
    ds.append(ts)
hang=1
a=ds.copy()
a.sort(key=lambda x: (-x.DiemTB(),x.ma))
for i in range(len(a)):
    if i==0:
        a[i].SetHang(hang)
    elif a[i].DiemTB()==a[i-1].DiemTB():
        a[i].SetHang(a[i-1].hang)
    else: a[i].SetHang(i+1)
for x in a:
    print(x)