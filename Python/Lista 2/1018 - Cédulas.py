n = int(input())

nOriginal = n

n100 = n // 100
n %= 100

n50 = n // 50
n %= 50

n20 = n // 20
n %= 20

n10 = n // 10
n %= 10

n5 = n // 5
n %= 5

n2 = n // 2
n %= 2

print(nOriginal)
print("{} nota(s) de R$ 100,00".format(n100))
print("{} nota(s) de R$ 50,00".format(n50))
print("{} nota(s) de R$ 20,00".format(n20))
print("{} nota(s) de R$ 10,00".format(n10))
print("{} nota(s) de R$ 5,00".format(n5))
print("{} nota(s) de R$ 2,00".format(n2))
print("{} nota(s) de R$ 1,00".format(n))
