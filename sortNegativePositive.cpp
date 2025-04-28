#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &a){ int n=a.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]<0) i++;
        if(a[j]>0) j--;
        if(i>j) break;
        if(a[i]>0 &&a[j]<0){
           int t=a[i];
           a[i]=a[j];
           a[j]=t;
            i++;
            j--;
        }
    }

}

int main(){
 vector<int> v;
 v.push_back(5);
 v.push_back(-1);
 v.push_back(-4);
 v.push_back(0);
 v.push_back(10);
 v.push_back(-9);

 sort(v);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
}
