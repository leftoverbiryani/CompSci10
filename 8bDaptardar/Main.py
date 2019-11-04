#Sanay Daptardar, CompSci 10b, Lab 8b
#Extra prints a square of # given user input value.

def countDigits(x):
    ogx = x
    y = True
    count = 0;
    while(y):
        count += 1
        x /= 10;
        if(x > 1):
            pass
        elif(x < 1):
            y = False
    print("Digits in {}, {}" .format(ogx, count))
    print()

def sumDigits(x):
    ogx = x
    y = True
    count = 0;
    while (y):
        count += (int)(x % 10)
        x /= 10;
        if (x > 1):
            pass
        elif (x < 1):
            y = False
    print("Sum of digits in {}, {}" .format(ogx, count))
    print()

def averageDigits(x):
    ogx = x
    y = True
    count = 0;
    count1 = 0;
    while (y):
        count1 += 1;
        count += (int)(x % 10)
        x /= 10;
        if (x > 1):
            pass
        elif (x < 1):
            y = False
    average = count / count1
    print("Average of Digits in {}, {:0.3f}" .format(ogx, average));
    print()

def evenDigits(x):
    ogx = x
    y = True
    count = 0;
    count1 = 0;
    while (y):
        count = (int)(x % 10)
        if(count % 2 == 0):
            count1 += 1;
        x /= 10;
        if (x > 1):
            pass
        elif (x < 1):
            y = False
    print("Even digits in {}, {}".format(ogx, count1))
    print()

def oddDigits(x):
    ogx = x
    y = True
    count = 0;
    count1 = 0;
    while (y):
        count = (int)(x % 10)
        if(count % 2 != 0):
            count1 += 1;
        x /= 10;
        if (x > 1):
            pass
        elif (x < 1):
            y = False
    print("Odd digits in {}, {}".format(ogx, count1))


def triangle(x):
    print("Trangle range: {}" .format(x))
    for i in range(0, x+1):
        print("#" * i)
    print()

def square(x): #extra
    print("Square range: {}" .format(x))
    for i in range(1, x+1):
        print("#" * x)


#main
countDigits(256)
countDigits(12356)

sumDigits(1467384)
sumDigits(212451834)

averageDigits(15771381346)
averageDigits(198498298598484984)

evenDigits(2345678964356978)
evenDigits(12038976235962395876)

oddDigits(2345678964356978)
oddDigits(191947495165146512135465)

triangle(8)
triangle(16)

square(8) #extra
square(12)