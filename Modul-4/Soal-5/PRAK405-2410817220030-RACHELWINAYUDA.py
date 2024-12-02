input_angka = input()
n, kelipatan = map(int, input_angka.split())
total = 0

for i in range(1, n + 1):
    hasil = 0
    for j in range(i, 0, -1):
        hasil += j * kelipatan
        print(f"({j} * {kelipatan})", end="")
        if j > 1:
            print(" + ", end="")
    print(f" = {hasil}")
    total += hasil
print(total)