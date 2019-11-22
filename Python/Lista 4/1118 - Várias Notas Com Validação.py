novo = 1

def lernovo():
    n = int(input("novo calculo (1-sim 2-nao)\n"))
    if not (n == 1 or n == 2):
        n = lernovo()
        return n
    else:
        return n


while novo == 1:
    validas = 0
    soma = 0
    while validas != 2:
        n = float(input())
        if not 0 <= n <= 10:
            print("nota invalida")

        else:
            soma += n
            validas += 1

    media = soma / 2
    print("media = {:.2f}".format(media))
    novo = lernovo()
