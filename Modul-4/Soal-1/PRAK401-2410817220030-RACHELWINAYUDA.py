input_data = input()
kelipatan, simbol = input_data.split()
kelipatan = int(kelipatan)

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")