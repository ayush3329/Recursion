
#include <iostream>
using namespace std;

int nuum(int n, int num){
    if(n==0){
        return num;
    }
    int digit = n%10;
    n = n/10;
    
    num=(num*10)+digit;
    return nuum(n,num);
    
}


int main() {
    
    int n =123450;
  
  
    int num=0;
      cout<<nuum(n,num);
//     while(n!=0){
//         int digit = n%10;
//         n=n/10;
//         num = (num*10)+digit;
//     }
// cout<<num;
    return 0;
}