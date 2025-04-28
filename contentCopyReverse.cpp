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

    vector<int> x;
    for(int i=0;i<n;i++){
        x.push_back(v[n-1-i]);
        
    }
for(int i=0;i<n;i++){
cout<<x[i]<<" ";
}


}