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

int i=0;
int j=v.size()-1;
while(i<=j){
    int t=v[i];
    v[i]=v[j];
    v[j]=t;

    i++;
    j--;
}

for(int i=0;i<n;i++){
cout<<v[i]<<" ";
}

}