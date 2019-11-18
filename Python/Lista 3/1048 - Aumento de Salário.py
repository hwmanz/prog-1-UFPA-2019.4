sal = float(input())

if 0 < sal <= 400:
    percentual = 0.15

elif 400 < sal <- 800:
    percentual = 0.12

elif 800 < sal <= 1200:
    percentual = 0.1

elif 1200 < sal <= 2000:
    percentual = 0.07

elif sal > 2000:
    percentual = 0.04

reajuste = sal * percentual
sal += reajuste

print("Novo salario: {:.2f}\nReajuste ganho: {:.2f}\nEm percentual: {:.0f} %".format(sal, reajuste, percentual*100))
