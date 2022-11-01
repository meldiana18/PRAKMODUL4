print("kelipatan = ", end=' ')
jumlah= int(input())
print("simbol    = ", end=' ')
klp= (input())
for i in range(1, 51):
  if i %jumlah !=0:
         print('%d'% i, end=' ')
  if i % jumlah ==0:
        print('%c'% klp, end=' ')
  
