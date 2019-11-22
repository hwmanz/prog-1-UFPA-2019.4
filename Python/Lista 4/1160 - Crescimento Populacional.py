from math import floor

def testCase(popA, popB, taxaA, taxaB):
    for i in range (1, 101):
        popA = floor(popA*taxaA)
        popB = floor(popB*taxaB)

        if popA > popB:
            return i
    
    return 0

testCases = int(input())

for i in range(0, testCases):
    temp = input().split(' ')
    
    popA = int(temp[0])
    popB = int(temp[1])
    taxaA = 1 + (float(temp[2]) / 100)
    taxaB = 1 + (float(temp[3]) / 100)

    u = testCase(popA, popB, taxaA, taxaB)

    if u == 0:
        print("Mais de 1 seculo.")

    else:
        print("{} anos.".format(u))
