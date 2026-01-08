#include <stdio.h>
int mul(int n,int m,int muli);
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int result = mul(n,m,n);
    printf("%d X %d = %d",n,m,result);
}
int mul(int n,int m,int muli){
    if(m==1){
        return n;
    }
    return mul(n+muli,m-1,muli);
}