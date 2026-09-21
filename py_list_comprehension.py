# 示例1：生成1-10的平方列表
# 普通写法
squares=[]
for i in range(1,11):
    squares.append(i*i)

# 列表推导式写法
squares=[i*i for i in range(1,11)]
print("1-10的平方:",squares)

# 示例2：筛选出所有及格的分数
scores=[85,59,92,76,45,88]

# 普通写法
pass_scores=[]
for s in scores:
    if s>=60:
        pass_scores.append(s)

# 列表推导式写法
pass_scores=[s for s in scores if s>=60]
print("及格分数；",pass_scores)

# 示例3：把所有分数统一加5分
add_scores=[s + 5 for s in scores]
print("每人加5分: ",add_scores)

# 示例4：嵌套循环：生成所有组合
subjects=["语文","数学"]
students=["张三","李四"]
combine=[f"{s}--{sub}" for s in students for sub in subjects]
print("组合:",combine)


# 把姓名列表和分数列表组合成字典
names=["张三","李四","王五"]
scores=[85,92,78]

score_dict={name:score for name,score in zip(names,scores)}
print("生成的字典:",score_dict)