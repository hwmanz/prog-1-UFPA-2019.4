casos = int(input())
n = []
caseIn = 0
caseOut = 0
for i in range(0, casos):
    if 10 <= int(input()) <= 20:
        caseIn += 1

    else:
        caseOut += 1

print("{} in".format(caseIn))
print("{} out".format(caseOut))
