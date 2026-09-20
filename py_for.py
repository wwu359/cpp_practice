total=0
for i in range(1,11):
    total+=i
print("1到10的和：",total)


for i in range(1,10):
    for j in range(1,i+1):
        print(f"{i}*{j}={i*j}",end="\t")
    print()
    
i=1

while i<=100:
    if i%7==0:
        i+=1
        continue
    total+=i
    i+=1

print("1到100（跳过7的倍数）的和：", total)
    