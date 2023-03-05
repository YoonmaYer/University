import random

def getMinMax(mylist, method='max'):
    minvalue = 99999999999999
    maxValue = -minvalue

    if method == 'max' :
        for value in mylist:
            if value > maxValue:
                maxValue = value
        return maxValue
    elif method == 'min' :
        for value in mylist:
            if value < minValue:
                minValue = value
        return minValue
    else:
        print('프로그램을 종료합니다')
        exit()

list_data = [random.randint(0,100) for i in range(30)]
while(True):
    print("\n\n")
    list_data = [ random.randint(50,100) for i in range(30)]
    print("[리스트 내 숫자]", list_data)
    print("\n")

    s = input('  최대값을 원하면 max, 최소값을 원하면 min을 그외 입력에대해서는 종료합니다: ')
    print(getMinMax(list_data, s))
    print("\n")