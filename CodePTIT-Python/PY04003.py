from math import gcd
class PhanSo:
    def __init__(self,tu,mau):
        self.tu=tu
        self.mau=mau
    def RutGon(self):
        c=gcd(self.tu,self.mau)
        tu1=self.tu/c
        mau1=self.mau/c
        print(f"{int(tu1)}/{int(mau1)}")
tu,mau=map(int,input().split())
p1=PhanSo(tu,mau)
p1.RutGon()