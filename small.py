l = list(map(int, input('Enter a array elements : ').split()))
s = [-1]
for i in range(1, len(l)):
    q = []
    j = i-1
    while j >= 0:
        if l[j] < l[i]:
            q.append(l[j])
        j -= 1
    s.append(max(q))
print(*s, sep=" ")
