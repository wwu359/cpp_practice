scores={
    "张三": 85,
    "李四": 92,
    "王五": 78
}

print("所有学生: ",list(scores.keys()))
print("所有分数: ",list(scores.values()))

new_scores={"赵六": 90, "孙七": 88}
scores.update(new_scores)
print("批量添加后:",scores)

# 3. 安全获取成绩，不存在返回0（不会报错）
print("李四的成绩: ",scores.get("李四",0))
print("周八的成绩: ",scores.get("周八",0))

wang_score=scores.pop("王五")
print("删除的王五的成绩:",wang_score)
print("删除后字典:",scores)


print("\n所有成绩清单:")
for name,score in scores.items():
    print(f"{name}:{score}分")

info=("张三",20,85.5)

# 按下标访问元素
print("姓名：",info[0])
print("年龄: ",info[1])

# 元组拆包：一次性把元素赋值给多个变量
name,age,score=info
print(f"拆包后：{name}，{age}岁，{score}分")

# 常见场景：函数返回多个值（本质是返回元组）
def get_student():
    return "李四",21,92.0 # 不用写括号，默认返回元组
s_name,s_age,s_score=get_student()
print(f"函数返回:{s_name},{s_age}岁")