
a = 10; b = 5  # 单行定义多个变量
c = [a, b][a < b]  # 将a、b中的小值赋值给c
# 若 a < b 为 True, 取 [a, b][1]; 若 a < b 为 False, 取 [a, b][0]
print("c = " + str(c))
# 也可以写成如下形式：
c = a if a < b else b

del c  # 清除变量

sum = 1
for i in range(2, 100):
    for j in range(2, i):
        if i % j == 0:
            break
    # 当配对的for正常执行完毕时执行else内的代码；break跳出循环时则不执行
    else:
        sum += i
print("0 ~ 100内的素数之和为：" + str(sum))

# 函数接受字典和列表作为参数
list_arg = [1, 2, 3, 4, 5]
dict_arg = {"name": "小明", "age": "12"}
def print_args(*args, **kwargs):  # 使用*和**注明形参类型
    print(args)
    print(kwargs)
print_args(*list_arg, **dict_arg)

# 列表推导
list_a = [1, 4, 5, 3, 8, 10, 2]  # 这是一个列表
# 做一些操作，比如想要拿出所有的偶数元素组成一个新的列表
# 可以用如下写法
list_b = [i for i in list_a if i % 2 == 0] # 对list_a中的每一个元素，若该元素模2为0则设置该元素
print("list_b is " + str(list_b))
# 同理用于元组、集合、字典

# lambda表达式
# 是不是很像Wolfram
# 冒号前面是参数，后面是语句
f = lambda x: x+1
print("f(12): " + str(f(12)))
# 如此可以方便的排序列表，比如不管正负按绝对值排序
list_c = [15, -8, 12, 23, -7, -14, 4, 0, -3, -9, 2]
list_c.sort(key = lambda x: abs(x))
print("list_c is " + str(list_c))

# 链式调用
# 当返回的数据结构一致时可以这样用
class Number():
    def __init__(self, val):
        self.number = val
    def add(self):
        self.number += 1
        return self
    def minus(self):
        self.number -= 2
        return self

num_tmp = Number(10)
print(num_tmp.add().minus().add().add().add().add().minus().add().number)
