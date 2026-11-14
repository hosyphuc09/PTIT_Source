from math import sqrt
import sys
class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def canh(self,b):
        p1=self.x-b.x
        p2=self.y-b.y
        return sqrt(p1**2+p2**2)
class Triangle:
    def __init__(self,a,b,c):
        self.a=a
        self.b=b
        self.c=c
    def ChuVi(self):
        ab=self.a.canh(self.b)
        ac=self.a.canh(self.c)
        bc=self.b.canh(self.c)
        if ab+ac<=bc or ab+bc<=ac or bc+ac<=ab:
            print("INVALID")
        else:
            cvi=ab+bc+ac
            print(f"{cvi:.3f}")
data_sys=sys.stdin.read().split()
t=int(data_sys[0])
i=1
for _ in range(t):
    x1,y1,x2,y2,x3,y3=map(float,data_sys[i:i+6])
    i+=6
    p1=Point(x1,y1)
    p2=Point(x2,y2)
    p3=Point(x3,y3)
    p4=Triangle(p1,p2,p3)
    p4.ChuVi()