num=float(input("请输入一个数字: "))
if num>0:
    print("这是正数")
elif num<0:
    print("这是负数")
else:
    print("这是零")
    
if num>=90:
    print("优秀")
elif num>=80:
    print("良好")
elif num >= 60:
    print("及格")
else:
    print("不及格")