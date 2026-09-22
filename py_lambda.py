# 普通函数写法
def add(a,b):
    return a+b

# lambda写法，效果完全一样
add_lambda=lambda a,b:a+b

print(add(3,5))
print(add_lambda(3,5))

# 常见场景：作为参数传给别的函数，不用单独定义
# 比如按字典的值排序
students={"张三": 85, "李四": 92, "王五": 78}
# 按成绩从低到高排序，key指定排序依据
sorted_stu=sorted(students.items(),key=lambda x:x[1])
print("按成绩排序:",sorted_stu)