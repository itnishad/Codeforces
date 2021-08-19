#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long tot=(a+b+c)/2;
        printf("%lld\n",tot);
    }
    return 0;
}