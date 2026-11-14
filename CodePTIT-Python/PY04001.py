from decimal import Decimal
class Point:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def distance(self, x):
        p1=self.a-x.a
        p2=self.b-x.b
        d=(p1**2+p2**2).sqrt()
        return f"{d:.4f}"
