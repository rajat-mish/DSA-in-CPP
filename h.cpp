#include <bits/stdc++.h>
using namespace std;

 vector<string> permutation(string ans,string s1,vector<string>s){
    if(s1==""){
        s.push_back(ans);
        return s;
    }

    for(int i=0;i<s1.size();i++){
        char ch=s1[i];
        string left=s1.substr(0,i);
        string right=s1.substr(i+1);
        permutation(ans+ch,left+right,s);
    }
    return s;
    
}

vector<string> permutation2(string a,string s2,vector<string>v){
    if(s2==""){
        v.push_back(a);
        return v;
    }

    for(int i=0;i<s2.size();i++){
        char ch=s2[i];
        string left=s2.substr(0,i);
        string right=s2.substr(i+1);
        permutation2(a+ch,left+right,v);
    }
    return v;
    
}


int main() {

  string s1 = "ab";
    string s2 = "eidbaooo";
    vector<string> v;
    vector<string> s;
    permutation("", s1, v);
    s = permutation2("", s2, s);

    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }

    }

