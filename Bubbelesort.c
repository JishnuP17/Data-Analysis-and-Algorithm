#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    printf("Enter number of elements in Array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the element at [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp;
    int flag;
    for(i=0;i<n-1;i++){
        flag = 0;
        for(j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }

    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}