# 1. 写入成绩到文件
scores=[85,92,78,90,88]

with open("scores.txt","w") as f:
    for s in scores:
        f.write(str(s)+"\n")# 每个成绩占一行
print("成绩已经写入scores.txt")


# 2. 从文件读取成绩，计算平均分
read_scores=[]
with open("scores.txt","r") as f:
    for line in f.readlines():
        line=line.strip()# 去掉换行符
        if line:
            read_scores.append(int(line))

avg=sum(read_scores)/len(read_scores)
print("读取到的成绩：",read_scores)
print("平均分",avg)