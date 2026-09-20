def ten(s,m,k,s1):
   if len(s1)==k:
      print(*s1)
      return
   for i in range(m,len(s)):
      ten(s,i+1,k,s1+[s[i]])
n,k=map(int,input().split())
s=set(input().split())
s=sorted(s)
ten(s,0,k,[])