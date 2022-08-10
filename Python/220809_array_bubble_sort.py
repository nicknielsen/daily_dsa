item_count = input("How many numbers would you like to sort?\n")
item_count = int(item_count)
items = []
for i in range(item_count):
  item = input(str(i+1)+". Enter a number: ")
  items.append(float(item))

print(items)

for i in range(0, (item_count-1)):
  for j in range(0, (len(items)-1)):
    if(items[j] < items[j+1]):
      temp = items[j+1]
      items[j+1] = items[j]
      items[j] = temp

print(items)