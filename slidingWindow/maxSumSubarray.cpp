#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;//size of subarray
    int maxSum=INT_MIN;
    int i=1;
    int j=k;
    int preSum=0;
    for(int i=0;i<k;i++){
        preSum+=arr[i];
    }

    maxSum=preSum;
    while(j<n){
        int currSum=preSum+arr[j]-arr[i-1];
        if(currSum>maxSum){
            maxSum=currSum;


        }
        preSum=currSum;
        i++;
        j++;
    }

    cout<<maxSum;
}