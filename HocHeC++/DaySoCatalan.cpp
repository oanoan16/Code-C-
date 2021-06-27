// def solve(n):
//     if n<= 1:
//         return 1
    
//     a=[0 for i in range(n + 1)]
//     a[0] = 1
//     a[1] = 1

//     for i in range(2, n + 1):
//         a[i] = 0
//         for j in range(i):
//             a[i] += a[j] * a[i-j-1]
//     return a[n]

// t = int(input())
// while(t):
//     n = int(input())
//     print(solve(n))
//     t = t - 1