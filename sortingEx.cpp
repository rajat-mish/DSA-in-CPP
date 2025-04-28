#include<iostream>
using namespace std;
int main(){
    string s="rajat";
    for(int i=0;i<s.size()-1;i++){
        bool flag=false;
        for(int j=0;j<s.size()-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout<<s;

}