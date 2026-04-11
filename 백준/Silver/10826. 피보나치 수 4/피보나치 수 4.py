def fibo(m):
    a = [0, 1]
    for i in range(m):
        a.append(a[i]+a[i+1])
    return a[m]
        
n = int(input())
print(fibo(n))