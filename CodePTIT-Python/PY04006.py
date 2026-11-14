from math import sqrt
from decimal import Decimal
import sys
class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def canh(self,b):
        p1=self.x-b.x
        p2=self.y-b.y
        return (p1**2+p2**2).sqrt()
class Triangle:
    def __init__(self,a,b,c):
        self.a=a
        self.b=b
        self.c=c
    def DienTich(self):
        ab=self.a.canh(self.b)
        ac=self.a.canh(self.c)
        bc=self.b.canh(self.c)
        if ab+ac<=bc or ab+bc<=ac or bc+ac<=ab:
            print("INVALID")
        else:
            tich=sqrt((ab+ac+bc)*(ab+bc-ac)*(bc+ac-ab)*(ac+ab-bc))/4
            print(f"{tich:.2f}")
data=sys.stdin.read().split()
t=int(data[0])
i=1
for _ in range(t):
    x1,y1,x2,y2,x3,y3=map(Decimal,data[i:i+6])
    i+=6
    p1=Point(x1,y1)
    p2=Point(x2,y2)
    p3=Point(x3,y3)
    p4=Triangle(p1,p2,p3)
    p4.DienTich()