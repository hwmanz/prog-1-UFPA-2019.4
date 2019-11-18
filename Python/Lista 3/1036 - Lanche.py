temp = input()
temp = temp.split(' ')

cod = int(temp[0])
quant = int(temp[1])

switch = {
    1: 4,
    2: 4.5,
    3: 5,
    4: 2,
    5: 1.5
}

total = quant * switch.get(cod)

print("Total: R$ {:.2f}".format(total))
