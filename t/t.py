# x = 10 
# y = float(x) + 0.2
# wowzaa = "hello"
# hi = "12342"
# hi2 = int(hi)
# x = 1+1
# print ("hello" + "world")
# x = [1,"hi",2.333,9]
# print (x)
# x.append(5)
# print (x)

# x.remove(5)
# print (x)
# x.reverse()
# print (x)

# del x[0]

# print (x)
# x = 10
# y = str(x)

# print (x+x)
# print (y+y)

# for u in range(6):
#     print (u)
# for kuy in range(10,-1,-1):
#  print(kuy)

# x = 20
# y = 30
# if ( x >= 10 and y < 30):
#     print ("hi")
# elif (x == 10 ):
#      print ("hi6")
# else :
#     print ("hi2")


# score = int(input("enter your score"))
# if (score >=80 and score <=100):
#     print("A")

# i = -10
# while (i >= -10 and i <=0):
#     print(i)
#     i += 1

# ken = "hello"
# x = len(ken)
# for i in range(x):
#     print(i)

# for i in range (3):
#     print ("i = " , i)
#     for j in range(5) :
         
#          print ("j = " , j)

# def check_the_pass():
#     for i in range (3,-1,-1):
#         s = input("Please enter your passworld (you have 3 change):")
#         if (len(s) != 6):
#             print ("Eror please re-enter your password , try left ",i)
#             if (i == 0):
#               print ("too much try, the program will shutdown")
#         elif (str(s[0]).isdigit()):
#             print ("Eror the first charecter must be charecter")
#         elif (str(s[0]).islower()):
#             print ("Eror the first charecter must be upper case")
#         elif(str(s[5]).isalpha()):
#             print ("Eror the the last charecter must be digit")
#         elif not s[1].isdigit() or not s[2].isdigit() or not s[3].isdigit() or not s[4].isdigit() :
#             print ("Eror the format of the password is wrong")
#         elif s[1] % 2 == 0 :
#             print ("Eror the format of the password is wrong, check the secound charecter ")
#         elif s[2] % 2 != 0 :
#             print ("Eror the format of the password is wrong, check the third charecter")
#         elif 100 % s[3] != 0:
#             print ("Eror the format of the password is wrong")
#         else :
#             print("your password is correct")
#             return s
        
# x = check_the_pass()

def maxmin(x):
    ans = x
    ls_ans = []
    str_x = str(x)
    ls_try = []
    wow = []
    for i in range(len(str_x)):
        ls_try.append(str_x[i])

    wow = ls_try.copy()

    for u in range(len(str_x)):
        ls_try = wow.copy()
        # print(ls_try)
        for z in range(len(ls_try)):
            ls_try = wow.copy()
            temp = ls_try[u]
            ls_try[u] = ls_try[z]
            ls_try[z] = temp

            str_join = ''.join(map(str,ls_try))
            ls_ans.append(str_join)
            zz = min(ls_ans)
            if zz[0] == "0":
                ls_ans.remove(min(ls_ans))
    # print(wow)
    return int(max(ls_ans)),int(min(ls_ans))
# print(maxmin(9876543210))
# print(maxmin(1234567890))
x = int(input("please input your number"))
if len(x) > 10:
    print("Error")
# elif str(x)[0] == 0:
#     print("Error2")
else :
    print(maxmin(x))











