#include <bits/stdc++.h>
using namespace std;
vector<string>check(int row, int col, int nr, int nc,string p){
        vector<string>local;
        if(nr==row-1 && nc == col-1){
            local.push_back(p);
            return local;
        }
    vector<string> a; 
    vector<string> b;
    vector<string> c;
    bool flag = 0;
    bool diag = 0;
    if(nr<row && nc<col){
    if(nr==row-1){
        a = check(row, col, nr, nc+1,p+'R');
        flag = 1;
        diag = 1;
    }
    else{
        a = check(row, col, nr, nc+1,p+'R');
    }
    if(flag == 0){
    if(nc==col-1){
        b = check(row, col, nr+1, nc,p+'D');
        diag = 1;
    }
    else{
        b = check(row, col, nr+1, nc,p+'D');
    }
    }
    if(diag==0){
        c = check(row, col, nr+1, nc+1, p+'d');
    }
    
    
    }
    else{
        return local;
    }
    for(int i=0; i<b.size(); i++){
        a.push_back(b[i]);
    }
    for(int i=0; i<c.size(); i++){
        a.push_back(c[i]);
    }
    return a;
    
}


int main()
{
 string p;  
vector<string> ans = check(3,3,0,0,p);
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}
cout<<endl<<ans.size();
    return 0;
}
