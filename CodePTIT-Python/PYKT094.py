class TinhLuong:
    def __init__(self,ma,ten,luong,ngayCong):
        self.ma=ma
        self.ten=ten
        self.luong=luong
        self.ngayCong=ngayCong
    def HeSo(self):
        nhom=self.ma[0:1]
        soNam=self.ma[1:3]
        heso=0
        if nhom=='A':
            if int(soNam)>=1 and int(soNam)<=3:
                heso=10
            elif int(soNam)>=4 and int(soNam)<=8:
                heso=12
            elif int(soNam)>=9 and int(soNam)<=15:
                heso=14
            elif int(soNam)>=16:
                heso=20
        elif nhom=='B':
            if int(soNam)>=1 and int(soNam)<=3:
                heso=10
            elif int(soNam)>=4 and int(soNam)<=8:
                heso=11
            elif int(soNam)>=9 and int(soNam)<=15:
                heso=13
            elif int(soNam)>=16:
                heso=16
        elif nhom=='C':
            if int(soNam)>=1 and int(soNam)<=3:
                heso=9
            elif int(soNam)>=4 and int(soNam)<=8:
                heso=10
            elif int(soNam)>=9 and int(soNam)<=15:
                heso=12
            elif int(soNam)>=16:
                heso=14
        else:
            if int(soNam)>=1 and int(soNam)<=3:
                heso=8
            elif int(soNam)>=4 and int(soNam)<=8:
                heso=9
            elif int(soNam)>=9 and int(soNam)<=15:
                heso=11
            elif int(soNam)>=16:
                heso=13
        return heso
    def MaNganh(self):
        return self.ma[3:]
    def Luong(self):
        return self.ngayCong*self.luong*self.HeSo()*1000
    def Nganh(self,s):
        self.nganh=s
    def __str__(self):
        return f"{self.ma} {self.ten} {self.nganh} {self.Luong()}"
t=int(input())
dsN=[]
dsL=[]
for i in range(t):
    ma,nganh=input().split(" ",1)
    dsN.append([ma,nganh])
k=int(input())
while k>0:
    k-=1
    ma=input().strip()
    ten=input().strip()
    luong=int(input())
    ngayCong=int(input())
    tl=TinhLuong(ma,ten,luong,ngayCong)
    dsL.append(tl)
for x in dsN:
    for y in dsL:
        if x[0]==y.MaNganh():
            y.Nganh(x[1])
for x in dsL:
    print(x)