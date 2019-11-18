v = input()
v = v.split(' ')


for i in range(0, 3):
    v[i] = int(v[i])

vOrignal = v.copy()

while not (v[0] < v[1] < v[2]):
    if v[0] > v[1]:
        aux = v[0]
        v[0] = v[1]
        v[1] = aux

    if v[1] > v[2]:
        aux = v[1]
        v[1] = v[2]
        v[2] = aux

print(v[0])
print(v[1])
print(v[2])
print('')
print(vOrignal[0])
print(vOrignal[1])
print(vOrignal[2])
