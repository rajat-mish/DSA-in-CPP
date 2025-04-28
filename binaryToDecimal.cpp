#include<iostream>
using namespace std;

int btod(string s){
    int res=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        int num=ch-'0';
        res+=num*1<<(n-i-1);  // (1 left shift x)==2^x hota hai
    }
    return res;
}

int main(){
    string s="010";
   
    cout<<btod(s);
}