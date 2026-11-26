class TienDien:
    def __init__(self,ma,ten,loai,soDau,soCuoi):
        if ma>=10:
            self.ma=f"KH{ma}"
        else:
            self.ma=f"KH{ma:02d}"
        self.ten=ten
        self.soDau=soDau
        self.soCuoi=soCuoi
        self.loai=loai
    def SoDien(self):
        return self.soCuoi-self.soDau
    def TienDinhMuc(self):
        tien=0
        soDien=self.SoDien()
        if self.loai=='A':
            if soDien<100:
                tien=soDien*450
            else:
                tien=100*450
        elif self.loai=='B':
            if soDien<500:
                tien=soDien*450
            else:
                tien=500*450
        else:
            if soDien<200:
                tien=soDien*450
            else:
                tien=200*450
        return tien
    def TienVuotDM(self):
        tien=0
        soDien=self.SoDien()
        if self.loai=='A':
            if soDien>100:
                tien=(soDien-100)*1000
            else:
                tien=0
        elif self.loai=='B':
            if soDien>500:
                tien=(soDien-500)*1000
            else:
                tien=0
        else:
            if soDien>200:
                tien=(soDien-200)*1000
            else:
                tien=0
        return tien
    def Thue(self):
        thue=0
        tien=self.TienVuotDM()
        thue=tien*5//100
        return thue
    def Tong(self):
        return self.TienDinhMuc()+self.TienVuotDM()+self.Thue()
    def __str__(self):
        return f"{self.ma} {self.ten} {self.TienDinhMuc()} {self.TienVuotDM()} {self.Thue()} {self.Tong()}"
t=int(input())
ds=[]
dem=0
while t>0:
    t-=1
    dem+=1
    ten=" ".join(input().split()).title()
    loai,soDau,soCuoi=input().split(" ")
    soDau=int(soDau)
    soCuoi=int(soCuoi)
    td=TienDien(dem,ten,loai,soDau,soCuoi)
    ds.append(td)
ds.sort(key=lambda x: x.Tong(),reverse=True)
for x in ds:
    print(x)