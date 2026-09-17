scores=[85,92,78,90,88]

with open("scores.txt","w") as f:
    for s in scores:
        f.write(str(s)+"\n")
print("成绩已经写入scores.txt")

read_scores=[]
with open("scores.txt","r") as f:
    for line in f.readlines():
        line=line.strip()
        if line:
            read_scores.append(int(line))

avg=sum(read_scores)/len(read_scores)
print("读取到的成绩：",read_scores)
print("平均分",avg)