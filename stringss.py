t=int(input())
for i in range(t):
    l=[]
    s=list(input().split())
    l.append(sorted(s[0]))
    l.append(sorted(s[1]))
    if l[0]==l[1]:
        print("YES")
    else:
        print("NO")
