#include <iostream>
using namespace std;

int fact(int n){
    if(n<2){
        return 1;
    }
   return n*fact(n-1); 
   /*
    -->n*fact(n-1)<--
    only value of fact(n-1) will be returned and it is 1 hence we are 1 
    if we do not write return statement it automatically return the value of function
*/
}

int main() {
  cout<<fact(4);


    return 0;
}