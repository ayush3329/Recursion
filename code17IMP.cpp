//all subset of "abc"
#include<bits/stdc++.h>
using namespace std;

string remove_first_char(string up){
    int size = up.length();
    for(int i=0; i<size; i++){
        up[i] = up[i+1];
    }
    return up;
}

string *ch;

void fun(string up, string p){
    
    if(up[0]=='\0'){
        if(p[0]=='\0'){
            *ch = "NULL";
        }
        else{
        *ch = p; 
        }
        ++ch;
        
        return; 
    }
      string temp1 = p;
      string temp2 = up;

        //take it
        p.push_back(up[0]);
        string rem = remove_first_char(up);
        up = rem;
        fun(up,p);
        
        p = temp1;
        up = temp2;
        
        //ignore it
        rem = remove_first_char(up);
        up = rem;
        fun(up,p);   
}

int main()
{
    string up = "abc";
    string p;
    string arr[8];
    ::ch = arr;
    fun(up,p);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
