//CONCEPT
#include <iostream>
using namespace std;

void concept(int a){
    if(a==1){
        cout<<a<<endl;
        return;
    }
    cout<<a<<endl;
    
   
    // fun(a--);
    //here first a will be passed then 1 will be subtracted from it, so everytime 5 will be passed hence it will go in infinte loop because  we will never reach base condn  
    concept(--a);
    // cout<<a<<endl;
    //here first 1 will be subtracted from a and then a is passed
}

int main() {
   concept(5);

    return 0;
}