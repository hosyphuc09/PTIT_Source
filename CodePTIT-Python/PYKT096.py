class Team:
    def __init__(self,ten,truong):
        self.ten=ten
        self.truong=truong
class ThiSinh:
    def __init__(self,dem,ten,Team):
        self.ten=ten
        self.Team=Team
        self.ma=f"C{dem:03d}"
    def __str__(self):
        return f"{self.ma} {self.ten} {self.Team.ten} {self.Team.truong}"
n=int(input())
dsTeam=[]
for i in range(n):
    ma=input()
    truong=input()
    team=Team(ma,truong)
    dsTeam.append(team)
m=int(input())
dsTS=[]
for i in range(m):
    ten=input().strip()
    team=input()
    so=int(team[4:])
    for j,x in enumerate(dsTeam):
        if so==j+1:
            ts=ThiSinh(i+1,ten,x)
            dsTS.append(ts)
dsTS.sort(key=lambda x:x.ten)
for x in dsTS:
    print(x)