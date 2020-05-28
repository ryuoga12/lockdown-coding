t=int(input())
for k in range(0,t):
    s=input()
    n = len(s) 
    arr = [] 
    for i in range(0, n, 1): 
        if (i == 0): 
            arr.append(n)
        else:  
            arr.append((n - i) + arr[i - 1] - i) 
    sum = 0
    v=set("aeiouAEIOU")
    for i in range(0, n, 1): 
        if s[i] in v :
            sum += arr[i] 
    print(sum)
