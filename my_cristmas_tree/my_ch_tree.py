n=int(input('son'))
if (n-1)%2==0:
    yulduz=((n-1)*5)+1
else:
    yulduz=(n-1)*5
if n-1>2:
        yulduz=yulduz+(n-3)*2
maxyul=yulduz+((n+3)*2)
line=4
for i in range(n):
    if i%2==0:
        yulduz=(i*5)+1
    else:
        yulduz=i*5
    if i>2:
        yulduz=yulduz+(i-2)*2    
    for q in range(1,line+1):
        print(((maxyul//2)-(yulduz//2))*' '+yulduz*'*')
        yulduz+=2
    
    line+=1
for l in range(n):
    print(((maxyul//2)-(n//2))*' '+n*'|')