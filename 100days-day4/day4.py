#!/usr/bin/env python
# -*- coding : utf-8 -*-


"""
猜数字游戏
计算机出一个1~100之间的随机数由人来猜
计算机根据人猜的数字分别给出提示大一点/小一点/猜对了
"""
"""
import random
answer = random.randint(1,100)      #产生离散分布的整数int型
count = 0;
while True:
    count += 1
    number = int(input("请输入一个数字"))       #""把输入的数字当成了字符串str输入，但是<号却要用int类型的作比较  就会出现错误。
    if number > answer:
        print("偏大了")
    elif number < answer:
        print("偏小了")
    else:
        print(number)
    break

print("你总共猜了%d次" % count)
if count > 5:
    print("你的实力有限啊")

"""


#输出乘法口诀表(九九表)
'''
for i in range(1,10):
    for j in range(1,i + 1):
        print("%d * %d = %d" % (j,i,i*j),end='\t')
    print( )
'''

'''
#输入一个正整数判断它是不是素数

from math import sqrt
num = int(input("请输入一个正整数"))
end = int(sqrt(num))
prime = True
for x in range(2,end+1):
    if num % x == 0:
        prime = False
        break
if prime and num != 1:    #右边符号的优先级一般都大于左边的
    print("%d是素数" % num)
else:
    print("%d不是素数" % num)
'''

'''
#输入两个正整数计算最大公约数和最小公倍数
x = int(input("请输入一个正整数"))
y = int(input("请输入一个正整数"))
if x > y:
    for fount in range(y,0,-1):
        if x % fount == 0 and y % fount == 0:
            break
    print("最大公约数是%d" % fount )
    print("最小公倍数是%d" % x*y/fount)
'''

row = int(input('请输入行数: '))
for i in range(row):
    for _ in range(i + 1):
        print('*',end='')
    print()