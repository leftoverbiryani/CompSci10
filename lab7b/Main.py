'''
Sanay Daptardar, CompSci 10B, 7b Python
Extra: user input for data values
'''

def aream(b1, b2, h): #Methods COMMENT 1
  tb = (b1 + b2) / 2
  area = tb * h
  print("Area of the trapezoid: {:0.2f}" .format(area))

def conem(r, h):
  pi = 3.141592653589793238462643383279502884197169399375
  area = h * (pi * (r ** 2))
  print("Volume of cylinder: about {:0.3f}" .format(area))

def cubem(s):
  sa = 6 * (s ** 2)
  print("Surface area of cube: {}" .format(sa))

def circm(r):
  pi = 3.141592653589793238462643383279502884197169399375
  area = pi * (r ** 2)
  print("Area of circle: about {:0.3f}" .format(area))

def fconvert(f):
    celcius = (f - 32) * (5/9)
    print("Temperature in celcius {:0.2f}" .format(celcius))

def getSlope(x1, x2, y1, y2):
    slope = (x2 - x1) / (y2 - y1)
    print("Slope of the line: {}" .format(slope))

def perimeter(l, w):
    p = (2 * l) + (2 * w)
    print("Perimeter of rectangle: {}" .format(p))
#main

#part 1
base1 = float(input("Enter the first base of your trapezoid: \n")) #main code and input COMMENT 2
base2 = float(input("Enter the second base of your trapezoid: \n"))
height = float(input("Enter the height of your trapezoid: \n"))

aream(base1, base2, height)

print()

#part 2
radius = int(input("Enter radius of your cylinder: \n"))
heightc = int(input("Enter the height of your cylinder: \n"))

conem(radius, heightc) #calling method COMMENT 3

print()

#part 3
side = int(input("Enter the side length of your cube: \n"))
cubem(side)

print()

#part 4
radc = int(input("Enter the radius of your circle: \n"))
circm(radc)

#part 5
fvalue = float(input("Enter the temperature in Farenheit: \n"))
fconvert(fvalue)

#part 6
x1 = int(input("Enter the first x value: \n"))
x2 = int(input("Enter the second x value: \n"))
y1 = int(input("Enter the first y value: \n"))
y2 = int(input("Enter the second y value: \n"))
getSlope(x1, x2, y1, y2) #entering values in correct order matters COMMENT 4

#part 7
plength = int(input("Enter the length of the rectangle: \n"))
pwidth = int(input("Enter the width of the rectangle: \n"))
perimeter(plength, pwidth)