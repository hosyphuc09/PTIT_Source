import sys
from collections import deque
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    T=int(input_data[0])
    idx=1
    for _ in range(T):
        xA=int(input_data[idx])
        yA=int(input_data[idx+1])
        xB=int(input_data[idx+2])
        yB=int(input_data[idx+3])
        idx+=4
        N=int(input_data[idx])
        idx+=1
        valid_cells=set()
        for _ in range(N):
            x=int(input_data[idx])
            y1=int(input_data[idx+1])
            y2=int(input_data[idx+2])
            idx+=3
            for y in range(y1,y2+1):
                valid_cells.add((x,y))
        start=(xA,yA)
        target=(xB,yB)
        if start==target:
            print(0)
            continue
        q=deque([(xA,yA,0)])
        visited=set([start])
        found=False
        dirs=[(-1,-1),(-1,0),(-1,1),(0,-1),(0,1),(1,-1),(1,0),(1,1)]
        while q:
            cx,cy,dist=q.popleft()
            if (cx,cy)==target:
                print(dist)
                found=True
                break
            for dx,dy in dirs:
                nx,ny=cx+dx,cy+dy
                nxt=(nx,ny)
                if nxt in valid_cells and nxt not in visited:
                    visited.add(nxt)
                    q.append((nx,ny,dist+1))
        if not found:
            print(-1)
if __name__=='__main__':
    solve()