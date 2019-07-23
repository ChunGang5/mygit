#!/usr/bin/env python
# -*- coding : utf-8 -*-

"""
输入M和N计算C(M,N)


m = int(input("请输入m"))
n = int(input("请输入n"))

fm = 1
for num in range(1,m+1):
    fm *= num
fn = 1
for num in range(1,n+1):
    fn *= num
fmn = 1
for num in range(1,m-n+1):
    fmn *= num
print(fm // fn // fmn)

#函数形式的
def factorial(num):
    resert = 1
    for i in range(1,num + 1):
        resert *= i
    return resert

m = int(input("请输入m"))
n = int(input("请输入n"))

print(factorial(m) // factorial(n) // factorial(m-n))
"""

'''
# 在参数名前面的*表示args是一个可变参数
def add(*args):
    total = 0
    for val in args:
        total += val
    return total


print(add())
print(add(1))
print(add(1, 2))
print(add(1, 2, 3))
print(add(1, 3, 5, 7, 9))
'''

'''
def gcd(x,y):
    (x, y) = (y, x) if x > y else (x , y)
    for i in range(x,0,-1):
        if x % i == 0 and y % i == 0:
            print("最大公约数为%d" % i)

def gbs(x, y):
    return x * y // gcd(x, y)

x = int(input("请输入一个数"))
y = int(input("请输入一个数"))
print(gcd(x, y))
print(gbs(x, y))
'''

'''
#判断回文数
def is_palindrome(num):
    temp = num
    tatol = 0
    while temp > 0:
        tatol = tatol * 10 + temp % 10
        temp =temp // 10
    if tatol == num:
        return tatol == num
        print("Yes")
    else:
        print("No")
n = int(input())
print(is_palindrome(n))
'''

def is_prime(num):
    temp = num
    for n in (2,num):
        if temp // n == 0:
            return  False
    if num != 1:
        return  True
    else:
        False
