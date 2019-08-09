'''print('char')'''

'''
i = 10
while i:
    print('我爱鱼 C!')
    i = i - 1
'''
#print("chengang");print("lvkaichun")

'''
a =2 or 3
print(a)       #短路效应，短路效应的延申
'''

'''
import random
times = 3
secret = random.randint(1, 10)
guess = 0
print("猜一下：",end="")
while(guess != secret) and (times):
    temp = input()
    guess  = int(temp)
    times -= 1
    if guess == secret:
        print("卧槽，牛皮")
    elif guess > secret:
        print("大了")
    elif guess < secret:
        print("小了")
    if times > 0:
        print("再试一次")
    else:
        print("机会用完了")
print("游戏结束！")
'''
'''
num = int(input("请输入一个整数"))
i = 1
while num:
    print(i)
    i = i + 1
    num = num - 1
'''

'''
num2 = int(input("请输入一个整数"))
while num2:
    print((" " * (num2-1)) + ("*" * num2))
    num2 -= 1
'''




