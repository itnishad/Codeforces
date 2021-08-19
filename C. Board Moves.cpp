#include<bits/stdc++.h>
#define push_back pb
#define MX 1000000
 
using namespace std;
 
typedef long long ll;
 
ll arr[MX];
 
void sieve(){
        ll sum=0,p=2;
        arr[3]=8;
        sum=8;
        for(ll i=5;i<=MX;i+=2){
            ll x=i-2;
            arr[i]=sum+(((i*i)-(x*x))*p);
            sum=arr[i];
            p++;
        }
}
 
void solve(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<arr[n]<<"\n";
 
    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    //freopen("in.txt", "r", stdin);
 
    solve();
 
 
    return 0;
}