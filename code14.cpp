//Important concept--> Passing ans of cuurent function call ans recursive function call to the previous void
#include<bits/stdc++.h>
using namespace std;

bool startwith(string str, string start){
    bool ans = 0;
    int size = start.length();
    for(int i=0; i<size; i++){
        if(str[i]==start[i]){
            ans = 1;
        }
        else{
            ans = 0;
        }
    } 
    return ans;
    
}


string removee(string str)
{
    int size = str.length();
    for(int i=0; i<size; i++){
        str[i]=str[i+1];
    }
    return str;
}

void fun(string p, string up){
    
    if(up[0]=='\0'){
        cout<<p;
        return;
    }
    
    char temp = up[0];
    if(temp=='a'){
        string temp = removee(up);
        up = temp;
          fun(p,up);
    }
    else{
        p.push_back(temp);
        string temp = removee(up);
        up=temp;
         fun(p,up);
    }
}


// string fun(string up){
    
//     if(up[0]=='\0'){
//         return "";
//     }
    
//     char tempo = up[0];
//     if(tempo=='a'){
//         string temp = removee(up);
//         up = temp;
//          return fun(up);
//     }
//     else{
//         string temp = removee(up);
//         up=temp;
//         return tempo + fun(up);
//         //passing ans of current function  call and recursive function call to the previous function
//     }
// }

int main()
{
    //string will treated same as int char float, whenever we pass string to a funtion a copy of string is created rather than 
    //the original string is passed
  string str = "bbbccaaddaa";
  string ans;
  fun(ans,str);


    return 0;
}
