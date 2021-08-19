#include<bits/stdc++.h>
#define push_back pb
 
using namespace std;
 
typedef long long ll;
 
void solve(){
 
    int t;
    cin>>t;
    while(t--){
        int n,k,arr[1000],brr[1000],sar=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sar+=arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+n);
        reverse(brr,brr+n);
 
        for(int i=0;i<k;i++){
            if(arr[i]<brr[i]){
                sar-=arr[i];
                sar+=brr[i];
            }
        }
        cout<<sar<<"\n";
 
    }
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    //freopen("in.txt", "r", stdin);
 
    solve();
 
 
    return 0;
}