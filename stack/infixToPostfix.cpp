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

string solve(string v1,string v2,char ch){
    string s="";

    s+=v1;
    s+=v2;
        s.push_back(ch);
    return s;
}

int main(){
    stack<string>val;
    stack<char>op;

    string s="(7+9)*4/8+5-3";

    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            if(op.size()==0)op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(')op.push(s[i]);

            else if(s[i]==')'){
                 while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string v2=val.top();
                    val.pop();
                    string v1=val.top();
                    val.pop();
                    string ans=solve(v1,v2,ch);
                    val.push(ans);
                }
                op.pop();
            }

            else if(prio(s[i])>prio(op.top()))op.push(s[i]);

            else{
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch=op.top();
                    op.pop();
                    string v2=val.top();
                    val.pop();
                    string v1=val.top();
                    val.pop();
                    string ans=solve(v1,v2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

     while(op.size()>0 ){
                    char ch=op.top();
                    op.pop();
                    string v2=val.top();
                    val.pop();
                    string v1=val.top();
                    val.pop();
                    string ans=solve(v1,v2,ch);
                    val.push(ans);
                }
   cout<<val.top();

}