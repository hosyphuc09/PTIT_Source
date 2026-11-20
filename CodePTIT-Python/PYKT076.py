from datetime import datetime
class DSPhim:
    def __init__(self,ma,dem,ngay,tenPhim,soTap):
        self.stt=f"P{dem:03d}"
        self.ma=ma
        self.ngay=ngay
        self.tenPhim=tenPhim
        self.soTap=soTap
    def maPhim(self):
        maP=int(self.ma[2:])
        return maP
    def TheLoai(self,loai):
        self.loai=loai
    def __str__(self):
        return f"{self.stt} {self.loai} {self.ngay} {self.tenPhim} {self.soTap}"
n,m=map(int,input().split())
a=[]
ds=[]
for i in range(n):
    s=input()
    a.append(s)
dem=0
while m>0:
    dem+=1
    m-=1
    ma=input().strip()
    ngay=input().strip()
    tenPhim=input().strip()
    soTap=int(input())
    phim=DSPhim(ma,dem,ngay,tenPhim,soTap)
    ds.append(phim)
for i in range(len(a)):
    for x in ds:
        if i+1==int(x.ma[2:]):
            x.TheLoai(a[i])
ds.sort(key=lambda x: datetime.strptime(x.ngay,"%d/%m/%Y"))
for x in ds:
    print(x)