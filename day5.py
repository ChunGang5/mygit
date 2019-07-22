#!/usr/bin/env python
# -*- coding : utf-8 -*-


'''
#水仙花数

num = int(input("请输入一个三位数"))

a = num / 100
b = num // 10 % 10
c = num % 10
if num == a ** 3 + b ** 3 + c ** 3:
    print("%d是一个水仙花数" % num)
else:
    print("不是水仙花数")
'''

'''
#找出1〜9999之间的所有完美数
#完美数是除自身外其他所有因子的和正好等于这个数本身的数
#例如：6 = 1 + 2 + 3,28 = 1 + 2 + 4 + 7 + 14

sum = 0
for i in range(1,10000):
    for j in (1,i+1):
        if i % j == 0:
            sum += j
    if i == sum:
        print("%d是完美数" % i)
'''

'''
#百钱百鸡

for x in range(0,20):
    for y in range(0,33):
        z = 100 - x - y
        if 5 * x + 3 * y + z / 3 == 100:
            print("公鸡%d,母鸡%d,小鸡%d" % (x ,y , z))
'''

'''
# 斐波那契数列

a = 0
b = 1
for _ in range(0,20):
    a,b = b , a + b
    print(a,end='   ')
'''

#Craps赌博游戏
#玩家摇两颗色子 如果第一次摇出7点或11点 玩家胜
#如果摇出2点 3点 12点 庄家胜 其他情况游戏继续
#玩家再次要色子 如果摇出7点 庄家胜
#如果摇出第一次摇的点数 玩家胜
#否则游戏继续 玩家继续摇色子
#玩家进入游戏时有1000元的赌注 全部输光游戏结束

from random import randint
money = 1000
while money > 0:
    print("您的资产为：",money)
    need_go_on = False
    debt = int(input("请下注："))
    while True:
        if debt > 0 and debt <= money:
            break
    first = randint(1,7) + randint(1 ,7)
    print("玩家摇出了%d点 1" % first)
    if first == 7 or first == 11:
        print("玩家胜")
        money += debt
    elif first == 2 or first == 3 or first == 12:
        print("庄家胜")
        money -= debt
    else:
        need_go_on = True

    while need_go_on:
        current = randint(1,7) + randint(1,7)
        print("玩家摇出了%d点2" % current)
        if current == 7:
            print("庄家胜")
            money -= debt
            need_go_on = False
        elif current == first:
            print("玩家胜")
            money += debt
            need_go_on = False

print("您破产了,game over!")