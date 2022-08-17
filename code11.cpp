#include <iostream>
using namespace std;

void selection_sort(int arr[], int size, int max_index, int i){
    
    if(size==0){
        return;
    }
    
    if(i<=size){
        if(arr[i]>arr[max_index]){
            max_index = i;
        }
        ++i;
        selection_sort(arr,size, max_index, i);
    }
    else{
        int a = arr[size];
        arr[size] = arr[max_index];
        arr[max_index] = a;
        --size;
        i=0;
        max_index = 0;
        selection_sort(arr,size, max_index,i);
    }
    
}

int main()
{
    int size = 10;
    int arr[size] = {2,7,6,9,4,3,1,5,8,0};
    int max = 0;
    selection_sort(arr,size-1,max,0);
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
