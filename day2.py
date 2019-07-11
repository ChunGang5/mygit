#!/usr/bin/env python
# -*- coding : utf-8 -*-

'''
a=321
b = 123
print(a +b)
print(a / b)
print(a // b)   #整除
print(a % b)        #75   返回除法的余数
print(a ** b)       #幂运算a的b次方

'''


'''
a = int(input('a = '))
b = int(input('b = '))
print('%d + %d = %d' % (a, b, a + b))
print('%d - %d = %d' % (a, b, a - b))
print('%d * %d = %d' % (a, b, a * b))
print('%d / %d = %f' % (a, b, a / b))
print('%d // %d = %d' % (a, b, a // b))
print('%d %% %d = %d' % (a, b, a % b))
print('%d ** %d = %d' % (a, b, a ** b))
'''



#用type()检查变量的类型

a = 100
b = 15.44
c = 1 + 5j      #class 'complex'
d = 'hello world'
e = True
print(type(a))
print(type(b))
print(type(c))      
print(type(d))
print(type(e))



'''
a=5
print(chr(10))
b= 10
c = 3
e = 5
a +=b
a -= c
a *= b
a /= e
print(a)

flag1 = 3 > 2
flag2 = 2 < 1
flag3 = flag1 and flag2
flag4 = flag1 or flag2
flag5 = not flag1
print(flag1)
print(flag2)
print(flag3)
print(flag4)
print(flag5)


#将华氏温度转换为摄氏温度

f = float(input('请输入华氏温度: '))
c = (f - 32) / 1.8
print('%.1f华氏度 = %.1f摄氏度' % (f, c))


#判断是不是闰年
year = int(input("请输入一个年份："))

if year / 4 == 0 and year / 100 != 0 or year / 400 == 0:
    print(True)
else:
    print(False)
    
    
    
英寸厘米转换  
value = float(input("请输入一个长度："))
unit = input("请输入一个单位")

#  in = cm * 2.54
if unit == 'in' or unit == '英寸':
    print('%f英寸 = %f 厘米' % (value,value * 2.54))
elif unit == 'cm' or unit == '厘米':     #python 中elif可以多次使用
    print('%f厘米 == %f 英寸' % (value, value / 2.54))
else:
    print("请重新输入单位")
    
    
    
    
from random import randint    #使用了random模块的randint函数生成指定范围的随机数   random 生成随机数模块 ，randint 生成随机数的范围
number = randint(1,6)
print(number)   


 #练习4：输入三条边长如果能构成三角形就计算周长和面积
import math
a = float(input("请输入边a的长度："))
b = float(input("请输入边b的长度："))
c = float(input("请输入边c的长度："))

if a + b >= c or b + c >= a or a + c >= b:
    print("周长为：%f" % (a + b + c))
    p = (a + b + c) / 2
    area = math.sqrt(p * (p - a) * (p - b) * (p - c))       #math.sqrt   数学方式开平方
    print('面积为：%f' % area)
else:
    print('这不是个三角形')
    

a = -10
juedui = abs(a)         #abs()函数，取绝对值
print(juedui)



#用于循环实现1〜100求和
sum = 0
for i in range(1,101):
    sum+=i
print('sum = %d ' %  sum)

'''









