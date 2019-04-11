int main(){
    int arr[5] = {1,2,3,4,5};
    int idx;
    
    for (idx = 0; idx < 5; idx+=1){
        arr[idx] += 1;
    }
    int sum = 0;
    for (idx = 4; idx >= 0; idx-=1){
        sum += arr[idx];
    }

    return sum; // 20
  
}