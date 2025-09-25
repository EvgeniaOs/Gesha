#include "max.h"
#include "min.h"


int diff(int *arr, int size){
    int a = max(arr, size);
    int b = min(arr, size);
    int d = a - b;
    return d;
}

