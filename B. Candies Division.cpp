#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k==0){
            printf("%d\n",n);
        }else{
          int res=(n/k)*k;
          if(n%k>k/2){
            res+=k/2;
          }else{
 
          res+=n%k;
          }
          printf("%d\n",res);
    }
    }
    return 0;
}