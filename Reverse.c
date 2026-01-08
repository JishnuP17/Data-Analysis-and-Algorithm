#include <stdio.h>
int Reverse(int n,int rev);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = 0 ;
    int reve = Reverse(n,rev);
    printf("Reverse: %d",reve);
}
int Reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return Reverse(n/10,(n%10+rev*10));
}