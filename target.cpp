#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={2,7,11,15};
    int target=9;
    vector<int>v;
        int l=0;
        int h=numbers.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(numbers[m]+numbers[l]==target){
                v.push_back(l+1);
                v.push_back(m+1);
            }
            else if(numbers[m]+numbers[h]==target){
                 v.push_back(m+1);
                v.push_back(h+1);
            }
            else if(numbers[m]+numbers[l]<target){
                l=m+1;
            }
            else{
                h=m-1;            }
        }
       for(int i=0;i<v.size();i++){
        cout<<v[i];
       }
}