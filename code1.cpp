#include <iostream>
using namespace std;

// void fib(int zero, int first, int n){
// n--;
// int a = zero+first;
// zero = first;
// first = a;
// if(n==1){
//     cout<<a;
//     return;
// }

// fib(zero,first,n);   
// }

int fib(int n){
    if(n<2){
        return n; 
    }
    int a = fib(n-1) + fib(n-2);
    return a;
    
    
    
}


int main() {
    cout<<fib(6);


    return 0;
}