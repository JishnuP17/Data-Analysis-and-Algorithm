#include <stdio.h>
#define n 4
int arr[n];
void selection_sort();
int main(){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort();
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selection_sort(){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}