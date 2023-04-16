table ,menu = [1,2,3,4,5],['A','B','C','D']
def order():
    while (1):
        n_a,n_b,n_c,n_d ,price,n_order = 0,0,0,0,0,""
        while (1):
            n_order = str(input("order = "))
            if n_order == "finish":
                break
            if n_order not in menu :
                print("menu is not exist ,please re-enter the order")
                continue
            elif n_order == 'A':
                n_a += 1
                if n_a > 10 :
                    print ("sorry this menu is out of stock")
                    continue
                price += 35
            elif n_order == 'B':
                n_b += 1
                if n_b > 10 :
                    print ("sorry this menu is out of stock")
                    continue
                price += 45
            elif n_order == 'C':
                n_c += 1
                if n_c > 10 :
                    print ("sorry this menu is out of stock")
                    continue
                price += 100
            elif n_order == 'D':
                n_d += 1
                if n_d > 10 :
                    print ("sorry this menu is out of stock")
                    continue
                price += 60
        return price
li ,p,o= [0,0,0,0,0],0,0     
while (o < 10):
    x = str(input("order or check bill : "))
    if x == 'order':
        n_table = int(input("table = "))
        if n_table not in table:
            print("table is not exist ,please re-enter the number")
            continue
        p = order()
        li[n_table-1] += p
        o += 1
    if o >= 10:
        print("out of order \nall the bill price is : \ntable 1 :",li[0],"\ntable 2 :",li[1],"\ntable 3 :",li[2],"\ntable 4 :",li[3],"\ntable 5 :",li[4])
    elif x == "check bill":
        n_table2 = int(input("table = "))
        if n_table2 not in table:
            print("table is not exist ,please re-enter the number")
            continue
        print ("price = ",li[n_table2-1])
    elif x != "check bill" and x != 'order':
        print("error")