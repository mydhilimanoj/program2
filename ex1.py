list=[]
n=int(input("Enter the numbers"))
for i in range (0,n):
	list.append(int(input()))
print(list)
sum=0
for i in list:
	sum=sum+i
print(sum)
