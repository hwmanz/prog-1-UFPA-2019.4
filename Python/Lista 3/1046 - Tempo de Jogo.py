temp = input()
temp = temp.split()

start = int(temp[0])
end = int(temp[1])

if (start == end):
    print("O JOGO DUROU 24 HORA(S)")

else:
    end = end + 24 if (end < start) else end

    time = end - start
    print("O JOGO DUROU {} HORA(S)".format(time))
