#Sanay Daptardar, CompSci 10B, Lab 9b
#Extra: fourth method multiplies all values in an array
def addArray(x):
    sum = 0
    for i in x:
        sum += i
    print("Values in array added: {}" .format(sum))
    print()

def multArray(x):
    sum = 1
    for i in x:
        sum *= i
    print("Values in array multiplied: {}" .format(sum))
    print()

def sumFirst(x):
    sum = 0
    for i in x:
        if(i > x[0]):
            sum += i
    if(sum == 0):
        sum = -1
    print("Values greater that first added: {}" .format(sum))
    print()

def lastRepeats(x):
    y = False
    for i in x:
        j = i-1
        if(i == 0):
            j = i
        c = x[len(x)-1]
        if(j == c):
            y = True
    print("Last value repeats: {}" .format(y))
    print()
#main
x = [1, 13, -11, 14,45, 67, 43, 29, 890]
addArray(x)
multArray(x)

y = [17, 1, 6, 5, 78, 67, 4, 3, 73]
sumFirst(y)
z = [3, 4, 5, 3, 67, 3, 56, 3]
lastRepeats(y)
lastRepeats(z)