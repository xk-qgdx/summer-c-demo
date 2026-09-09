account_balance=50000000
def check_account_balance():
    print(f"您好,您的余额为{account_balance}")
    main_menu()


def check_in():
    global account_balance
    num=float(input("您好要存多少:"))
    account_balance+=num
    print(f"您好,您存款{num}元成功")
    print(f"您好,您的余额为{account_balance}")
    main_menu()

def check_out():
    global account_balance
    num=float(input("您好要取多少:"))
    account_balance-=num
    print(f"您好,您取款{num}元成功")
    print(f"您好,您的余额为{account_balance}")
    main_menu()

def main_menu():
    print("----------主菜单----------")
    print("您好,欢迎来到xkATM,请选择操作:")
    print("查询余额 【输入1】\t")
    print("存款 【输入2】\t")
    print("取款 【输入3】\t")
    print("退出 【输入4】\t")
    num=int(input("请输入您的选择:"))
    if num==1:
        check_account_balance() 
    elif num==2:
        check_in() 
    elif num==3:
        check_out()  
    elif num==4:
        return None
    else:
        print("请输入正确的数字")
        main_menu()    


main_menu()






