from datetime import datetime
class Lich:
    def __init__(self,dem,maMon,ngayThi,gioThi,nhom):
        self.ma=f"T{dem:03d}"
        self.maMon=maMon
        self.ngayThi=ngayThi
        self.gioThi=gioThi
        self.nhom=nhom
    def TenMon(self,ten):
        self.tenMon=ten
    def __str__(self):
        return f"{self.ma} {self.maMon} {self.tenMon} {self.ngayThi} {self.gioThi} {self.nhom}"
n,m=map(int,input().split())
a=[]
for i in range(n):
    s1=input().strip()
    s2=input().strip()
    a.append([s1,s2])
ds=[]
dem=0
while m>0:
    m-=1
    dem+=1
    maMon,ngayThi,gioThi,nhom=input().split()
    lich=Lich(dem,maMon,ngayThi,gioThi,nhom)
    ds.append(lich)
for i in range(len(a)):
    for x in ds:
        if a[i][0]==x.maMon:
            x.TenMon(a[i][1])
ds.sort(key=lambda x:(datetime.strptime(x.ngayThi,"%d/%m/%Y"),
                      datetime.strptime(x.gioThi,"%H:%M"),x.maMon))
for x in ds:
    print(x)