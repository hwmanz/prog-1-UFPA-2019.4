c = 0
acumulador = 0

for i in range(0, 6):
    n = float(input())
    if n > 0:
        c += 1
        acumulador += n

media = acumulador / c

print("{} valores positivos".format(c))
print("{:.1f}".format(media))
