#Sanay Daptardar, CompSci 10B, Lab 8a
#Extra: extra condition if part 4 value is equal to 2000


def bigOrSmall(x, y): #part 1
    if(x > y):
        print("yes")
    elif(y > x):
        print("no")
    elif(x == y):
        print("aplus")

def addSubMult(x, y): #part 2
    if(x > y):
        print("Difference: {}" .format(x - y))
    elif(y > x):
        print("Difference: {}" .format(y - x))
    elif(y == x):
        print("Values are equal, product: {}" .format(x * y))

def isLeapYear(x): #part 3
    if(x % 4 == 0):
        print("{}, This number is a leap year" .format(x))
    else:
        print("{}, This number is not a leap year" .format(x))

def discount(x): #part 4, extra:
    if(x < 2000):
        print("{}, There is no discount, sorry." .format(x))
    elif(x > 2000):
        discamount = x - (x*0.1)
        print("${:0.2f}, 10% discount, new price: ${}" .format(x, discamount))
    elif (x == 2000):
        discamount = x - (x*0.05) #extra: new condition if x == 2000
        print("${:0.2f}, 5% discount, new price: ${}" .format(x, discamount))

def isOdd(x): #part 5
    if(x % 2 == 0):
        print("{}, number is even" .format(x))
    elif(x % 2 != 0):
        print("{}, this numebr is odd" .format(x))

#main

bigOrSmall(10, 5)
bigOrSmall(5, 10)
bigOrSmall(10,10)
addSubMult(54, 34)
addSubMult(67, 67)
isLeapYear(2022)
isLeapYear(220032)
discount(1999)
discount(2001)
discount(2000)
isOdd(4)
isOdd(5)