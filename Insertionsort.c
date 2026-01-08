#include <stdio.h>
#define n  5 
int arr[n];
void insertion_sort();
int main(){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort();
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void insertion_sort(){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j++){
            if(arr[j]>arr[i]){
                arr[j+1] = arr[j];
                j--;
            }else{
                break;
            }
        arr[j+1] = arr[j];
        }
    }
}