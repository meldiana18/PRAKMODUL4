print("masukkan nilai batas = ", end=' ')
batas= int(input())
for i in range (1, batas):
       if i%2 !=0:
              print('%d '%i,end='')
print("\n")
j= batas
while j>=1:
       if j%2==0:
              print(j , end=' ')
       j-=1