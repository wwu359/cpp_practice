age =20
name="张三"
score=85.5

print(age)
print(name)
print(score)

age="二十岁"
print(age)

a = 10
b = 3.14
c = "hello"
d = True

print(type(a))  # <class 'int'>
print(type(b))  # <class 'float'>
print(type(c))  # <class 'str'>
print(type(d))  # <class 'bool'>


x = 10
y = 3

print("加：", x + y)
print("减：", x - y)
print("乘：", x * y)
print("除：", x / y)
print("整除：", x // y)
print("取余：", x % y)
print("x的y次方：", x ** y)

print("x大于y吗：", x > y)
print("x等于y吗：", x == y)

print(x > 5 and y < 5)  # True and True → True
print(not x > y)        # 取反 → False


s="Hello Python"

print("长度",len(s))
print("第一个字符",s[0])
print("切片",s[0:5])
print("大写",s.upper())
print("小写",s.lower())
print("拼接",s+"你好")