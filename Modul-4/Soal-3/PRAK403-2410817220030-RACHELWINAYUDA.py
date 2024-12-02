input_data = input()
angka1, angka2 = map(int, input_data.split())

if angka1 < angka2:
    for i in range(angka1, angka2 + 1):
        j = angka2 - (i - angka1)
        print(i, j, end="")
        if i < angka2:
            print(" - ", end="")
else:
    for i in range(angka1, angka2 - 1, -1):
        j = angka2 + (angka1 - i)
        print(i, j, end="")
        if i > angka2:
            print(" - ", end="")