#定义列表
scores = [85,92,78,90,88]

#遍历打印
print("所有成绩:")
for s in scores:
    print(s)
    
    
avg=sum(scores)/len(scores)
print("平均分: ",avg)

scores.append(95)
print("加了一个成绩后: ",scores)

scores.pop(2)
print("删了第三个后: ",scores)