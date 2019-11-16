name = input()
salary = float(input())
sales = float(input())

bonus = sales * 0.15
salary += bonus

print("TOTAL = R$ {:.2f}".format(salary))
