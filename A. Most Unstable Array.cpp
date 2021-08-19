#include<bits/stdc++.h>
#define push_back pb
 
using namespace std;
 
typedef long long ll;
 
void solve(){
 
    int t;
    cin>>t;
 
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n==1){
            cout<<"0\n";
        }else if(n==2){
            cout<<m<<"\n";
        }else{
            cout<<m*2<<"\n";
        }
    }
 
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    //freopen("in.txt", "r", stdin);
 
    solve();
 
 
    return 0;
}