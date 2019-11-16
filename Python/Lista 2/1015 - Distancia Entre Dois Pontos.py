from math import sqrt

temp = input()
temp = temp.split(' ')
x1 = float(temp[0])
y1 = float(temp[1])

temp = input()
temp = temp.split(' ')
x2 = float(temp[0])
y2 = float(temp[1])

dist = sqrt((x2 - x1)** 2 + (y2 - y1) ** 2)

print("{:.4f}".format(dist))
