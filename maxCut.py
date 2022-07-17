def maxCuts(n,a,b,c):
    if n<0:
        return -1
    elif n==0:
        return 0
    return (max(maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),macXuts(n-c,a,b,c))+1)

n= input("Enter value of n\n")
a=input("enter value of a\n")
b=input("enter value of b\n")
c=input("enter value of c\n")
res=maxCuts(n,a,b,c)
print("result = {}".format(res))
