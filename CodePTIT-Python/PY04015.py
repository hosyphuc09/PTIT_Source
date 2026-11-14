class HoaDon:
    def __init__(self,ma,ten,soCu,soMoi):
        if ma<10:
            self.ma="KH0"+str(ma)
        else: self.ma="KH"+str(ma)
        self.ten=ten
        self.soCu=soCu
        self.soMoi=soMoi
    def TienNuoc(self):
        soNuoc=self.soMoi-self.soCu
        tien=0
        if soNuoc<=50 and soNuoc>=0:
            tien=soNuoc*100*1.02
        elif soNuoc>=51 and soNuoc<=100:
            tien=(100*50+150*(soNuoc-50))*1.03
        else:
            tien=(100*50+150*50+200*(soNuoc-100))*1.05
        return int(tien+0.5)
    def __str__(self):
        return f"{self.ma} {self.ten} {self.TienNuoc()}"
t=int(input())
dem=0
ds=[]
while t>0:
    t-=1
    dem+=1
    ten=input().strip()
    soCu=int(input())
    soMoi=int(input())
    hd=HoaDon(dem,ten,soCu,soMoi)
    ds.append(hd)
ds.sort(key=lambda x:x.TienNuoc(),reverse=True)
for x in ds:
    print(x)