#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){ bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
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
}
void printA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){ int arr[]={5,2,3,54,8};
int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    printA(arr,n);

}