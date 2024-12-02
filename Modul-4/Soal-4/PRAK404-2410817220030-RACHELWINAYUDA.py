def kalkulator():

    while True:
        print("\nPilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")
        pilihan = input("Masukkan Pilihan : ")

        if pilihan not in ['1', '2', '3', '4', '5']:
            print("Input anda salah, silahkan coba lagi")
            continue
        
        if pilihan == '5':
            print(f"Terimakasih, telah menggunakan kalkulator RACHELWINAYUDA")
            break

        nilai_pertama = float(input("Masukkan nilai pertama : "))
        nilai_kedua = float(input("Masukkan nilai kedua : "))

        if pilihan == '1':
            hasil = nilai_pertama + nilai_kedua
            print(f"Hasil Penjumlahan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif pilihan == '2':
            hasil = nilai_pertama - nilai_kedua
            print(f"Hasil Pengurangan antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif pilihan == '3':
            hasil = nilai_pertama * nilai_kedua
            print(f"Hasil perkalian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
        elif pilihan == '4':
            if nilai_kedua != 0:
                hasil = nilai_pertama / nilai_kedua
                print(f"Hasil Pembagian antara {nilai_pertama:.2f} dengan {nilai_kedua:.2f} adalah {hasil:.2f}")
            else:
                print("Error: Pembagian dengan nol tidak diperbolehkan")
                
kalkulator()