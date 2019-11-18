temp = input()
temp = temp.split()

n1 = float(temp[0])
n2 = float(temp[1])
n3 = float(temp[2])
n4 = float(temp[3])

media = ((n1*2) + (n2*3) + (n3*4) + (n4)) / 10


print("Media: {:.1f}".format(media))

if media >= 7:
    print("Aluno aprovado.")

elif media < 5:
    print("Aluno reprovado.")

elif 5 <= media < 7:
    print("Aluno em exame.")
    n5 = float(input())

    media = (media+n5) / 2

    print("Nota do exame: {:.1f}".format(n5))
    if media < 5:
        print("Aluno reprovado.")

    elif media >= 5:
        print("Aluno aprovado.")

    print("Media final: {:.1f}".format(media))
