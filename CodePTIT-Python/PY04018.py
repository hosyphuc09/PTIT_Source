class TrungTuyen:
    def __init__(self,ma,ten,maXet,diemTin,diemCh):
        self.ten=ten
        self.maXet=maXet
        self.diemTin=diemTin
        self.diemCh=diemCh
        self.ma=f"GV{ma:02d}"
    def diemUuTien(self):
        maT=int(self.maXet[1])
        if maT==1: return 2
        elif maT==2: return 1.5
        elif maT==3: return 1
        else: return 0
    def Mon(self):
        mon=self.maXet[0]
        if mon=='A': return "TOAN"
        elif mon=='B': return "LY"
        else: return "HOA"
    def Loai(self):
        tong=self.diemTin*2+self.diemCh+self.diemUuTien()
        if tong>=18: return "TRUNG TUYEN"
        else: return "LOAI"
    def Diem(self):
        tong=self.diemTin*2+self.diemCh+self.diemUuTien()
        return tong
    def __str__(self):
        return f"{self.ma} {self.ten} {self.Mon()} {self.Diem():0.1f} {self.Loai()}"
t=int(input())
a=[]
dem=0
while t>0:
    dem+=1
    t-=1
    ten=input().strip()
    maXet=input().strip()
    diemTin=float(input())
    diemCh=float(input())
    tt=TrungTuyen(dem,ten,maXet,diemTin,diemCh)
    a.append(tt)
a.sort(key=lambda x:x.Diem(),reverse=True)
for x in a:
    print(x)