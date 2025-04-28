#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotEle=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotEle){
            count++;
        }
    }
    int pivotIndex=count + si;

    swap(arr[(si+ei)/2],arr[pivotIndex]);
    int i=si;
    int j=ei;

    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotEle ){
            i++;
            
        }
        if(arr[j]>pivotEle){
            j--;
        }
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        

    }
    return pivotIndex;
}

void quickS(int arr[],int si,int ei){
    if(si>=ei){return ;}
    int j=partition(arr,si,ei);
    quickS(arr,si,j-1);
    quickS(arr,j+1,ei);
}

int main(){
    int arr[]={34,56,2,12,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    quickS(arr, 0, n - 1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
}