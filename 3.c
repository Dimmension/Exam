#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int cnt=0;
    scanf("%d", &n);
    while (n != 0){
        if (n%10==3) cnt++;
        scanf("%n", &n);
    }
    printf("%d\n", cnt);
    return 0;
}