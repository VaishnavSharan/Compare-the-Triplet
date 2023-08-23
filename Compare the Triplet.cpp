
#include <iostream>
#include<vector>
using namespace std;


def compareTriplets(a, b):
    arr=[]
    x=0
    y=0
    for i in range (0,len(a)):
        if (a[i]>b[i]):
            x=x+1
        elif(b[i]>a[i]):
            y=y+1
        else:
            continue
        arr.insert(0,x)
        arr.insert(1,y)
        return(arr)
