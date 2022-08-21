#include <bits/stdc++.h>
using namespace std;

// major problem --> in string if we add null char at any index it will not terminate the string at that point
/*
 string str= "abc";
 str[1] = '\0';
 cout<<str<<" "<<str.size();
  
 output
 ac 3
*/
string removee(string up){
    int size = up.size();
    for(int i=0; i<size; i++){
        up[i] = up[i+1];
    }
    return up;
}

string rearrange(string p, char add, int posi){
 
 string ans;
 for(int i=0; i<posi; i++){
     ans.push_back(p[i]);
 }
 char temp = p[posi];
 ans.push_back(add);
 
 if(temp!='\0'){
 ans.push_back(temp); //most important step took 8 hrs for this
 }
 
 
 int size = p.size();
 for(int i = posi+1; i<size; i++){
     ans.push_back(p[i]);
 }   
   return ans; 
}

void check(string up, string p, vector<string>& ans){
    
    if(up[0]=='\0'){
        // cout<<p<<endl;
        ans.push_back(p);
        return;
    }
    
    int size = p.size();

    string inuse = p;
    
    for(int i=0; i<=size; ++i){
         
        p = inuse;
        p = rearrange(p,up[0],i);
        check(removee(up), p, ans);
    }
  
    // check(removee(up), p, ans);
}

int main()
{
    string up = "abc";
    //total permutation = (total char)! = 3! = 3*2*1 = 6
    //In permutation all char shoul be present
    string p;
    vector<string> ans;
    check(up,p,ans);
    int size= ans.size();
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
     
    return 0;
}
