import sys
import os
import time
import random

'''
def main():
  
    str1 = 'hello, world!'
    #通过len()函数来计算字符串的长度
    print(len(str1))
    #capitalize()函数，是内置函数，将字符串首字母大写拷贝，其余变小写
    print(str1.capitalize())    #Hello, world
    print(str1.upper())         #HELLO, WORLD!
    #寻找字串位置，找到返还其下表，找不到返回-1
    print(str1.find('w'))
    #检查字符串是否以指定字符开头，bool值
    print(str1.startswith("h"))
    # 检查字符串是否以指定字符结尾，bool值
    print(str1.endswith('!'))
    print(str1.center(50, '*'))     #******************hello, world!*******************
    print(str1.rjust(50," "))       ## 将字符串以指定的宽度靠右放置左侧填充指定的字符
    print(str1.ljust(50,"*"))
    str2 = 'abc123456'
    print(str2[2])      #c,取出下标位置字符串
    print(str2[2:5])    #左闭右开，序列
    print(str2.isdigit())   # # 检查字符串是否由纯数字构成
    print(str2.isalpha())    # 检查字符串是否以纯字母构成
    print(str2.isalnum())   # 检查字符串是否以数字和字母构成
    str3 = '    jackfrue@126.com    '
    print(str3)
    print(str3.strip())      # 获得字符串修剪左右两侧空格的拷贝
    print(str1.index('or'))    # 与find类似但找不到子串时会引发异常



    # list列表
    list1 = [1, 3, 5, 7, 100]
    print(list1)

    list2 = ['hello'] * 5
    print(list2)
    print(len(list1))
    print(list1[0])
    print(list1[-3])
    list1[2] = 300
    print(list1)
    list1.append(200)
    list1.insert(2,400)
    list1 += [1000,2000]
    print(list1)

    #删除
    list1.remove(3)
    if 1234 in list1:
        list1.remove(1234)
    if 1234 in list1:
        list1.remove(1234)
    del list1[0]
    print(list1)

    #清空列表
    list1.clear()
    print(list1)

    #切片操作

    fruits = ['grape', 'apple', 'strawberry', 'waxberry']
    fruits += ['pitaya', 'pear', 'mango']
    for fruit in fruits:
        print(fruit.title(),end=' ')    #Python title() 方法返回"标题化"的字符串,就是说所有单词都是以大写开始，其余字母均为小写
    print()
    #列表切片
    fruits2 = fruits[1:4]
    print(fruits2)
    # 没有复制列表只创建了新的引用
    #fruits3 = fruits
    fruits3 = fruits[:]
    print(fruits3)
    fruits4 = fruits[-1:-5:1]
    # 可以通过反向切片操作来获得倒转后的列表的拷贝
    fruits5 = fruits[::-1]
    print(fruits5)

    #列表的排序操作
    list1 = ['orange', 'apple', 'zoo', 'pear', 'blueberry']
    list2 = sorted(list1)
    #sorted()函数按照list 的 sort 方法返回的是对已经存在的列表进行操作，无返回值，而内建函数 sorted 方法返回的是一个新的 list，而不是在原来的基础上进行的操作。
    list3 = sorted(list1,reverse=True)
    #reverse -- 排序规则，reverse = True 降序 ， reverse = False 升序（默认）。
    list4 = sorted(list1, key = len,reverse=True)
    ## 通过key关键字参数指定根据字符串长度进行排序而不是默认的字母表顺序
    print(list1)
    print(list2)
    print(list3)
    print(list4)
    list1.sort(reverse=True)
    print(list1)


    #用生成式语法来创建列表
    f = [x for x in range(1,10)]
    print(f)
    f = [x + y for x in 'ABCDE' for y in '123456']
    print(f)

    f = [x ** 2 for x in range(1,1000)]
    print(sys.getsizeof(f))     #查看对象占用内存的字节数
    print(f)

    f = (x ** 2 for x in range(1,1000))
    print(sys.getsizeof(f))
    print(f)
    for val in f:
        print(val)
    

#用生成器语法定义妃妾那波数量列表
def fib(n):
    a , b = 0,1
    for _ in range(n):
        a, b = b, a + b
        yield a

def main():
    for val in fib(20):
        print(val)

def main():
    t = ('陈刚', 'shuaibi', 20 )
    print(t)
    print(t[0])
    for i in t:
        print(i)
    t = ('吕凯纯', 'xiaoshabi', 20)
    print(t)
    #将元祖转换为列表
    person = list(t)
    print(person)
    #将列表转换为元组
    fruits_list = ['apple', 'banana', 'orange']
    fruits_tuple = tuple(fruits_list)
    print(fruits_tuple)
    print(sys.getsizeof(fruits_tuple))      #72
    print(sys.getsizeof(fruits_list))       #88
    #由此可见创建同样的元组和列表，元组的占用空间小


    #集合set
    set1 = {1, 2, 3, 3, 3, 2}
    print(set1)     #{1, 2, 3}   不允许有重复元素
    print('Length = ',len(set1))
    set2 = set(range(1, 10))
    print(set2)
    set1.add(4)
    set2.update([11, 12])
    set2.discard(5)     #丢弃5
    set2.pop()
    print(set1)
    print(set2)
    for elem in set2:
        print(elem ** 2, end=' ')
    # 集合的交集、并集、差集、对称差运算
    #print(set2 &set1)
    print(set1.intersection(set2))
    #print(set1 | set2)
    print(set1.union(set2))
    #print(set1 - set2)
    print(set1.difference(set2))
    #print(set1 ^ set2)
    print(set1.symmetric_difference(set2))
    # 判断子集和超集
    print(set2 <= set1)
    print(set2.issubset(set1))
    print(set2 >= set1)
    print(set2.issuperset(set1))


    #字典dict
    dict = {'陈刚': 5}
    print(dict['陈刚'])
    for elem in dict:
        print('%s\t--->\t%d' % (elem, dict[elem]))      #正则表达式

    dict['陈刚'] = 55

    dict.update(冷面=67)
    print(dict)
    print(dict.get('武则天',60))
    print(dict.popitem())
    dict.clear()
    print(dict)



    #练习
    #练习1：在屏幕上显示跑马灯文字
    content ='北京欢迎你.......'
    while True:
        os.system('cls')
        print(content)
        time.sleep(0.5)
        content = content[1:] + content[0]
if __name__ == '__main__':
    main()

    
    #练习2：设计一个函数产生指定长度的验证码，验证码由大小写字母和数字构成。
def generate_code(code_len = 4):
    all_chars = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    last_pos = len(all_chars) - 1
    code = ''
    for _ in range(code_len):
        index = random.randint(0, last_pos)
        code += all_chars[index]
    print(generate_code())
 
def main():
    num = int(input('Number of rows: '))
    yh = [[]] * num     #yh是一个列表，这行代码表示有多少行，或者多少个列表
    print(len(yh))
    for row in range(len(yh)):
        yh[row] = [None] * (row + 1)    #这行即表示了该行有几个元素，而且因为range()左闭右开，为下行代码col打下了基础。
        print(yh[row])
        for col in range(len(yh[row])):
            if col == 0 or col == row:
                yh[row][col] = 1
            else:
                yh[row][col] = yh[row - 1][col] + yh[row - 1][col - 1]
            print(yh[row][col], end='\t')
        print()
if __name__ == '__main__':
    main()


#案例1：双色球选号
from random import randrange,randint, sample


def display(balls):
    for index, ball in enumerate(balls):        #函数enumerate()遍历一个数据结构，有下标和值
        if index == len(balls) - 1:
            print('|',end=' ')
        print('%02d' % ball,end=' ')
    print()


def random_select():
    red_balls = [x for x in range(1, 34)]
    selected_balls = []
    selscted_balls = sample(red_balls, 6)       #从red_bolls中枚举不重复的6个数
    selected_balls.sort()
    selected_balls.append(randint(1, 16))
    return selected_balls


def main():
    n = int(input('机选几注： '))
    for _ in range(n):
        display(random_select())


if __name__ == '__main__':
    main()


#综合案例2：约瑟夫环问题

def main():
    persons = [True] * 30
    counter, index, number = 0, 0, 0
    while counter < 15:
        if persons[index]:
            number += 1
            if number == 9:
                persons[index] = False
                counter += 1
                number = 0
                print(index)        #打出淘汰的下标
        index += 1
        index %= 30     #从后面开始数，如果30人轮完就又回到第一个数，这行代码，就是形成圈
    for person in persons:
        print('基' if person else '非',end='')

if __name__ == '__main__':
    main()
   '''

