int main(){

    int a = 15;
    int b = 6;
    
    if (b == 0 && a == 0){
        return -1;
    }

    while (b != a){
       if (a > b){
           a = a - b;
       }
       else{
           b = b - a;
       }
    }

    return a;
}