#include <stdio.h>
#include <stdlib.h>

int getSeconds(int k){
    return k % 3600;
}


int main()
{
    int k;
    scanf("%d", &k);
    printf("%d", getSeconds(k));
    return 0;
}