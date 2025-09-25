#include "min.h"

int sum(int *arr, int size){
    int s = 0;
    int in = min(arr, size);
    for(int i = 0; i < size; i++){
            if (arr[i] == in)
                    break;
            s += arr[i];

    }
    return s;
}
