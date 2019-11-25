n = int(input())

temp = input().split(' ')

v = []

for i in range(0, n):
    v.append(int(temp[i]))

for i in range(0, n):
    if i == 0:
        menor = v[i]
        pos = i

    else:
        if v[i] < menor:
            menor = v[i]
            pos = i

print("Menor valor: {}".format(menor))
print("Posicao: {}".format(pos))
