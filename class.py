

class Car(object):
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0   #直接添加属性

    def get_descriptive_name(self):
        long_name = (str(self.year) + ' ' + self.make + ' ' +  self.model).title()
        return long_name.title()

    def read_odometer(self):
        print('This car has ' + str(self.odometer_reading) + ' miles on it')

    def update_odometer(self, mileage):
        if mileage >= self.odometer_reading:
            self.odometer_reading = mileage
        else:
            print("You can't roll back an odometer!")

class Battery():
    def __init__(self, battery_size=70):
        self.battery_size = battery_size
    def describe_battery(self):
        print("This car has a " + str(self.battery_size) + "-KMh battery.")



class ElectricCar(Car):   #继承父类
    def __init__(self, make, model, year):  #初始化父类的属性
        super(ElectricCar, self).__init__(make, model, year)   #函数super（子类名，对象名）可以将子类和父类的属性联系起来,不能加self，只是继承了父类的属性而已
        self.battery = Battery() #给子类添加属性和父类的方式一样，都可以直接添加,可以把所要赋值，或者说一些属性封装成一个类，直接调用就好

    '''
    def get_descriptive_name(self):
        print("My don't speak this car message")
    '''
def main():
    '''
    my_new_car = Car('aodi', 'a8l', 2019)
    print(my_new_car.get_descriptive_name())
    my_new_car.odometer_reading = 300   #直接修改属性的值
    my_new_car.read_odometer()
    you_car = Car('snalun', '86s', 2018)
    you_car.update_odometer(500)        #使用方法更改属性的值
    you_car.update_odometer(250)
    you_car.read_odometer()
    '''
    my_diandong = ElectricCar('xinri', 's1', 2018)
    print(my_diandong.get_descriptive_name())
    my_diandong.battery.describe_battery()

if __name__ == '__main__':
    main()
