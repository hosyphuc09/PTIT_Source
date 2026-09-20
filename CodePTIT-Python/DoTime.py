from time import time
n=1_000_000
even_number=[]
olds_number=[]
startLoopTime=time()
for x in range(n):
    if(x%2==0): even_number +=[x]
    else: olds_number +=[x]
endLoopTime =time()
print('Run Time:{:.3f}'.format(endLoopTime-startLoopTime))