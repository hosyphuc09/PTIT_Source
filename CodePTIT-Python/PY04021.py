class ThoiGian:
    def __init__(self,ma,ten,tgVao,tgRa):
        self.ma=ma
        self.ten=ten
        self.tgVao=tgVao
        self.tgRa=tgRa
    def TGChoi(self):
        a=self.tgVao.split(":")
        b=self.tgRa.split(":")
        phutVao=int(a[0])*60+int(a[1])
        phutRa=int(b[0])*60+int(b[1])
        tgChoi=phutRa-phutVao
        return tgChoi
    def Gio(self):
        phut=self.TGChoi()
        gio=phut//60
        phut1=phut%60
        return f"{gio} gio {phut1} phut"
    def __str__(self):
        return f"{self.ma} {self.ten} {self.Gio()}"
t=int(input())
a=[]
while t>0:
    t-=1
    ma=input().strip()
    ten=input().strip()
    tgVao=input().strip()
    tgRa=input().strip()
    tg=ThoiGian(ma,ten,tgVao,tgRa)
    a.append(tg)
a.sort(key=lambda x:x.TGChoi(),reverse=True)
for x in a:
    print(x)