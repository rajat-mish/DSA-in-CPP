#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    // int arr[]={19,12,23,8,16},n=5;
    
    // for(int i=0;i<n;i++){
    //     int c=min(a);
    // }
    //vector<string>v;
    string s="Let's take LeetCode contest";
    string ans=s;
    // //cout<<s.size();
    // string ans;
    // stringstream ss(s);
    // while(ss>>ans){
    //     v.push_back(ans);
    // }
    // cout<<ans.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }
    //cout<<ans;
    int j;
    int l=0;
    vector<int>v;
    while(l!=s.size()){
        
        if(s[l]%32==0){
            j=l;
           v.push_back(j);
            //break;
        }
    
    // cout<<j;
    l++;
    }
    
    int x=0;
    int y;

    for(int i=0;i<v.size();i++){
       y=v[i]-1;

       while(x<y){
        int t=ans[x];
        ans[x]=ans[y];
        ans[y]=t;
        x++;
        y--;
       }
      x=v[i]+1;
       

    }
    int f=ans.size()-1;
    while (x<f)
    {
       int c=ans[x];
    ans[x]=ans[f];
    ans[f]=c;
    x++;
    f--;
    }
    
   //cout<<ans<<endl;
string k = "w";
cout<<k.substr(0,1);
    // string a=k.substr(0,k.size()/2);
    //  string b=k.substr((k.size()/2),k.size());
    // cout<<a<<endl;
    // cout<<b;
    
   
}