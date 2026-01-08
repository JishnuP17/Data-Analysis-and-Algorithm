#include <stdio.h>
#define n 5
int arr[n];
void quicksort(int f,int l);
int solve(int f,int l);
int main(){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void quicksort(int f,int l){
    if(f<l){
        int pivot = solve(f,l);
        quicksort(f,pivot-1);
        quicksort(pivot+1,l);
    }
}
int solve(int f,int l){
    int pivot = arr[f];
    int i = f; 
    int j = l;
    while(i<j){
        while(arr[i]<=pivot && i<l){
        i++;
    }
    while(arr[j]>pivot && j>f){
        j--;
    }
    if(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }
    }
    if(i>j){
        arr[f] = arr[j];
        arr[j] = pivot;
    }
    return j;
}