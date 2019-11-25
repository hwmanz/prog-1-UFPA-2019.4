vetor = []

for i in range(0, 10):
    n = int(input())

    if n <= 0:
        vetor.append(1)
    
    else:
        vetor.append(n)

for i in range(0, 10):
    print("X[{}] = {}".format(i, vetor[i]))
