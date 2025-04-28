#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){ 
string s = "What is the solution to this problem";
int k=4;
int t;
// vector<string>v;
// string ans="";
//     stringstream ss(s);
//     string t;
//     while(ss>>t){
//         v.push_back(t);
//     }
//     for(int i=v.size()-1;i>=k;i--){
//         v.pop_back();
//     }
//     cout<<v.size();
//     for(int i=0;i<v.size();i++){
        
//     }
//     cout<<ans;
// cout<<s.size();
string ans;
int count=1;

for(int i=0;i<s.size();i++){
    if(s[i]%32==0){
        count++;
    }
}
// cout<<count;
int c=0;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]%32==0){
        c++;
        
        
    }
    if(c==count-k){
        t=i;
        break;
    }
}
cout<<t<<endl;

for(int i=s.size()-1;i>=t;i--){
   s.pop_back();
}
for(int i=0;i<s.size();i++){
    cout<<s[i];
}
    
    
}