### Bài tập 1
person = input('Please enter number of person: ')
if int(person) > 8:
    print("Please wait a few minute!")
else:
    print("Ready to serve!")

### Bài tập 2
number = int(input())
if number % 10 == 0:
    print(f"{number} là bội số của 10")
else:
    print(f"{number} không phải là bội số của 10")

### Bài tập 3
lst=[10, 99, 98, 85, 45, 59, 65, 66, 76, 12, 35, 13, 100, 80, 95, 100]
i = 0
while i < len(lst):
    if lst[i] == 100:
        print("There is a 100 at index no: " + str(i))
    i = i+1

### Bài tập 4
lst1 = input().split(" ")
i = 0
new_list = []
while i < len(lst1):
    if lst1[i] != "":
        new_list.append(lst1[i])
    i = i+1
print(new_list)

### Bài tập 5
N = int(input())
x, y = 0, 1
fibo = [0]
while y < N:
    fibo.append(y)
    x, y = y, x + y
print(fibo)

### Bài tập 6
items = []
num = [x for x in input().split(',')]
i = 0
while i < len(num):
    x = int(num[i], 2)
    if not x % 5:
        items.append(num[i])
    i += 1
print(items)

