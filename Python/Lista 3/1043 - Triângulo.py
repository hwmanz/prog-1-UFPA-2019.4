temp = input()
temp = temp.split(' ')

a = float(temp[0])
b = float(temp[1])
c = float(temp[2])

isTri = ((a < b + c) and (b < c + a) and c < a + b)

if isTri:
    solution = a + b + c
    print("Perimetro = {:.1f}".format(solution))

else:
    solution = ((a+b) * c) / 2
    print("Area = {:.1f}".format(solution))
