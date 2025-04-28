//push the zeros at the end of the arr and maintain the relative order of non zero elements
#include<iostream>
using namespace std;
int main(){ int arr[]={5,0,1,2,0,0,4,0,3},n=9;
     for(int i=0;i<n-1;i++){ bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                flag=false;
            }
        }
        if(flag==true){
            break; //if there is no swap in first pass , it means all elements are sorted so no need to continue
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
