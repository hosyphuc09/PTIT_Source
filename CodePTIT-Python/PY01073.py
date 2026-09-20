s=input()
res=[]
used=[False]*len(s)
def Try():
    if len(res)==len(s):
        print(''.join(res))
        return
    for i in range(len(s)):
        if not used[i]:
            used[i]=True
            res.append(s[i])
            Try()
            res.pop()
            used[i]=False
Try()