print("\tpilih program    ")
print("\t1. Penjumlahan   ")
print("\t2. Pengurangan   ")
print("\t3. Perkalian     ")
print("\t4. Pembagian     ")
print("\t5. Exit          ")

print("Masukkan pilihan   ", end='')
pprogram=int(input())
match pprogram:
    case 1:
        print("Masukkan Nilai Pertama   :", end=' ')
        a=float(input())
        print("Masukkan Nilai Kedua     :", end=' ')
        b=float(input())
        hasil=float( a+b)
        print("Hasil penjumlahan antara {:.2f} dengan {:.2f} adalah {:.2f} ". format (a,b,hasil))
    
    case 2:
        print("Masukkan Nilai Pertama   :")
        a=float(input())
        print("Masukkan Nilai Kedua     :")
        b=float(input())
        hasil=float( a-b)
        print("Hasil pengurangan antara {:.2f} dengan {:.2f} adalah {:.2f} ". format (a,b,hasil))
        
    case 3:
        print("Masukkan Nilai Pertama   :")
        a=float(input())
        print("Masukkan Nilai Kedua     :")
        b=float(input())
        hasil=float( a*b)
        print("Hasil perkalian antara {:.2f} dengan {:.2f} adalah {:.2f} ". format (a,b,hasil))
        
    case 4:
        print("Masukkan Nilai Pertama   :")
        a=float(input())
        print("Masukkan Nilai Kedua     :")
        b=float(input())
        hasil=float( a/b)
        print("Hasil pembagian antara {:.2f} dengan {:.2f} adalah {:.2f} ". format (a,b,hasil))
    case 5:
        print("Terima kasih, telah menggunakan kalkulator MELDIANA HANDAYANI")
    case 6:
           print("Input anda salah, silahkan coba lagi. ")
    
    
    

