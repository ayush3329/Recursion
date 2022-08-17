#include <iostream>
using namespace std;
int a = 0, b = 0, c = 0;
int actual_size = 0;
void merger_sort(int arr[], int size1, int brr[], int size2, int final[], int size){
    
    if(a==size1 && b==size2){
        return;
    }
    if(b==size2){
        final[c] = arr[a];
        ++c;
        ++a;
        ++actual_size;
    }
    else if(a == size1){
        final[c] = brr[b];
        ++c;
        ++b;
        ++actual_size;
    }
    
    else if(arr[a]>brr[b]){
        final[c] = brr[b];
        ++c;
        ++b;
        ++actual_size;
    }
    else if(arr[a]<brr[b]){
        final[c] = arr[a];
        ++c;
        ++a;
        ++actual_size;
    }
    else{
        final[c] = arr[a];
        ++c;
        ++b;
        ++a;
        ++actual_size;
    }
    merger_sort(arr,size1,brr,size2,final,size);
}

int main()
{
    int size1 = 6, size2 = 5;
    int arr[size1] = {1,2,3,5,6,7};
    int brr[size2] = {0,2,5,6,7};
    int size = size1+ size2;
    int final[size];
    merger_sort(arr,size1,brr,size2,final,size);
    for(int i=0; i<actual_size; i++){
        cout<<final[i]<<" ";
    }
    return 0;
}
