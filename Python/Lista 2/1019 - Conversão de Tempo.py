sec = int(input())

hora = sec // 3600
sec %= 3600

minu = sec // 60
sec %= 60

print("{}:{}:{}".format(hora, minu, sec))
