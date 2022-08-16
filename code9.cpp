#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int i){
    //ascending checking
    if(i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1]){
        return sorted(arr,n,i+1);
    }
    return false;
}
int linear_search(int arr[], int n, int key, int i){
    
    if(arr[i]==key){
        return i;
    }
    if(i==n-1){
        return -1;
    }
    return linear_search(arr,n,key,++i);
}
int main() {
 int n =5;
 int arr[n] = {1,9,3,4,5};
 cout<<sorted(arr,n,0);
 int key;
 cout<<"\nEnter key: ";
 cin>>key;
int ans = linear_search(arr,n,key,0);
if(ans==-1){
    cout<<"Not Found";
}
else{
    cout<<"Found at indx: "<<ans;
}
    return 0;
}