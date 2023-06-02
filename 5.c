#include <stdio.h>
#include <stdlib.h>

#include <cstring>
struct Car{
    char* brand;
	char* model;
    int price;
};

struct Car* longestCarModelName(struct Car cars[], int n){
    
    struct Car *ptr = cars;

    for (int i = 0; i < n; i++)
    {
        if (strlen(cars[i].model) > strlen(ptr->model)) ptr = cars + i;
    }
    return ptr;
}

int main()
{
    int n;
    scanf("%n", &n);

    // char* str = "ABOBA";

    // char* str2 = "ABOBAasdasdas";
    // struct Car arr[5];
    // arr[0] = {str, str, 7};

    // arr[1] = {str2, str2, 7};
    // struct Car *ptr = arr;
    // ptr = arr + 1;
    // printf("%d", strlen(ptr->model));
    // printf("%d", strlen(arr[0].model));
    return 0;
}