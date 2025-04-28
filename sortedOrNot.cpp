#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >v;
    int n;
    cout<<"Enter the size :";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements:";

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
 bool flag=true;
 for(int i=0;i<n-1;i++){
    if(v[i]>v[i+1]){
        flag=false;
        break;
    }
 }
 if(flag==true){
    cout<<"sorted";
 }else{
    cout<<"unsorted";
 }




}