#include <stdio.h>
void fact_ite(int n);
int fact_rec(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact_ite(n);
    int fact = fact_rec(n);
    printf("\n%d",fact);
}
void fact_ite(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of %d: %d",n,fact);
}
int fact_rec(int n){
    if(n==1 || n==0){
        return 1;
    }
    int fact = n*fact_rec(n-1);
    return fact;
}