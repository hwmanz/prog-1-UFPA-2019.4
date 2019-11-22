for i in range(1, 101):
    if i == 1:
        maior = int(input())
        pos = 1
    else:
        n = int(input())
        if n > maior:
            maior = n
            pos = i

print(maior)
print(pos)
