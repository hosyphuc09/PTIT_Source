n=int(input())
ds=[]
for i in range(n):
    ten=input()
    diem=list(map(float,input().split()))
    tong=diem[0]*2+diem[1]*2+sum(diem[2:])
    tb=round(tong/12+1e-8,1)
    if tb>=9:
        loai= "XUAT SAC"
    elif tb>=8:
        loai= "GIOI"
    elif tb >=7:
        loai ="KHA"
    elif tb>=5:
        loai= "TB"
    else: 
        loai ="YEU"
    ma=f"HS{i+1:02d}"
    ds.append((ma,ten,tb,loai))
ds.sort(key=lambda x:(-x[2],x[0]))
for ma,ten,tb,loai in ds:
    print(ma,ten,f"{tb:.1f}",loai)