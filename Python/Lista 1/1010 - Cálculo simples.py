temp = input()
inputs = temp.split(' ') #a questao pede para que todos os valores sejam lidos em uma unica linha

cod1 = int(inputs[0])
num1 = int(inputs[1])
val1 = float(inputs[2])

temp = input()
inputs = temp.split(' ') #portanto, lê se uma string e a tranforma numa lista

cod2 = int(inputs[0])
num2 = int(inputs[1])
val2 = float(inputs[2]) #depois, atribui-se os valores lidos às váriaveis corretas

total = (num1*val1) + (num2*val2)

print("VALOR A PAGAR: R$ {:.2f}".format(total))
