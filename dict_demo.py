scores={"张三":85,"李四":92,"王五":78}

print("李四的成绩: ",scores["李四"])

scores["赵六"]=90
print("添加后: ",scores)

scores["张三"]=80
print("修改后： ",scores)

print("\n全部成绩:")

for name,score in scores.items():
    print(f"{name}:{score}分")
