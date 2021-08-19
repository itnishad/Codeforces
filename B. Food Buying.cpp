#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,res=0;
        cin>>n;
        while(n!=0){
                if(n<10){
                    res+=n;n-=n;
                }
            res+=(n/10)*10;
            n=(n-((n/10)*10))+(n/10);
            }
        printf("%lld\n",res);
    }
    return 0;
}