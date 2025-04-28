#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

bool isprime(int n){
   
    if(n<=1){
        return false;
    }
  
   
        for(int j=2;j<sqrt(n);j++){
            if(n%j==0){
            return false;
            
            }
        }
        return true;
    }

 int main(){
    int ans=0;
int n=7;
        int k=n;
         int p=n;
    int count=0;
    
     while(n%2==0){
        n=n/2;
        count++;
    }
    ans=ans+2*count;

     //cout<<"ans after 2:"<<ans<<endl;
    
    //cout<<"for 2:"<<count<<endl;


    
   for(int i=3;i<=(k);i++){
    
    
    int count1=0;int num=k;
     while(num%i==0){
       
        num=num/i;
        count1++;
    }
   if(count1>0 && isprime(i)){
     cout<<"for "<<i<<":"<<count1<<endl;
     if(i<10){
         ans=ans+i*count1;
          
     }
    
     else{ 
         int t=i;
        // cout<<t<<endl;
         int sum=0;
         int r;
         while(t>0){
             r=t%10;
             sum=sum+r;
             t=t/10;
         }
         //cout<<"sum "<<sum<<endl;
         ans=ans+count1*sum;
     }
   }
   }
   
   int s=0;
   int u;
   while(p>0){
       u=p%10;
       s=s+u;
       p=p/10;
   }
   cout<<"s:"<<s<<endl;
   cout<<"ans:"<<ans<<endl;
   if(s==ans){
      cout<<1<<endl;
   }
   else{
      cout<<0<<endl;
   }


}