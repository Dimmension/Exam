#include <stdio.h>
#include <stdlib.h>

// 1 2 3  2 3 4  3 4 5

int sumFoo(int n){
    
    int res = 0;
    for (int i = n; i >= 3; i--)
    {
        res += i*(i-1)*(i-2);
    }

    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sumFoo(n));
    return 0;
}


