#include <iostream>
using namespace std;

int pivot(int arr[], int n, int start, int end){
    int mid = start + (end-start)/2;
    if(arr[mid]<arr[mid+1]&&arr[mid]<arr[mid-1]){
        return mid;
    }
    else if(arr[mid]>arr[0]){
        start = mid +1;
    }
    else{
        end = mid -1;
    }
     mid = start + (end-start)/2;
     return pivot(arr,n,start,end);
}
int global = 1;

int binarysearch(int arr[], int n, int key, int start, int end, int pivot){
    int mid = start + (end-start)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    if(start>end && ::global!=0){
        ::global--;
        start = pivot;
        end = n-1;
        binarysearch(arr,n,key,start,end,pivot);
    }
    mid = start+(end-start)/2;
    return binarysearch(arr,n,key,start,end,pivot);
    
    
    
}

int main() {
   int arr[8] = {5,6,7,8,9,1,2,3};
   int start = 0;
   int end = 7;

   int pivotelement = pivot(arr,8,0,7);
   int ans = binarysearch(arr,8,1,0,pivotelement-1,pivotelement);
   cout<<ans;

   
   return 0;
}