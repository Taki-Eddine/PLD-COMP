int f(int a, int b, int c, int d, int e, int f, int g , int h){
    return g+h;
}

int g(){
    return 2;
}

int main(){
    int i = g();
    int x = f(1,2,3,4,5,6,7,i);
    return x;
}