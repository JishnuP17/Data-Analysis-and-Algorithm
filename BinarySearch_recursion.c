#include <stdio.h>
int BS(int arr[],int n,int sea,int first,int last);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sea;
    printf("Enter element to search: ");
    scanf("%d",&sea);
    int first = 0,last = n-1;
    int res = BS(arr,n,sea,first,last);
    if(res<0){
        printf("Element not found ");
    }else{
        printf("Element found ");
    }
}
int BS(int arr[],int n,int sea,int first,int last){
    if(first>last){
        return -1;
    }
    int mid = (first+last)/2;
    if(arr[mid]==sea){
        return 1;
    }else if(sea>arr[mid]){
        BS(arr,n,sea,mid+1,last);
    }else{
        BS(arr,n,sea,first,mid-1);
    }
}