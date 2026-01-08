#include <stdio.h>
#define n 5
int arr[n];
void mergesort(int f, int l);
void merge(int f,int l,int mid);
int main(){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    mergesort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void mergesort(int f,int l){
    if(f<l){
        int mid = (f+l)/2;
        mergesort(f,mid);
        mergesort(mid+1,l);
        merge(f,mid,l);
    }    
}
void merge(int f,int mid,int l){
    int i = f;
    int j = mid+1;
    int k = f;
    int temp [n];
    while(i<=mid && j<=l){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;i++;
        }else{
            temp[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];i++;k++;
    }
    while(j<=l){
        temp[k]=arr[j];j++;k++;
    }
    for(int i=f;i<=l;i++){
        arr[i] = temp[i];
    }
}
