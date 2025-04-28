#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="This is vscode and it is a IDE";
    vector<string>v;
    stringstream ss(s);
    string t;
    while(ss>>t){
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int maxCount=1;
    int count=1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]){
            count++;
        }
        if(count>maxCount){
            maxCount=count;
        }
        count=1;
    }
    cout<<maxCount;
}