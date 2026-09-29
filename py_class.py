class Student:
    # 构造方法：创建对象时自动调用，self代表当前实例
    def __init__(self,name,age,score):
        # self.xxx 定义实例属性
        self.name=name
        self.age=age
        self.score=score
        print(f"{self.name}对象创建完成")
        
    # 实例方法：打印信息
    def show_info(self):
        print(f"姓名：{self.name},年龄:{self.age},成绩:{self.score}分")
    
    # 实例方法：修改成绩
    def set_score(self,new_score):
        self.score=new_score
        
        
# 创建两个学生实例
s1 = Student("张三", 20, 85.5)
s2 = Student("李四", 21, 92.0)

print("\n学生信息")
s1.show_info()
s2.show_info()

s1.set_score(88)
print("\n修改后张三的信息:")
s1.show_info()


class ClassManager:
    def __init__(self,class_name):
        self.class_name=class_name
        self.students=[]
    
    def add_student(self,student):
        self.students.append(student)
        print(f"已添加学生:{student.name}")
    
    def show_all(self):
        print(f"\n===== {self.class_name} 学生名单 =====")
        for stu in self.students:
            stu.show_info()
            
    def calc_average(self):
        if not self.students:
            return 0
    
        total=sum(stu.score for stu in self.students)
        return total/len(self.students)
    
class1=ClassManager("计算机1班")
class1.add_student(s1)
class1.add_student(s2)

class1.show_all()
avg=class1.calc_average()
print(f"\n全班平均分:{avg:.2f}")