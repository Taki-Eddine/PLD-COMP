int main(){
    int arr[5] = {1,2,3,4,5};
    int idx = 0, arr_size = 5, sum = 0;
    while (idx < arr_size){
        sum = sum + arr[idx];
        idx = idx + 1;
    }

    return sum; // 15
}