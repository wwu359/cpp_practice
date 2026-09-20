scores={"小明":82,"小红":95,"小刚":76}

scores["小丽"]=88

scores["小明"]=85


with open ("student_scores.txt","w") as f:
    for name,score in scores.items():
        f.write(f"{name},{score}\n")


total =0
count=0

with open("student_scores.txt","r") as f:
    for line in f.readlines():
        line=line.strip()# 去掉换行符
        if not line:
            coutinue
        name,score_str = line.split(",")
        total+=int(score_str)
        count+=1

average=total/count
print(f"全班平均分:{average}")
    


        

