#Sanay Daptardar, CompSci 10B, Lab 10
#Extra:
def oddToEven(x):
    count = 0
    fcount = 0
    lcount = 0
    tcount = 0
    l = [0] * len(x)
    t = [99] * len(x)
    for i in x:
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

#main
a = [2, 4, 3, 5, 5, 7, 9, 3, 4]
y = [2, 4, 8, 6, 4, 2, 6]
z = [2, 4, 8, 6, 8, 7, 9, 5, 3]

oddToEven(a)
oddToEven(y)
oddToEven(z)
