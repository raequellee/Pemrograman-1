batas=int(input())
angka=list(map(int, input().split()))

for i in range(batas):
    print(angka[i]*(i+1), end=" ")