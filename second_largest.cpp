#include<iostream>
#include<climits>
using namespace std;
int main(){ int n;
cout<<"Enter the size of the array :";
cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
   
     for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }}

    int secmax=INT_MIN;
     for(int i=1;i<n;i++){
        if(a[i]<max && a[i]>secmax){
            secmax=a[i];
        }}

        cout<<"Second max element is :"<<secmax;

}