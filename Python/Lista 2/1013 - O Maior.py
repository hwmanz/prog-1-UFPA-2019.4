temp = input()
temp = temp.split(' ')

a = int(temp[0])
b = int(temp[1])
c = int(temp[2])

maiorA = (a + b + abs(a-b)) / 2
maiorB = (c + maiorA + abs(c-maiorA)) / 2

print("{:.0f} eh o maior".format(maiorB))
