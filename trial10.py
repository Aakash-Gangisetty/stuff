a=input("Enter a string: ")
a=a.strip()
a=a.split()
b=list(dict.fromkeys(a))
print(a)
print(b)

a_num=len(a)
b_num=len(b)

x=0
c=list()
for i in range(0,b_num):
    for j in range(0,a_num):
        if(a[j]==b[i]):
            x+=1
    c.append(x)
    x=0
print(c)

for count, char in zip(c, b):  
    print(f"No of {char} is {count}")
