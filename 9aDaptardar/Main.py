#Sanay Daptardar, CompSci 10, Lab 9a
#Extra: part 6 prints something else if there is only one aplus.
def flVowel(x): #creating methods COMMENT 1
     newx = x.lower()
     c = newx[0]
     rc = newx[len(x) - 1]

     if ((c == "a" or c == "e" or c == "i" or c == "o" or c == "u") and (rc == "a" or rc == "e" or rc == "i" or rc == "o" or rc == "u")):
         print("Both the first and last letters of {} are vowels".format(x))
     elif(c == "a" or c == "e" or c == "i" or c == "o" or c == "u"):
         print("The first letter of {} is a vowel" .format(x))
     elif(rc == "a" or rc == "e" or rc == "i" or rc == "o" or rc == "u"):
         print("The last letter of {} is a vowel" .format(x))
     else:
         print("Neither the first nor the last digit of {} are vowels" .format(x))
     print()

def nameFlipper(x):
    c = x.find(" ")
    print("{}, {}" .format((x[c:len(x)]), x[0:c]))
    print()

def avgLen(x, y):
    c = len(x)
    c1 = len(y)
    avg = (c + c1) / 2
    print("Average length: {:0.1f}" .format(avg))
    print()

def repeats(x):
    c = x[0]
    c1 = x.rfind(c)
    if(c1 == 0):
        print("Repeats: NO")
    else:
        print("Repeats: YES")
    print()

def changeCase(x, y):
    if(y):
        print("Changed case: {}" .format(x.upper()))
    else:
        print(("Changed case: {}" .format(x.lower())))
    print()

def moreAplus(x): #part 6, extra:
    c = x.count("aplus") #counting aplus's in string COMMENT 2
    if(c > 1):
        print("More than 1 aplus in {}" .format(x))
    elif(c == 0):
        print("No aplus in {}!" .format(x))
    elif(c == 1):
        print("Only 1 aplus in {}" .format(x))
    print()

def validSocial(x):
    c = x[3]
    c1 = x[6]
    ct = "-"
    cf = x[7:12]
    if(c == ct and c1 == ct):
        print("Valid, {}" .format(cf))
    else:
        print("{} is invalid" .format(x))
    print()

def pairCount(x):
    count = 0
    i = len(x) - 1
    while(i > 0):
        c = x[i]
        c1 = x[i-1];
        if(c == c1):
            count += 1
        i -= 1
    print("Pairs in {}: {}" .format(x, count))
    print()

def ceaserCipher(x, y):
    cv = 0
    alph = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
    al = len(alph)
    for char in x:
        for i in range(al):
            if(char == alph[i]): #comparing char to alphabet COMMENT 3
                cv = i - y
                if (cv < 0):
                    cv += 26
                print(alph[cv], end='')
    print()
#Main
flVowel("Car")
flVowel("Appalachian")
flVowel("JoeMama")
flVowel("Orange")

nameFlipper("Sanay Daptardar")

avgLen("dog", "cats")
avgLen("Pneumonia", "Bruh")

repeats("dogsbruheddogs")
repeats("xylophone")

changeCase("BruHbRuH", False) #calling methods COMMENT 4
changeCase("BruHbRuH", True)

moreAplus("Bruhaplusbruhaplus")
moreAplus("Bruhaplusbruh")
moreAplus("Bruh")

validSocial("463-44-5678")
validSocial("44-144-5678")

pairCount("bbruhhiissthecoollesst")
pairCount("Mississippi")

ceaserCipher("how do you do", 4)

