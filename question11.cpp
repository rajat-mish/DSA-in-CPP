// Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

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
 int sum1=0,sum2=0;
 for(int i=0;i<n;i++){
if(i%2==0){
    sum1 +=v[i];
}
else{
    sum2 +=v[i];
}
 }
if(sum1 >sum2){
    cout<<"Difference is:"<<sum1-sum2;
}
else{
    cout<<"Difference is:"<<sum2-sum1;
}
}