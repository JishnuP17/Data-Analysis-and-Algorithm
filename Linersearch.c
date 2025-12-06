#include <stdio.h>
void linearsearch(int arr[],int n,int sea);
int linearsearch_rec(int arr[],int n,int sea);
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
    linearsearch(arr,n,sea);
    printf("\n");
    int i = linearsearch_rec(arr,n,sea);
    if(i==1){
        printf("Element found");
    }else{
        printf("Element not found");
    }
}
void linearsearch(int arr[],int n,int sea){
    for(int i=0;i<n;i++){
        if(arr[i]==sea){
            printf("Element found");
            break;
        }
    }
    printf("Element not found");
}
int linearsearch_rec(int arr[],int n,int sea){
    if(n<0){
        return -1;
    }
    if(arr[n]==sea){
        return 1;
    }
    return linearsearch_rec(arr,n-1,sea);
}