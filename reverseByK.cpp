#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reversepart(int i,int j,vector<int> &c){
    while(i<=j){
        // int t=c[i];
        // c[i]=c[j];
        // c[j]=t;
        swap(c[i],c[j]);

        


        i++;
        j--;
    }return;
}



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
    int k;
    cout<<"Enter k:";
    cin>>k;
    if(k>n){
        k=k%n;
    }

  reversepart(0,n-k-1,v);
  reversepart(n-k,n-1,v);
  reversepart(0,n-1,v);

for(int i=0;i<n;i++){
cout<<v[i]<<" ";
}

}