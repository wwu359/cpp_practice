def add(a,b):
    return a+b

def calc_average(scores):
    if len(scores)==0:
        return 0
    return sum(scores)/len(scores)

def greet(name,greeting="你好"):
    print(f"{greeting},{name}")


print("3+5= ",add(3,5))

scores=[85,92,78,90]
print("平均分：",calc_average(scores))

greet("张三")
greet("李四","早上好")