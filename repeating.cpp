#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int>v={1,2,3,4,4};
    // int a[5];
    // for(int i=0;i<5;i++){
    //     a[i]=0;
    // }
    // for(int i=0;i<v.size();i++){
    //     a[v[i]]++;
    // }
    
    // for(int i=0;i<5;i++){
    //     if(a[i]==2){
    //         cout<<i;
    //         break;
    //     }
    // }

// int c,b=4;
// cin>>c>>b;
// cout<<endl;


//cout<<c+b<<"1";
// char c='a';
// cout<<(int)'a';
//cout<<"cpp";
	int N;
    cin>>N;
	int A[N];
	int count1=0;
	int count2=0;
	cout<<"cpp";
	for(int i=0;i<N;i++){
	    cin>>A[i];
	}
	
	for(int i=0;i<N;i++){
	    if(A[i]%2==0){
	        count1++;
	    }
	    else{
	        count2++;
	    }
	}
	if(count1>count2){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	    cout<<"NOT READY"<<endl;
	}
	return 0;




}