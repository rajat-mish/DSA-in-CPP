// Given a sentence ‘str’, return the word that is max length
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
 string str = "proud to be indians";
 vector<string> v;
 stringstream ss(str);
 string t;
 while(ss>>t){
    v.push_back(t);
 }
 int maxc=0;
 int c=0;
 string ans;
 for(int i=0;i<v.size();i++){
    c=v[i].size();
    maxc=max(c,maxc);
       ans=v[i];
 }
 cout<<maxc;
 cout<<endl;
 cout<<ans;
}