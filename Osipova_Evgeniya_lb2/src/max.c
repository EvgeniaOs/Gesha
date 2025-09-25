
int max(int *arr, int size){
    int mx = arr[0];
    for(int i = 1; i<size; i++){
            if( mx <  arr[i]){
                    mx = arr[i];
            }
    }
    return mx;
}
