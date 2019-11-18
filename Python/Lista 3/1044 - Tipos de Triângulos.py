temp = input()
temp = temp.split(' ')

a = float(temp[0])
b = float(temp[1])
c = float(temp[2])

while not (a >= b >= c):
    if b > a:
        aux = a
        a = b
        b = aux

    if c > b:
        aux = b
        b = c
        c = aux

isTri = ((a < b + c) and (b < c + a) and c < a + b)

def typer(a, b, c):
    if a == b == c:
        print("TRIANGULO EQUILATERO")

    elif a == b or b == c or a == c:
        print("TRIANGULO ISOSCELES")

if isTri:
    if a**2 == b**2 + c**2:
        print("TRIANGULO RETANGULO")
        typer(a, b, c)

    elif a**2 > b**2 + c**2:
        print("TRIANGULO OBTUSANGULO")
        typer(a, b, c)

    elif a**2 < b**2 + c**2:
        print("TRIANGULO ACUTANGULO")
        typer(a, b, c)
else:
    print("NAO FORMA TRIANGULO")
