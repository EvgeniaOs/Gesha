#include <stdio.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"


int main(){
    int arr[100];
    int n;
    scanf("%d", &n);
    char t;
    int size =0;
    while(1){
        scanf("%d", &arr[size++]);
        scanf("%c", &t);
        if (t == '\n')
            break;
    }
    switch (n){
        case 0:
                printf("%d\n", max(arr, size));
                break;
        case 1:
                printf("%d\n", min(arr, size));
                break;
        case 2:
                printf("%d\n",diff(arr, size));
                break;
        case 3:
                printf("%d\n",sum(arr, size));
                break;
        default:
                printf("Данные некорректны\n");
    }
    return 0;
    
}
