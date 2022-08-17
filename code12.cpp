#include <iostream>
using namespace std;

//size = size-2-->last element will automatically be selected when we select second last element
void bubble_sort(int arr[], int size, int i) 
{
    if(size<0){
        return;
    }
    
    if(i<=size){
        
        if(arr[i]>arr[i+1]){
            int a = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=a;
        }
        ++i;
        bubble_sort(arr,size,i);
    }
    else{
        --size;
        i=0;
        bubble_sort(arr,size,i);
    }
    
    
}

int main()
{
    int size = 10;
    int arr[size] = {2,7,6,9,4,3,1,5,8,0};
    int max = 0;
    bubble_sort(arr,size-2,0);
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
