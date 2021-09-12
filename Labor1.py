import math

x1=float(input("Введіть X координату першої вершини "))
y1=float(input("Введіть Y координату першої вершини "))
x2=float(input("Введіть X координату другої вершини "))
y2=float(input("Введіть Y координату другої вершини "))
x3=float(input("Введіть X координату третьої вершини "))
y3=float(input("Введіть Y координату третьої вершини "))

a = math.sqrt(((x1 - x2)** 2) + ((y1 - y2)** 2))
b = math.sqrt(((x2 - x3)** 2) + ((y2 - y3)** 2))
c = math.sqrt(((x3 - x1)** 2) + ((y3 - y1)** 2))

per = a + b + c
p = (a + b + c) / 2
sq = math.sqrt(p * (p - a) * (p - b) * (p - c))

print("Периметр="+str(per)+"\n"+"Площа="+str(sq))

