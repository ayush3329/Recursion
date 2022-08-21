#include <bits/stdc++.h>
using namespace std;

string removee(string up){
    int size = up.size();
    for(int i=0; i<size; i++){
        up[i]=up[i+1];
    }
    return up;
}


vector<string>check(string up, string p){
    vector<string>local;
    
    if(up[0]=='\0'){
        local.push_back(p);
        return local;
    }
    char a = up[0];
    string temp  = p;
    
    //takeit
    p.push_back(a);
    vector<string>taking = check(removee(up),p);
    
    
    vector<string>ignoring = check(removee(up), temp);
    
    
    int size1 = taking.size();
    for(int i=0; i<size1; i++){
        local.push_back(taking[i]);
    }
    
    size1 = ignoring.size();
     for(int i=0; i<size1; i++){
        local.push_back(ignoring[i]);
    }
    
    return local;
    
}



int main()
{
   string up = "abc";
   string p;
   
   vector<string>ans = check(up,p);
   int size = ans.size();
   for(int i=0; i<size; i++){
       cout<<ans[i]<<" ";
   }
   
   return 0;
}
