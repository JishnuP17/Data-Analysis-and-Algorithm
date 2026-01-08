#include <stdio.h>
int max(int arr[],int n,int x);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x = arr[n-1];
    int maximum = max(arr,n-2,x);
    printf("Max: %d",maximum);
}
int max(int arr[],int n,int maximum){
    if(n<0){
        return maximum;
    }
    if(arr[n]>maximum){
        return max(arr,n-1,arr[n]);
    }
    return max(arr,n-1,maximum);
}