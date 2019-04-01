int main(){

    int sum = 0;
    for (int i = 0, j = 10; i < j; i = i + 1, j = j - 1){
        sum = sum + 1;
    }
    return sum;
}