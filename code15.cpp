#include<bits/stdc++.h>
using namespace std;

bool startwith(string str, string start){
    bool ans = false;
    int size = start.length();
    for(int i=0; i<size; i++){
        if(str[0]!=start[0]){
            return false;
        }
        else if(str[i]==start[i]){
            ans = true;
        }
        else{
            return false;
        }
    } 
    return ans;
    
}

string remove_first_char(string str)
{
    int size = str.length();
    for(int i=0; i<size; i++){
        str[i]=str[i+1];
    }
    return str;
    
}

string check(string p, string up, string error){
    
    if(up[0]=='\0'){
        return p;
    }
    
    bool word = startwith(up,error);
    if(word==false){
        p.push_back(up[0]);
        string rem = remove_first_char(up);
        up = rem;
        return check(p,up,error);
    }
    else{
        int size = error.length();
        for(int i=0; i<size; i++){
            string temp = remove_first_char(up);
            up = temp;
        }
        return check(p,up,error);
        
    }
}

int main()
{
    
    string up= "ayushapple banana ayushapple banana";
    string p;
    cout<<check(p,up,"apple");
    return 0;
}
