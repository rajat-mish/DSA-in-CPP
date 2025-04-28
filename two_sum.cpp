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

    int target;
    cout<<"Enter target:";
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }






}