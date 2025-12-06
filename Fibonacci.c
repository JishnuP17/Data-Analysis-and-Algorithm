#include <stdio.h>
void Fibonacci_ite(int n);
int  Fibonacci_rec(int n);
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    Fibonacci_ite(n);
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("%d ",Fibonacci_rec(i));
    }
}
void Fibonacci_ite(int n){
    int a=0;int b = 1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int temp = a+b;
        a = b;
        b =temp;
    }
}
int  Fibonacci_rec(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return Fibonacci_rec(n-1)+Fibonacci_rec(n-2);
}

