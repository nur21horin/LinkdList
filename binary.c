#include<stdio.h>
int binarysearch(int arr[],int low,int high,int target){
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==target) return mid;
else if(arr[mid]<target) low=mid+1;
else high=mid-1;
}
return -1;
}
int main(){
int arr[100];
printf("Enter the size of array:");
int n,i;
scanf("%d",&n);
printf("Enter the element of array:");
for(i=0;i<n;i++){
scanf("%d",arr[i]);
}
int target;
printf("Enter the targeted element:");
scanf("%d",&target);
int result=binarysearch(arr,0,n-1,target);
if(result!=-1) printf("Element found at index %d \n",result);
else printf("Elment not found in the array\n");
return 0;
}