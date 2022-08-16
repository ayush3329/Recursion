#include <iostream>
using namespace std;

int bsearch(int arr[], int start, int end, int key){

    if(start>end){
        return 0;
    }
    int mid = start + (end - start)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end = mid - 1;   
    }
    else{
        start = mid + 1;
    }
    mid = start + (end - start)/2;
    // return bsearch(arr,start,end, key);  
    bsearch(arr,start,end, key); //will also give the correct ans as line 20
}
//make sure to return the result of a function call of the return type


int main() {
    int key;
     cin>>key;
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};
  int start =0, end = 9;

  int ans = bsearch(arr,start,end,key);
  if(ans==0){
      cout<<"Not found";
  }
  else{
      cout<<"found at: "<<ans<<" index";
  }
    return 0;
}