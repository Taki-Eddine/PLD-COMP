
int sum(int i){
    return 2 * i;
}
int main(){
    int x = 5,y;
    y = sum(sum(x));
    return y; // 20
}
