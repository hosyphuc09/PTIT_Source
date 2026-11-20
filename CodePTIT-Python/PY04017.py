class VanToc:
    def __init__(self,ten,donVi,tgDen):
        self.ten=ten
        self.donVi=donVi
        self.tgDen=tgDen
    def Ma(self):
        s1="".join(x[0] for x in self.ten.split())
        s2="".join(x[0] for x in self.donVi.split())
        s=s2+s1
        return s
    def vantoc(self):
        s1=self.tgDen.split(":")
        gio=int(s1[0])-6
        phut=int(s1[1])
        tg=gio+phut/60
        vt=120/tg
        return int(vt+0.5)
    def __str__(self):
        return f"{self.Ma()} {self.ten} {self.donVi} {self.vantoc()} Km/h"
t=int(input())
a=[]
while t>0:
    t-=1
    ten=input().strip()
    donVi=input().strip()
    tgDen=input().strip()
    vt=VanToc(ten,donVi,tgDen)
    a.append(vt)
a.sort(key=lambda x:tuple(map(int,x.tgDen.split(":"))))
for x in a:
    print(x)
    