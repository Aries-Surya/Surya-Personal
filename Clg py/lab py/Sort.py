print('SelectionSort:')
a=[16,19,11,15,10,12,14]
i=0
while i<len(a):
    smallest=min(a[i:])
    index_of_smallest=a.index(smallest)
    a[i],a[index_of_smallest]=a[index_of_smallest],a[i]
    i=i+1
    print(a)

print('insertionSort:')
def insertionSort(alist):
    for index in range(1,len(alist)):
        currentvalue = alist[index]
        position = index
        while position>0 and alist[position-1]>currentvalue:
            alist[position]=alist[position-1]
            position = position-1
            alist[position]=currentvalue
alist = [54,26,93,17,77,31,44,55,20]
insertionSort(alist)
print(alist)

# print("MergeSort:")
# def mergeSort(alist):
#     print("Splitting ",alist)
#     if len(alist)>1:
#         mid = len(alist)//2
#         lefthalf = alist[:mid]
#         righthalf = alist[mid:]
#         mergeSort(lefthalf)
#         mergeSort(righthalf)
#         i=0
#         j=0
#         k=0
#         while i < len(lefthalf) and j < len(righthalf):
#             if lefthalf[i] < righthalf[j]:
#                 alist[k]=lefthalf[i]
#                 i=i+1
#             else:
#                 alist[k]=righthalf[j]
#                 j=j+1
#                 k=k+1
#         while i < len(lefthalf):
#             alist[k]=lefthalf[i]
#             i=i+1
#             k=k+1
#         while j < len(righthalf):
#             alist[k]=righthalf[j]
#             j=j+1
#             k=k+1
#     print("Merging ",alist)        
# alist = [54,26,93,17,77,31,44,55,20]
# mergeSort(alist)
# print(alist)