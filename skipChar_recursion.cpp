#include<iostream>
#include<string>
using namespace std;
void skipC(string ans,string original,int i){
    if(i==original.size()){
        cout<<ans;
        return ;
    }
    char c=original[i];
    if(c=='a'){
        skipC(ans,original,i+1);

    }
    else{
        skipC(ans+c,original,i+1);
    }
}
int main(){
skipC("","rajat",0);
}