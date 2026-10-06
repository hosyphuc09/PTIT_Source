from datetime import datetime
with open("CATHI.in","r") as f:
    n=int(f.readline())
    ds=[]
    for i in range(1,n+1):
        ma_ca="C"+str(i).zfill(3)
        ngay=f.readline().strip()
        gio=f.readline().strip()
        phong=f.readline().strip()
        ds.append((ma_ca,ngay,gio,phong))
ds.sort(key=lambda x:(
    datetime.strptime(x[1],"%d/%m/%Y"),
    datetime.strptime(x[2],"%H:%M"),
    x[0]
))
for ca in ds:
    print(ca[0],ca[1],ca[2],ca[3])