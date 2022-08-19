
//skiping apple not app
#include <iostream>
using namespace std;

string remove_first_char(string str)
{
    int size = str.length();
    for(int i=0; i<size; i++){
        str[i]=str[i+1];
    }
    return str;
}
/*
-1 --> not app not apple
1 --> apple
0 --> app not apple
*/

int checking(string up, string notskip, string skip){
int i;
int ans = -1; //not apple not app
int size = notskip.length();
for(i=0; i<size; i++){
    if(up[0]!=notskip[0]){
        return ans;
    }
    else if(up[i]==notskip[i]){
        continue;
    }
    else{
        break;
    }
}
if(i==size){
    return 1; //apple
}

size = skip.length();
for(i=0; i<size; i++){
    if(up[i]==skip[i]){
        continue;
    }else{
        return -1;
    }
}
return 0;
}


string check(string up, string p, string notskip, string skip){
    
    if(up[0]=='\0'){
        return p;
    }
    
    int skip_notskip = checking(up, notskip, skip);
    
    if(skip_notskip == -1 || skip_notskip==1){
        p.push_back(up[0]);
        string temp = remove_first_char(up);
        up = temp;
        return check(up,p,notskip,skip);
    }
    else{
        int size = skip.length();
        for(int i=0; i<size; i++){
            string tempo = remove_first_char(up);
            up=tempo;
        }
        return check(up,p,notskip,skip);
    }
}



int main()
{
    string up = "ayushayushi ayushiayush";
    string p;
    string notskip = "ayushi";
    string skip = "ayush";
    cout<<check(up,p,notskip,skip);
    
    return 0;
}
