//Given an integer array and an integer k where k<=size of array, We need to return the kth
//smallest element of the array.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={34,2,7,45,9,8},n=6;
    int k=4;
    sort(arr,arr+n);
    cout<<arr[3];

}