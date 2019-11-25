n = []

for i in range(0, 10):
    n.append(0)

n[0] = int(input())

for i in range(1, 10):
    n[i] = n[i-1] * 2

for i in range(0, 10):
    print("N[{}] = {}".format(i, n[i]))
