#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
  vector<string> s;
  s.push_back("cat");
  s.push_back("flow");
  s.push_back("goat");

  string a=s[0];
  string b=s[s.size()-1];
  int i=0;
  int n=min(a.size(),b.size());
  string ans="";
  while(i<n){
    if(a[i]==b[i]){
         ans.push_back(a[i]);
    }
    i++;
  }



cout<<ans;









}