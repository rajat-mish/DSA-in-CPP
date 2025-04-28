#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,2,67,5},n=5;
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=a[i];
        while(j>=0 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
    }
}