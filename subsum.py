def findSmallest(arr, n): 
    res = 1 
    for i in range (n): 
        if arr[i] <= res: 
            res = res + arr[i] 
        else: 
            break
    return res
arr = list(map(int,input().split())); 
n = len(arr) 
print(findSmallest(arr, n)) 
