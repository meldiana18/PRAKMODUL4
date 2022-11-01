print("batas =  ", end=' ')
n1= int(input())
n2= int(input())
i=n1
j=n2+1
for i in range ( n1, n2+1):
    j=j-1
    print('%d %d - '%  (i,j), end=' ' )
i=n2
j=n1
for j in range (n2,n1):
    if n2>n1:
        print('%d %d - '% (j,i))


