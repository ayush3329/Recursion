#include <iostream>
using namespace std;
int main() {

    int a =0100;
    cout<<"Quoite: "<<a/10<<endl;
    cout<<"Remain: "<<a%10<<endl;
    a=a/10;
    cout<<"Quoite: "<<a/10<<endl;
    cout<<"Remain: "<<a%10<<endl;
    a=a/10;
    cout<<"Quoite: "<<a/10<<endl;
    cout<<"Remain: "<<a%10<<endl;
    a=a/10;
    cout<<"Quoite: "<<a/10<<endl;
    cout<<"Remain: "<<a%10<<endl;

    return 0;
}