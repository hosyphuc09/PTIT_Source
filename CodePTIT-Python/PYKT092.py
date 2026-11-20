class TuyenSinh:
    def __init__(self,ma,ten,diem,danToc,khuVuc):
        self.ma=f"TS{ma:02d}"
        self.ten=" ".join(ten.split()).title()
        self.diem=diem
        self.danToc=danToc
        self.khuVuc=khuVuc
    def DiemVung(self):
        k=self.khuVuc
        diem=0
        if k==1:
            diem+=1.5
        elif k==2:
            diem+=1
        if self.danToc!="Kinh":
            diem+=1.5
        return diem
    def tong(self):
        return self.diem+self.DiemVung()
    def Loai(self):
        if self.tong()>=20.5: return "Do"
        else: return "Truot"
    def __str__(self):
        return f"{self.ma} {self.ten} {self.tong():.1f} {self.Loai()}"
t=int(input())
ds=[]
dem=0
while t>0:
    t-=1
    dem+=1
    ten=input().strip()
    diem=float(input())
    danToc=input().strip()
    khuVuc=int(input())
    ts=TuyenSinh(dem,ten,diem,danToc,khuVuc)
    ds.append(ts)
ds.sort(key=lambda x:(-x.tong(),x.ma))
for x in ds:
    print(x)