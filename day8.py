
'''
class Test:

    def __init__(self, foo):
        self.__foo = foo

    def __bar(self):
        print(self.__foo)
        print('__bar')


def main():
    test = Test('hello')
    # AttributeError: 'Test' object has no attribute '__bar'
    test.__bar()        #运行错误，因为foo是私有属性，只能对象调用自己的属性，test._Test__foo
    # AttributeError: 'Test' object has no attribute '__foo'
    print(test.__foo)


if __name__ == "__main__":
    main()


class Test:

    def __init__(self, foo):
        self.__foo = foo

    def __bar(self):
        print(self.__foo)
        print('__bar')


def main():
    test = Test('hello')
    test._Test__bar()   #Python不允许实例化的类访问私有数据，但你可以使用 object._className_
                        # _attrName（ 对象名._类名__私有属性名 ）访问属性
    print(test._Test__foo)


if __name__ == "__main__":
    main()


from time import sleep


class Clock(object):
    def __init__(self,hour = 0, minute = 0, second = 0):
        self._hour = hour
        self._minute = minute
        self._second = second

    def run(self):
        self._second += 1
        if self._second >= 60:
            self._second = 0
            self._minute += 1
            if self._minute == 60:
                self._minute = 0
                self._hour += 1
                if self._hour == 24:
                    self._hour = 0

    def show(self):
        return '%02d:%02d:%02d' % (self._hour,self._minute,self._second)

def main():
        clock = Clock(23,59,58)
        while True:
            print(clock.show())
            sleep(1)
            clock.run()

if __name__ == '__main__':
        main()


from math import sqrt


class Point(object):
    def __init__(self, x=0, y=0):
        #初始化
        self.x = x
        self.y = y

    def move_to(self, x, y):
        #移动到指定位置
        self.x = x
        self.y = y

    def move_by(self, dx, dy):
        #移动指定增量
        self.x += dx
        self.y += dy

    def distance_to(self, other):
        dx = self.x - other.x
        dy = self.y - other.y
        return sqrt(dx ** 2 + dy ** 2)

    def __str__(self):
        return '(%s,%s)' % (str(self.x), str(self.y))
def main():
    p1 = Point(3, 5)
    p2 = Point()
    print(p1)
    print(p2)
    p2.move_to(2,3)
    print(p2)
    print(p1.distance_to(p2))


if __name__ == '__main__':
    main()
'''

