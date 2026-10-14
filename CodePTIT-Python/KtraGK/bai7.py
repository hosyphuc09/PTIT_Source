n,m=map(int,input().split())
ds=[]
for i in range(m):
    ten=input().strip()
    ma_tl=input().strip()
    ngay=input().strip()
    ten_phim=input().strip()
    so_tap=int(input())
    ma_phim=f"P{i+1:03d}"
    ds.append((ma_phim,ten,ma_tl,ngay,ten_phim,so_tap))
ds.sort(key=lambda x:(x[2],-x[5]))
for phim in ds:
    print(phim[0],phim[1],phim[3],phim[4],phim[5])