#main
x = int(input("How many classes are you taking? "))
c = [0] * x
g = [0] * x

for i in range(0, x):
    l = float(input("Enter grade for class {}: " .format(i+1)))
    g[i] = l

    u = float(input("Enter credits for class {}: " .format(i+1)))
    c[i] = u

tcred = 0

for i in c:
    tcred += i

place = 0
for i in range(0, len(g)):
    place = g[i]

    if(place >= 94):
        g[i] = 4.0
    elif(place < 94 and place >= 90):
        g[i] = 3.7
    elif (place < 90 and place >= 87):
        g[i] = 3.3
    elif (place < 87 and place >= 83):
        g[i] = 3.0
    elif (place < 83 and place >= 80):
        g[i] = 2.7
    elif (place < 80 and place >= 77):
        g[i] = 2.3
    elif (place < 77 and place >= 73):
        g[i] = 2.0
    elif (place < 73 and place >= 70):
        g[i] = 1.7
    elif (place < 70 and place >= 67):
        g[i] = 1.3
    elif (place < 67 and place >= 65):
        g[i] = 1.0
    elif (place < 65):
        g[i] = 0.0

tg = 0
for i in range(0, len(g)):
    g[i] *= c[i]
    tg += g[i]

gpa = tg / tcred

print("Your GPA: {:0.2f}" .format(gpa))