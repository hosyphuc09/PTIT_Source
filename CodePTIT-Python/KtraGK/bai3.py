n=int(input())
ds=[]
for i in range(n):
    ten=input().strip()
    lt=float(input())
    th=float(input())
    tb=round((lt+th) / 2,2)
    if tb<5:
        loai="TRUOT"
    elif tb<8:
        loai="CAN NHAC"
    else:
        loai="DAT"
    ma=f"TS{i+1:02d}"
    ds.append((ma,ten,tb,loai))
ds.sort(key=lambda x: (-x[2],x[0]))
for ma,ten,tb,loai in ds:
    print(ma, ten, f"{tb:.2f}",loai)