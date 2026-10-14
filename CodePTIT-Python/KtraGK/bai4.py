n=int(input())
ds=[]
for i in range(n):
    ma_game=input().strip()
    ten=input().strip()
    gio_vao=input().strip()
    gio_ra=input().strip()
    vao=int(gio_vao[:2])*60+int(gio_vao[3:])
    ra=int(gio_ra[:2])*60+int(gio_ra[3:])
    tg=ra-vao
    ma=f"{i+1:02d}T"
    ds.append((ma_game,ten,ma,tg))
ds.sort(key=lambda x: -x[3])
for ma_game,ten,ma,tg in ds:
    print(ma_game,ten,tg//60,"gio",tg%60,"phut")