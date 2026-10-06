from datetime import datetime
f=open("MONTHI.in","r")
n=int(f.readline())
monhoc={}
for _ in range(n):
    ma=f.readline().strip()
    ten=f.readline().strip()
    hinhthuc=f.readline().strip()
    monhoc[ma]=ten
f.close()
f=open("CATHI.in","r")
n=int(f.readline())
cathi={}
for i in range (1,n+1):
    ma_ca="C"+str(i).zfill(3)
    ngay=f.readline().strip()
    gio=f.readline().strip()
    phong=f.readline().strip()
    cathi[ma_ca]=(ngay,gio,phong)
f.close()
f=open("LICHTHI.in","r")
n=int(f.readline())
lich=[]
for _ in range(n):
    ma_ca,ma_mon,nhom,so_sv=f.readline().split()
    ngay,gio,phong=cathi[ma_ca]
    ten_mon=monhoc[ma_mon]
    lich.append((
        ngay,
        gio,
        phong,
        ten_mon,
        nhom,
        so_sv,
        ma_ca
    ))
f.close()
def khoa(x):
    ngay=datetime.strptime(x[0],"%d/%m/%Y")
    gio=datetime.strptime(x[1],"%H:%M")
    return (ngay,gio,x[6])
lich.sort(key=khoa)
for x in lich:
    print(x[0],x[1],x[2],x[3],x[4],x[5])