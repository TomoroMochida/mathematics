#include<stdio.h>

int fib(int);
int main(){
    for(int i = 0; i < 30; i++){
        printf("%d\n", fib(i));
    }
    return 0;
}

int fib(int i){
    if(i == 0 || i == 1){
        return 1;
    }else{
        return fib(i - 1) + fib(i - 2);
    }
}
