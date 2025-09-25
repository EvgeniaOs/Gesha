int min(int *arr, int size){
    int mn = arr[0];
    for(int i = 1; i<size; i++){
        if (mn > arr[i]){
                mn = arr[i];
        }
        }
        return mn;

}
