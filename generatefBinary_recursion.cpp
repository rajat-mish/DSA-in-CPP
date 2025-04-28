#include<iostream>
#include<vector>
using namespace std;
// length given hogi ,hume us lenght is sari possible binary string print krvani h , jisme is consecutive 1 na ho
void generate(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;


    }

    generate(s+'0',n);
    if(s.size()==0 || s[s.size()-1]=='0'){
        generate(s+'1',n);
    }
}

int main(){
    int n=3;
    generate("",n);
}