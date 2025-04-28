#include<iostream>
#include<stack>
using namespace std;

int solve(int v1,int v2,char ch){
    if(ch=='+')return v1+v2;
    else if(ch=='-')return v1-v2;
    else if(ch=='*')return v1*v2;
    else if(ch=='/')return v1/v2;

    
}

int main(){
    stack<int>val;
 

    string s="79+4*8/5+3-";

    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            
    
                 
                    int v2=val.top();
                    val.pop();
                    int v1=val.top();
                    val.pop();
                    int ans=solve(v1,v2,s[i]);
                    val.push(ans);
            }

           
            }
            
            cout<<(7+9)*4/8+5-3;
        }
    

   
 

