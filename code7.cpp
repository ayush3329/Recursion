#include <iostream>
using namespace std;

int SOD(int n){
    if(n%10==n){
        return n;
    }
    return (n%10)+SOD(n/10);
}
int REV(int n,int sum){
    if(n%10==n){
        return (sum*10)+n;
    }
    int remain = n%10;
    if(n!=0){
        sum = (sum*10)+remain;
    }
    else{
        sum=sum*10;
    }
    return REV(n/10, sum);
}

int POD(int n)
{
    if(n%10==n){
        if(n==0){
            return 1;
        }
        return n;
    }
    int remain = n%10;
    
    if(remain==0){
    return POD(n/10);
    }
    else{
        return remain*POD(n/10);
    }
}
bool pallindrome(int n){
    return(n==REV(n,0));
}
int zero=0;
void countzero(int n){
    if(n%10==n){
        if(n==0){
            ::zero++;
            return;
        }
        return;
        
    }
    int remain = n%10;
    if(remain==0){
        ::zero++;
    }
     countzero(n/10);
}
int main() {
    cout<<"Sum of Digit: "<<SOD(12304)<<endl;
    cout<<"Reversed Digit: "<<REV(123321,0)<<endl;
    cout<<"Product of Digit: "<<POD(123040)<<endl;
    cout<<"Pallindrome: "<<pallindrome(123321)<<endl;
    countzero(101000); //wrong output for number starting with zero ex--> 0100
    //
    cout<<"No of zero: "<<::zero;
    

    return 0;
}