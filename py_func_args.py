def print_info(name,age=20,major="计算机"):
    print(f"姓名:{name},年龄:{age},专业:{major}")
    
# 1. 纯位置参数：按顺序对应
print_info("张三",21,"自动化")

# 2. 纯关键字参数：顺序可以任意
print_info(age=19,name="李四",major="电子")

# 3. 位置+关键字混合：位置参数必须放在关键字参数前面
print_info("王五",major="软件工程")

# 4. 默认参数：不传就使用默认值
print_info("赵六")


# 任意个数的数字求和
def add_all(*args):
    total=0
    for num in args:
        total+=num
    return total
print("1+2+3=",add_all(1,2,3))
print("1+2+3+4+5 =", add_all(1, 2, 3, 4, 5))

# 任意多个学生成绩打印
def print_scores(**kwargs):
    for name,score in kwargs.items():
        print(f"{name}:{score}分")

print_scores(张三=85,李四=92,王五=78)
        