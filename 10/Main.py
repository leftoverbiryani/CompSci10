#Sanay Daptardar, CompSci 10B, Lab 10
#Extra: part 2 gives the largest value in array as well
def oddToEven(x): #creating methods comment 1
    count = 0
    fcount = 0
    lcount = 0
    tcount = 0
    l = [0] * len(x)
    t = [99] * len(x)
    for i in x: #looping through array comment 2
        fcount += 1
        if(i % 2 == 1):
            count += 1
            t[tcount] = fcount
            tcount += 1
        elif((i % 2 == 0) and (fcount > t[0])):
            l[lcount] = fcount
            lcount += 1
    if(count == 0):
        dist = -1
        print("No odd numbers: {}" .format(dist))
    elif(lcount == 0):
        dist = -1
        print("No evens after an odd: {}" .format(dist))
    else:
        dist = l[0] - t[0]
        print(l[0],",",t[0])
        print("Distance between first odd and first even: {}" .format(dist))
    print()

def findSmallest(x):
    place = 0
    flag = True
    while(flag):
        flag = False
        for j in range(0, len(x) - 1):
            if(x[j] > x[j+1]):
                place = x[j] #swapping values to sort array comment 3
                x[j] = x[j+1]
                x[j+1] = place
                flag = True
    print("Smallest value in array: {}" .format(x[0]))
    print("Largest value in array:  {}" .format(x[len(x) - 1]))
    print() #printing empty for neater output comment 4

def goingDown(x):
    test = False
    for i in range(0, len(x) - 1):
        if(x[i] > x[i+1]):
            test = True
        else:
            test = False
            break
    print("List descends: {}" .format(test))
    print()

def getLast(x):
    y = [None] * len(x)
    count = 0
    for i in x:
        if (i > x[len(x) - 1]):
            y[count] = i
        count += 1
    if(y[0] != None):
        print("Greater than last value: {}" .format(y))
    elif(y[0] == None):
        print("Greater than last value: {}" .format("[]"))


#main
a = [2, 4, 3, 5, 5, 7, 9, 3, 4]
y = [2, 4, 8, 6, 4, 2, 6]
z = [2, 4, 8, 6, 8, 7, 9, 5, 3]
b = [7, 6, 5, 4, 3, 2, 1]

oddToEven(a)
oddToEven(y)
oddToEven(z)

findSmallest(a)

goingDown(b)
goingDown(a)

