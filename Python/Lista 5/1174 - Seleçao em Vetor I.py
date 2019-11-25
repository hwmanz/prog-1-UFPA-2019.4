vetor1 = []
vetor2 = []

for i in range(0, 100):
    vetor1.append(float(input()))

    if vetor1[i] <= 10:
        vetor2.append(i)

for i in vetor2:
    print("A[{}] = {}".format(i, vetor1[i]))
