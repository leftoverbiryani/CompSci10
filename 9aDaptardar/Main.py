#Sanay Daptardar, CompSci 10, Lab 9a
#Extra:
def flVowel(x):
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
#Main
flVowel("Car")
flVowel("Appalachian")
flVowel("JoeMama")
flVowel("Orange")

nameFlipper("Sanay Daptardar")


