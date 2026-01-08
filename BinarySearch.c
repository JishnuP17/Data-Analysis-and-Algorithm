#include <stdio.h>
void bin_sea(int arr[],int n,int sea);
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
   bin_sea(arr,n,sea);  
}
void bin_sea(int arr[],int n,int sea){
   int first = 0;int last = n-1;
   while(first<=last){
      int mid = (first+last)/2;
      if(arr[mid]==sea){
         printf("Element found");
         return;
      }else if(sea>arr[mid]){
         first = mid+1;
      }else{
         last = mid-1;
      }
   }
   printf("Element not found");
}

