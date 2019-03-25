int main(){
    int result = 1;
    int n = 1, N = 5;

    do{
        result = result * n;
        n = n + 1;
    }while(n <= N);

    return result;
}