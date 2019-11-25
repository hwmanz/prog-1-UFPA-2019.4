cPar = 0
cImpar = 0
par = [0, 0, 0, 0, 0]
impar = [0, 0, 0, 0, 0]

for i in range(0, 15):
    n = int(input())

    if n % 2 == 1:
        if cImpar == 4:
            for i in range(0, 5):
                impar[4] = n
                print("impar[{}] = {}".format(i, impar[i]))
                cImpar = 0
        else:
            impar[cImpar] = n
            cImpar += 1
    
    else:
        if cPar == 4:
            for i in range(0, 5):
                par[4] = n
                print("par[{}] = {}".format(i, par[i]))
                cPar = 0
        
        else:
            par[cPar] = n
            cPar += 1

for i in range(0, cImpar):
    print("impar[{}] = {}".format(i, impar[i]))

for i in range(0, cPar):
    print("par[{}] = {}".format(i, par[i]))
