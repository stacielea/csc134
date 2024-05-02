def lineFunc():
    print()
    print("=======================================================================================================================")
    print()
def lineFunc2():
    print("_______________________________________________________________________________________________________________________")
    print()

# 1. You must display the name of your program and the version number (use good formatting). 
lineFunc()
print("\t\t\t\t\t  CROSS COUNTRY ATHLETE SHEET 2.0")
lineFunc2()

# 2. You must indicate the time and date that the user ran the program. 
# 4. You must create your own functions within your program. 
def Date_Time_Func():
    from datetime import datetime
    dt = datetime.today()
    time = dt.time().strftime("%I:%M %p")
    date = dt.date().strftime("%B %d, %Y")
    print("\t\t\t\t       | " , time ," | | ",date," |")
    lineFunc()
    print()

Date_Time_Func()
# 5. You will read the lines from the file into memory. 
crossCountryFile = open('C:/Users/12371396/Downloads/U8File-1.txt')
CCLines = crossCountryFile.readlines()
x = 0
# 3. You must use conditional statements as well as either a for loop or a while loop. 
for line in CCLines:
    CCLines[x] == line[:-1]
    # 5. However, you only want the lines which have athlete information on them. You will not display the "____". 
    if line[0] == "_":
        print()
        # 6. You will need to allow the user to add a time for each line.
        userTime = input("Please enter athlete time => ")
        print()
        newLine = line.replace("_", "")
        print("\t\t\t\t", userTime, "\t",newLine,)
    x+=1

 