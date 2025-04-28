#include<iostream>
#include<stack>
using namespace std;

int prio(char ch){
    if(ch=='+'|| ch=='-'){
        return 1;
    }
    else{
        return 2;
    }
}

int solve(int v1,int v2,char ch){
    if(ch=='+')return v1+v2;
    else if(ch=='-')return v1-v2;
    else if(ch=='*')return v1*v2;
    else if(ch=='/')return v1/v2;
}

int main(){
    stack<int>val;
    stack<char>op;

    string s="(7+9)*4/8+5-3";

    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            if(op.size()==0)op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(')op.push(s[i]);

            else if(s[i]==')'){
                 while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int v2=val.top();
                    val.pop();
                    int v1=val.top();
                    val.pop();
                    int ans=solve(v1,v2,ch);
                    val.push(ans);
                }
                op.pop();
            }

            else if(prio(s[i])>prio(op.top()))op.push(s[i]);

            else{
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch=op.top();
                    op.pop();
                    int v2=val.top();
                    val.pop();
                    int v1=val.top();
                    val.pop();
                    int ans=solve(v1,v2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

     while(op.size()>0 ){
                    char ch=op.top();
                    op.pop();
                    int v2=val.top();
                    val.pop();
                    int v1=val.top();
                    val.pop();
                    int ans=solve(v1,v2,ch);
                    val.push(ans);
                }
   int a=(7+9)*4/8+5-3;
   cout<<a<<endl;

}