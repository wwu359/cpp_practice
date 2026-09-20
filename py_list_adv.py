nums=[0,1,2,3,4,5,6,7,8,9]

print("取第2到第4个: ",nums[2:5])
print("取前三个:",nums[:3])
print("取第五个之后:",nums[5:])
print("每隔一个取一个:",nums[::2])
print("反向反转列表:",nums[::-1])
print("负索引取最后三个:",nums[-3:])



scores=[12,45,7,89,23,56,45]

scores.append(100)
print("添加后：",scores)

scores.pop(2)
print("删下标2后:",scores)

print("45的位置:",scores.index(45))

print("45出现的次数:",scores.count(45))

scores.sort()
print("排序后:",scores)

scores.reverse()
print("反转后:",scores)

# 7. 同时遍历序号和元素（enumerate）
print("\n序号-成绩:")
for i,s in enumerate(scores):
    print(f"第{i+1}名：{s}分")