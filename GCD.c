#include <stdio.h>
void GCD_ite(int a, int b);
int  GCD_rec(int a, int b);
int main(){
    int a,b;
    printf("Enter the numbers :");
    scanf("%d%d",&a,&b);
    GCD_ite(a,b);
    int gcd = GCD_rec(a,b);
    printf("\nGCD : %d",gcd);
}
void GCD_ite(int a, int b){
    while(b!=0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    printf("GDC : %d",a);
}
int  GCD_rec(int a, int b){
    if(a%b==0){
        return b;
    }
    int gcd = GCD_rec(b,a%b); 
    return gcd;
}