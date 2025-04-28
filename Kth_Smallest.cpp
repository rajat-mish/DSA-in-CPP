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

int kthS(int arr[],int si,int ei,int k){
    
    int j=partition(arr,si,ei);
    if(j+1==k)return arr[j];
    if(j+1<k){
 return kthS(arr,j+1,ei,k);
    }
   return kthS(arr,si,j-1,k);
   
}

int main(){
    int arr[]={34,56,2,12,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<kthS(arr, 0, n - 1,k);

    
  
}