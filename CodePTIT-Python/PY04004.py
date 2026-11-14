from math import gcd
class PhanSo:
    def __init__(self, tu,mau):
        self.tu=tu
        self.mau=mau
    def Tong(self,other):
        mauM=self.mau*other.mau
        tuM=self.tu*other.mau+other.tu*self.mau
        c=gcd(tuM,mauM)
        tu1=tuM//c
        mau1=mauM//c
        print(f"{tu1}/{mau1}")
x1,y1,x2,y2=map(int,input().split())
p1=PhanSo(x1,y1)
p2=PhanSo(x2,y2)
p1.Tong(p2)
        