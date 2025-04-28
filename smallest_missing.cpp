#include<iostream>
// #include<climits>
using namespace std;
int main(){ int n;
cout<<"Enter the size of the array :";
cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bool flag=false;
    int x=1;
    for(int i=0;i<n;i++){
        if(a[i]<=0)continue;
        if(x!=a[i]){
            cout<<x;
            flag=true;
            break;
        }else{
            x++;
        }
    }
    if(flag==false){
        cout<<"no missing ele";
    }
}