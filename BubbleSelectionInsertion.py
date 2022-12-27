# Bubble Sort code
def bubbleSort(arr):
    n = len(arr)
# For loop to through all elements
    for i in range(n):
        for j in range(0, n-i-1):
# Range of the array is from 0 to n-i-1, swap elements, if the element found in greater than the adjacent element
            if arr[j] > arr [j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

# Selection Sort code
def selectionSort(array, size):
    for s in range (size):
        min_idx = s
# For sorting in descending order
        for z in range(s+1, size):
# For min element in each loop
            if array[z] < array[min_idx]:
                min_idx = i
# Arranging min at the correct position
                array[s], array[min_idx] = array[min_idx], array[s]

# Insertion Sort code
def insertionSort(list1):
# Outer Loop to tranverse on len(list1)
    for q in range(1, len(list1)):
        m = list1[q]
# Move elements of list1 (0 to i-1), which are greater than one position ahead of their current position
        r = q-1
        while r >= 0 and m < list1[r]:
            list1[r+1] = list1[r]
            r -= 1
        list1[r+1] = m
    return list1

# User input about array and print the input
a = []
n = int(input("Enter length of the array: "))
print(f"Enter {n} elements of the array:-\n")
for i in range (0, n):
    l = int(input())
    a.append(l)
print(f"The {n} elements in array are:-\n")
print(a)

# Ask user about the type of sort s/he wants to use
choice = int(input("Please select: \n1 for Bubble Sort, \n2 for Selection Sort, \n3 for Insertion Sort \nENTER YOUR CHOICE: "))

# Example to test
if (choice == 1):
    arr = a
    bubbleSort(arr)
    print("Bubble Sorted array is: ")
    for i in range(len(arr)):
        print("%d" % arr[i])

elif (choice == 2):
    data = a
    size = len(data)
    selectionSort(data, size)
    print("Selection sorted array is: ")
    print(data)

elif (choice == 3):
    list1 = a
    print("Insertion Sorted array is: ",insertionSort(list1))

else:
    print("Enter valid choice and try again!")